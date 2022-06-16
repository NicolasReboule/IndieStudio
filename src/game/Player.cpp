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

indie::Player::Player(const std::string &name, const std::string &modelPath, const std::string &texturePath, int &numpadId) : gameengine::KinematicBody(name, modelPath, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
    this->_timerAnim = 1.0;
}

indie::Player::Player(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath, int &numpadId) : gameengine::KinematicBody(name, type, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
    this->_timerAnim = 1.0;
}

void indie::Player::ready()
{
}

void indie::Player::update(float delta)
{
    this->_timerAnim -= delta;
    const float speed = 5.0f * delta;
    Vector3f direction = {0, 0, 0};
    float gamepadX = raylib::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_X);
    float gamepadY = raylib::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_Y);
    float deadZone = 0.75f;

    if (raylib::input::KeyboardHelper::isKeyDown(KEY_RIGHT) ||
        raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)
        || gamepadX > deadZone) {
        direction.x = 1;
        this->setRotationDegrees(180, {0, 1, 0});
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_LEFT) ||
        raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_LEFT)
        || gamepadX < -deadZone) {
        direction.x = -1;
        this->setRotationDegrees(0, {0, 1, 0});
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_UP) ||
        raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_UP)
        || gamepadY < -deadZone) {
        direction.z = -1;
        this->setRotationDegrees(270, {0, 1, 0});
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_DOWN) ||
        raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_DOWN)
        || gamepadY > deadZone) {
        direction.z = 1;
        this->setRotationDegrees(90, {0, 1, 0});
    }
    if (direction.x == 0 && direction.z == 0) {
        if (this->_timerAnim <= 0) {
            this->_anim.update(1);
        }
    } else {
        if (this->_timerAnim <= 0) {
            this->_anim.update(0);
        }
        this->_anim.incrementFrameCount(1);

        Vector3f newPosition = {this->_position.x + speed * direction.x, this->_position.y + speed * direction.y,
                                this->_position.z + speed * direction.z};
        this->moveAndCollide(newPosition);
    }


    auto sceneManager = gameengine::SceneManager::getInstance();

    if (raylib::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_MIDDLE_RIGHT)) {

        std::cout << "start pressed" << std::endl;
        auto &buttonResume = dynamic_cast<indie::ButtonResume &>(*sceneManager->getNode("buttonResume"));
        auto &buttonMainMenu = dynamic_cast<indie::ButtonMainMenu &>(*sceneManager->getNode("buttonMainMenu"));
        auto &buttonQuit = dynamic_cast<indie::ButtonQuitx05 &>(*sceneManager->getNode("buttonQuit"));

        buttonResume.setHiding(false);
        buttonMainMenu.setHiding(false);
        buttonQuit.setHiding(false);
        sceneManager->setPaused(true);
    }

    this->spawnBomb();

    if (this->_timerAnim <= 0)
        this->_timerAnim = 0.09;
}

void indie::Player::spawnBomb()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    if (raylib::input::KeyboardHelper::isKeyPressed(KEY_SPACE) || raylib::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        auto random = raylib::Random();
        auto bomb = std::make_shared<indie::Bomb>("bomb" + std::to_string(random.generate(0, 99999)), "assets/bomb.obj");
        (*bomb)->setRotationAxis({1, 0, 0});
        (*bomb)->setRotationAngle(-90);

        BoundingBox box = {{-0.5, 0, -0.5},{0.4,  1, 0.4}};
        bomb->setBoundingBox(box);
        bomb->setScale({0.9, 0.9, 0.9});

        bomb->setPosition({std::round(this->_position.x), 0.5, std::round(this->_position.z)});
        sceneManager->addNode(bomb);
    }
}
