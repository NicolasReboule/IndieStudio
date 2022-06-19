/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"
#include "game/Bomb.hpp"
#include "game/ButtonMainMenu.hpp"
#include "game/ButtonQuitx05.hpp"
#include "game/ButtonResume.hpp"
#include "global/GlobalInstance.hpp"
#include "game/Magma.hpp"
#include "game/Bonus.hpp"
#include "winning/ButtonRestart.hpp"
#include "game/Wall.hpp"

indie::Player::Player(const std::string &name, const raylib::model::RlModel &model, \
const std::shared_ptr<raylib::texture::RlTexture> &texture, const int &numpadId)
    : gameengine::node::_3D::KinematicBody(name, model, texture), _anim(model, "./assets/models/player.iqm")
{
    this->_numpadId = numpadId;
    this->_state = ALIVE;
    this->_timerAnim = 0.16;
    this->_timerGhost = 0.16;

    this->_range = 1;
    this->_speed = 5;
    this->_bombStock = 1;
    this->_tempSpeed = 0;

    this->botTarget = "";
}

void indie::Player::init()
{
}

indie::Player::State indie::Player::getState()
{
    return this->_state;
}

void indie::Player::setState(indie::Player::State state)
{
    this->_state = state;
}

void indie::Player::incrementBombStock(int bombStock)
{
    this->_bombStock += bombStock;
}

void indie::Player::update(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    this->_tempSpeed = this->_speed * delta;
    this->_timerAnim -= delta;

    switch (this->_state) {
        case WINNER:
            if (this->_timerAnim <= 0)
                this->_anim.update(5);
            break;
        case LOOSER:
            if (this->_timerAnim <= 0)
                this->_anim.update(4);
            break;
        case ALIVE:
            this->checkCollisions();
            this->handleInput();
            break;
        case DEAD:
            this->handleInput();
            break;
        case GHOST:
            this->_timerGhost -= delta;
            if (this->_timerGhost <= 0) {
                if (this->getColor().getAlpha() == 255) {
                    Vector4f vector = {255, 255, 255, 200};
                    raylib::RlColor color(vector);
                    this->setColor(color);
                } else {
                    this->setColor(raylib::RlColor::White);
                }
                this->_timerGhost = 0.42;
            }
            this->checkCollisions();
            this->handleInput();
            break;
        default:
            break;

    }

    if (this->_timerAnim <= 0) {
        this->_timerAnim = 0.09;
        this->_anim.incrementFrameCount(2);
    }
}

void indie::Player::spawnBomb()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto random = raylib::Random();

    /*auto mesh = raylib::builder::RlMeshBuilder()
        .setMeshType(raylib::builder::RlMeshBuilder::MeshType::MeshCube)
        .setWidth(1.0f).setHeight(1.0f).setLength(1.0f).build();
    raylib::model::RlModel model = raylib::model::RlModel(std::make_shared<raylib::model::RlMesh>(mesh));*/
    auto bomb = std::make_shared<indie::Bomb>("bomb" + std::to_string(random.generate(0, 99999)),
        std::make_shared<raylib::texture::RlTexture>("assets/textures/blocks/tnt.png"), this->_range, this->getName());

    bomb->setRotationDegrees(-90, {1, 0, 0});

    BoundingBox box = {
        {-0.5, 0, -0.5},
        {0.4,  1, 0.4}
    };
    bomb->setBoundingBox(box);
    //bomb->setScale({0.9, 0.9, 0.9});

    bomb->setPosition({std::round(this->getPosition().x), 0.5, std::round(this->getPosition().z)});

    bomb->setPlayerOwner(this->getName());
    sceneManager->addNode(bomb);

    this->_bombStock -= 1;
}

