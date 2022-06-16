/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"
#include "game/Bomb.hpp"

Indie::Player::Player(const std::string &name, const std::string &modelPath, const std::string &texturePath) : gameengine::KinematicBody(name, modelPath, texturePath)
{
}

Indie::Player::Player(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : gameengine::KinematicBody(name, type, texturePath)
{
}

void Indie::Player::ready()
{
}

void Indie::Player::update(float delta)
{
    const float speed = 5.0f * delta;

    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_RIGHT) || raylib::helper::input::GamepadHelper::isGamepadButtonDown(0, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) {
        Vector3f newPosition =   {this->_position.x + speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(180, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_LEFT) || raylib::helper::input::GamepadHelper::isGamepadButtonDown(0, GAMEPAD_BUTTON_LEFT_FACE_LEFT)) {
        Vector3f newPosition =   {this->_position.x - speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(0, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_UP) || raylib::helper::input::GamepadHelper::isGamepadButtonDown(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z - speed};
        this->setRotationDegrees(270, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_DOWN) || raylib::helper::input::GamepadHelper::isGamepadButtonDown(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z + speed};
        this->setRotationDegrees(90, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }

    auto sceneManager = gameengine::SceneManager::getInstance();

    if (raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_SPACE) || raylib::helper::input::GamepadHelper::isGamepadButtonDown(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
        auto bomb = std::make_shared<Indie::Bomb>("bomb1", raylib::builder::RlMeshBuilder::MeshSphere, "./assets/guytex.png");
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


