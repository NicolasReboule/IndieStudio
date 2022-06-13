/*
** EPITECH PROJECT, 2022
** StaticBody.cpp
** File description:
** StaticBody.cpp
*/

#include "GameEngine/Nodes/StaticBody.hpp"

#include <utility>

GameEngine::StaticBody::StaticBody(std::string name, const std::string &modelPath, const std::string &texturePath)
    : Node(std::move(name)), _model(modelPath, texturePath), _position((Vector3f){0, 0, 0}), _scale((Vector3f){1, 1, 1})
{
    this->_rotationDegrees = 0;
}

void GameEngine::StaticBody::ready()
{
}

void GameEngine::StaticBody::update(float delta)
{
}

void GameEngine::StaticBody::draw()
{
    raylib::ModelHelper::drawModel(this->_model);
}

Vector3f GameEngine::StaticBody::getPosition()
{
    return this->_position;
}

float GameEngine::StaticBody::getRotationDegrees()
{
    return this->_rotationDegrees;
}

Vector3f GameEngine::StaticBody::getSCale()
{
    return this->_scale;
}

void GameEngine::StaticBody::setPosition(Vector3f pos)
{
    this->_position = pos;
    //this->_model.setPosition(this->_position.x, this->_position.y, this->_position.z);
}

void GameEngine::StaticBody::setRotationDegrees(float degrees)
{
    this->_rotationDegrees = degrees;
}

void GameEngine::StaticBody::setScale(Vector3f newScale)
{
    this->_scale = newScale;
}