void indie::Player::checkCollisions()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &magma = dynamic_cast<indie::Magma &>(*node);
            if (raylib::helper::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), magma.getBoundingBox())) {
                this->playerDead();
                globalInstance->_playersAlive -= 1;
                return;
            }
        }
        catch (const std::bad_cast &e) { ;
        }
        try {
            auto &bonus = dynamic_cast<indie::Bonus &>(*node);
            if (raylib::helper::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), bonus.getBoundingBox())) {
                switch (bonus.getBonusType()) {
                    case Bonus::FIRE:
                        std::cout << "bonus fire" << std::endl;
                        this->_range += 1;
                        sceneManager->deleteNode(node->getName());
                        return;
                    case Bonus::BOMB:
                        std::cout << "bonus bomb" << std::endl;
                        this->_bombStock += 1;
                        sceneManager->deleteNode(node->getName());
                        return;
                        return;
                    case Bonus::SPEED:
                        std::cout << "bonus speed" << std::endl;
                        this->_speed += 2;
                        sceneManager->deleteNode(node->getName());
                        return;
                    case Bonus::GHOST:
                        std::cout << "bonus ghost" << std::endl;
                        this->_state = GHOST;
                        sceneManager->deleteNode(node->getName());
                        return;
                }
            }
        }
        catch (const std::bad_cast &e) { ;
        }
    }
}

void indie::Player::handleInput()
{
    if (this->_numpadId < 0) {
        this->botControl();
        return;
    }
    auto &sceneManager = gameengine::SceneManager::getInstance();

    Vector3f direction = {0, 0, 0};
    float gamepadX = raylib::helper::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_X);
    float gamepadY = raylib::helper::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_Y);
    float deadZone = 0.65f;

    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_RIGHT) ||
        raylib::helper::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)
        || gamepadX > deadZone) {
        direction.x = 1;
        this->setRotationDegrees(180, {0, 1, 0});
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_LEFT) ||
        raylib::helper::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_LEFT)
        || gamepadX < -deadZone) {
        direction.x = -1;
        this->setRotationDegrees(0, {0, 1, 0});
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_UP) ||
        raylib::helper::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_UP)
        || gamepadY < -deadZone) {
        direction.z = -1;
        this->setRotationDegrees(270, {0, 1, 0});
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_DOWN) ||
        raylib::helper::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_DOWN)
        || gamepadY > deadZone) {
        direction.z = 1;
        this->setRotationDegrees(90, {0, 1, 0});
    }
    if (direction.x == 0 && direction.z == 0) {
        if (this->_timerAnim <= 0) {
            this->_anim.incrementFrameCount();
            this->_anim.update(1);
        }
    } else {
        if (this->_timerAnim <= 0) {
            this->_anim.incrementFrameCount();
            this->_anim.update(0);
        }

        Vector3f newPosition = {this->getPosition().x + this->_tempSpeed * direction.x, this->getPosition().y + this->_tempSpeed * direction.y,
                                this->getPosition().z + this->_tempSpeed * direction.z};

        if (this->_state == ALIVE) {
            this->moveAndCollide(newPosition);
        } else
            this->moveAndGhosting(newPosition);
    }

    if (this->_state == ALIVE || this->_state == GHOST) {
        if ((raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_SPACE) ||
            raylib::helper::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_RIGHT_FACE_LEFT)) && this->_bombStock > 0) {
            this->spawnBomb();
            if (this->_state == GHOST) {
                this->_state = ALIVE;
                this->setColor(raylib::RlColor::White);
            }
        }
    }


    if (raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_ESCAPE) || raylib::helper::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_MIDDLE_RIGHT)) {

        auto &buttonResume = dynamic_cast<indie::ButtonResume &>(*sceneManager->getNode("buttonResume"));
        auto &buttonRestart = dynamic_cast<indie::ButtonRestartx05 &>(*sceneManager->getNode("buttonRestart"));
        auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
        auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));

        buttonResume.setHiding(false);
        buttonRestart.setHiding(false);
        buttonMainMenu.setHiding(false);
        buttonQuit.setHiding(false);
        sceneManager->setPaused(true);
    }
}

