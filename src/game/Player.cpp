/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"
#include "game/Bomb.hpp"

Indie::Player::Player(const std::string &name, const std::string &modelPath, const std::string &texturePath, int &numpadId) : GameEngine::KinematicBody(name, modelPath, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
}

Indie::Player::Player(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath, int &numpadId) : GameEngine::KinematicBody(name, type, texturePath), _anim((*this)->getModel(), "./assets/player.iqm")
{
    this->_numpadId = numpadId;
}

void Indie::Player::ready()
{
}

void Indie::Player::update(float delta)
{
    const float speed = 5.0f * delta;
    float gamepadX = raylib::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_X);
    float gamepadY = raylib::input::GamepadHelper::getGamepadAxisMovement(this->_numpadId, GAMEPAD_AXIS_LEFT_Y);

    if (raylib::input::KeyboardHelper::isKeyDown(KEY_RIGHT) || raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)
    || gamepadX > 0) {
        Vector3f newPosition =   {this->_position.x + speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(180, {0, 1, 0});
        this->moveAndCollide(newPosition);
        this->_anim.update(0);
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_LEFT) || raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_LEFT)
    || gamepadX < 0) {
        Vector3f newPosition =   {this->_position.x - speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(0, {0, 1, 0});
        this->moveAndCollide(newPosition);
        this->_anim.update(0);
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_UP) || raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_UP)
    || gamepadY < 0) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z - speed};
        this->setRotationDegrees(270, {0, 1, 0});
        this->moveAndCollide(newPosition);
        this->_anim.update(0);
    }
    if (raylib::input::KeyboardHelper::isKeyDown(KEY_DOWN) || raylib::input::GamepadHelper::isGamepadButtonDown(this->_numpadId, GAMEPAD_BUTTON_LEFT_FACE_DOWN)
    || gamepadY > 0) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z + speed};
        this->setRotationDegrees(90, {0, 1, 0});
        this->moveAndCollide(newPosition);
        this->_anim.update(0);
    }

    auto sceneManager = GameEngine::SceneManager::getInstance();
    auto random = raylib::Random();

    if (raylib::input::KeyboardHelper::isKeyPressed(KEY_SPACE) || raylib::input::GamepadHelper::isGamepadButtonPressed(this->_numpadId, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        auto bomb = std::make_shared<Indie::Bomb>("bomb" + std::to_string(random.generate(0, 99999)), "assets/bomb.obj");
        (*bomb)->setRotationAxis({1, 0, 0});
        (*bomb)->setRotationAngle(-90);
        int x = this->_position.x;
        int z = this->_position.z;
        float convertx = x;
        float convertz = z;
        if (this->_position.x > 0)
            convertx += 0.5;
        else
            convertx -= 0.5;
        if (this->_position.z > 0)
            convertz += 0.5;
        else
            convertz -= 0.5;
        Vector3f pos = {convertx, 0.5, convertz};
        bomb->setScale({0.9, 0.9, 0.9});

        bomb->setPosition(pos);
        sceneManager->addNode(bomb);
    }
}


