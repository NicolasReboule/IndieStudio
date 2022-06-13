/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Player.cpp
*/

#include "game/Player.hpp"

Indie::PLayer::PLayer(const std::string &name, const std::string &modelPath, const std::string &texturePath) : GameEngine::KinematicBody(name, modelPath, texturePath)
{
}

Indie::PLayer::PLayer(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : GameEngine::KinematicBody(name, type, texturePath)
{
}

void Indie::PLayer::ready()
{
}

void Indie::PLayer::update(float delta)
{
    const float speed = 0.1f;

    if (raylib::KeyboardHelper::isKeyDown(KEY_RIGHT)) {
        //std::cout << "(" << this->_model.getBoundingBox().min.x << "," << this->_model.getBoundingBox().min.y << "," << this->_model.getBoundingBox().min.x << ")" << std::endl;
        //std::cout << "(" << this->_model.getBoundingBox().max.x << "," << this->_model.getBoundingBox().max.y << "," << this->_model.getBoundingBox().max.x << ")" << std::endl;
        Vector3f newPosition =   {this->_position.x + speed, this->_position.y, this->_position.z};
        this->moveAndCollide(newPosition);
    }
    if (raylib::KeyboardHelper::isKeyDown(KEY_LEFT)) {
        Vector3f newPosition =   {this->_position.x - speed, this->_position.y, this->_position.z};
        this->moveAndCollide(newPosition);
    }
}