void indie::Player::moveAndGhosting(Vector3f position)
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    BoundingBox temp = {
        {
            this->getBoundingBox().min.x + position.x - this->getPosition().x,
            this->getBoundingBox().min.y + position.y - this->getPosition().y,
            this->getBoundingBox().min.z + position.z - this->getPosition().z,
        },
        {
            this->getBoundingBox().max.x + position.x - this->getPosition().x,
            this->getBoundingBox().max.y + position.y - this->getPosition().y,
            this->getBoundingBox().max.z + position.z - this->getPosition().z,
        }
    };

    if (this->_collisionEnable) {
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &staticBody = dynamic_cast<indie::Wall &>(*node);
                if (staticBody.getName() != this->getName() && staticBody.hasCollisionEnabled() &&
                    raylib::helper::Collision3dHelper::checkCollisionBoxes(temp, staticBody.getBoundingBox())) {
                    return;
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }
    }

    this->setPosition(position);
}

void indie::Player::playerDead()
{
    Vector4f vector = {255, 255, 255, 200};
    raylib::RlColor color(vector);
    this->setColor(color);
    this->_state = DEAD;
    this->_collisionEnable = false;
}

void indie::Player::botControl()
{
    if (this->_state == DEAD)
        return;
    Vector3f right = {this->getPosition().x + this->_tempSpeed * 1, this->getPosition().y + this->_tempSpeed * 0,
                            this->getPosition().z + this->_tempSpeed * 0};
    Vector3f left = {this->getPosition().x + this->_tempSpeed * -1, this->getPosition().y + this->_tempSpeed * 0,
                      this->getPosition().z + this->_tempSpeed * 0};
    Vector3f up = {this->getPosition().x + this->_tempSpeed * 0, this->getPosition().y + this->_tempSpeed * 0,
                      this->getPosition().z + this->_tempSpeed * -1};
    Vector3f down = {this->getPosition().x + this->_tempSpeed * 0, this->getPosition().y + this->_tempSpeed * 0,
                      this->getPosition().z + this->_tempSpeed * 1};

    Vector3f none = {0, 0, 0};


    if (this->_timerAnim <= 0) {
        this->_anim.incrementFrameCount();
        this->_anim.update(0);
    }

    if (this->botTarget.empty()) {
       this->botTarget = "up";
       std::cout << "none" << std::endl;
    }

    //std::cout << "none" << std::endl;

    /*if (this->botTarget == "up")
        std::cout << "up" << std::endl;
    else if (this->botTarget == "down")
        std::cout << "down" << std::endl;
    else if (this->botTarget == "left")
        std::cout << "left" << std::endl;
    else if (this->botTarget == "right")
        std::cout << "right" << std::endl;
    else
        std::cout << "nothing" << std::endl;*/

    auto random = raylib::Random();

    if (this->botTarget == "up" && !this->moveAndCollide(up)) {
        int rand = random.generate(0, 2);
        if (rand == 0)
            this->botTarget = "left";
        else if (rand == 1)
            this->botTarget = "right";
        else if (this->_bombStock > 0)
            this->spawnBomb();
        else
            this->botTarget = "down";
    }
    else if (this->botTarget == "left" && !this->moveAndCollide(left)) {
        int rand = random.generate(0, 2);
        if (rand == 0)
            this->botTarget = "down";
        else if (rand == 1)
            this->botTarget = "up";
        else if (this->_bombStock > 0)
            this->spawnBomb();
        else
            this->botTarget = "right";
    }
    else if (this->botTarget == "down" && !this->moveAndCollide(down)) {
        int rand = random.generate(0, 2);
        if (rand == 0)
            this->botTarget = "right";
        else if (rand == 1)
            this->botTarget = "left";
        else if (this->_bombStock > 0)
            this->spawnBomb();
        else
            this->botTarget = "up";
    }
    else if (this->botTarget == "right" && !this->moveAndCollide(right)) {
        int rand = random.generate(0, 2);
        if (rand == 0)
            this->botTarget = "up";
        else if (rand == 1)
            this->botTarget = "down";
        else if (this->_bombStock > 0)
            this->spawnBomb();
        else
            this->botTarget = "left";
    }
}

void indie::Player::botSpawnBomb()
{

}
