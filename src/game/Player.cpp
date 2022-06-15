/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"
#include "game/Bomb.hpp"

indie::Player::Player(const std::string &name, const std::string &modelPath, const std::string &texturePath, int &numpadId) : gameengine::KinematicBody(name, modelPath, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
}

indie::Player::Player(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath, int &numpadId) : gameengine::KinematicBody(name, type, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
}

void indie::Player::ready()
{
}

void indie::Player::update(float delta)
{
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
        //this->_numpadId = this->_numpadId;
        //this->_anim.update(1);
    } else {
        this->_anim.update(0);
        Vector3f newPosition = {this->_position.x + speed * direction.x, this->_position.y + speed * direction.y,
                                this->_position.z + speed * direction.z};
        this->moveAndCollide(newPosition);
    }

    this->spawnBomb();
}

void indie::Player::spawnBomb()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    if (raylib::input::KeyboardHelper::isKeyPressed(KEY_SPACE) || raylib::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        auto random = raylib::Random();
        auto bomb = std::make_shared<indie::Bomb>("bomb" + std::to_string(random.generate(0, 99999)), "assets/bomb.obj");
        (*bomb)->setRotationAxis({1, 0, 0});
        (*bomb)->setRotationAngle(-90);

        int x = this->_position.x;
        int z = this->_position.z;
        float convertx = x;
        float convertz = z;
        if (this->_position.x > 0)
            convertx += 0;
        else
            convertx -= 1;

        if (this->_position.z > 0)
            convertz += 0;
        else
            convertz -= 1;

        BoundingBox box = {{-0.5, 0, -0.5},{0.4,  1, 0.4}};
        bomb->setBoundingBox(box);
        Vector3f pos = {convertx, 0.5, convertz};
        bomb->setScale({0.9, 0.9, 0.9});

        bomb->setPosition(pos);
        sceneManager->addNode(bomb);
    }
}
