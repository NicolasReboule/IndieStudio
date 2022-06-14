/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"

Indie::Player::Player(const std::string &name, const std::string &modelPath, const std::string &texturePath) : GameEngine::KinematicBody(name, modelPath, texturePath)
{
}

Indie::Player::Player(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : GameEngine::KinematicBody(name, type, texturePath)
{
}

void Indie::Player::ready()
{
}

void Indie::Player::update(float delta)
{
    const float speed = 0.1f;

    if (raylib::KeyboardHelper::isKeyDown(KEY_RIGHT)) {
        Vector3f newPosition =   {this->_position.x + speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(180, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::KeyboardHelper::isKeyDown(KEY_LEFT)) {
        Vector3f newPosition =   {this->_position.x - speed, this->_position.y, this->_position.z};
        this->setRotationDegrees(0, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::KeyboardHelper::isKeyDown(KEY_UP)) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z - speed};
        this->setRotationDegrees(270, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
    if (raylib::KeyboardHelper::isKeyDown(KEY_DOWN)) {
        Vector3f newPosition =   {this->_position.x, this->_position.y, this->_position.z + speed};
        this->setRotationDegrees(90, {0, 1, 0});
        this->moveAndCollide(newPosition);
    }
}


