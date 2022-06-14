/*
** EPITECH PROJECT, 2022
** StaticBody.cpp
** File description:
** StaticBody.cpp
*/

#include "GameEngine/Nodes/StaticBody.hpp"

GameEngine::StaticBody::StaticBody(const std::string &name, const std::string &modelPath, const std::string &texturePath)
    : Node(name), _model(modelPath, texturePath), _position({0, 0, 0}), _scale({1, 1, 1})
{
    this->_rotationDegrees = 0;
}

GameEngine::StaticBody::StaticBody(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath)
    : Node(name), _model(type, texturepath), _position({0, 0, 0}), _scale({1, 1, 1})
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
    this->_model.setPosition(this->_position);
}

void GameEngine::StaticBody::setRotationDegrees(float degrees, Vector3f rotationAxis)
{
    this->_rotationDegrees = degrees;
    this->_model.setRotationAxis(rotationAxis);
    this->_model.setRotationAngle(degrees);
}

void GameEngine::StaticBody::setScale(Vector3f newScale)
{
    this->_scale = newScale;
    this->_model.setScale(newScale);
}

void GameEngine::StaticBody::setColor(raylib::RlColor color)
{
    this->_model.setColor(color.getColor());
}

raylib::RlModel *GameEngine::StaticBody::operator->()
{
    return &this->_model;
}

const BoundingBox &GameEngine::StaticBody::getBoundingBox() const
{
    return this->_model.getBoundingBox();
}

void GameEngine::StaticBody::setBoundingBox(BoundingBox &boundingBox)
{
    this->_model.setBoundingBox(boundingBox);
}

/*
void GameEngine::StaticBody::collisionBox()
{
    std::cout << "(" << this->_model.getBoundingBox().max.x << "," << this->_model.getBoundingBox().max.y << "," << this->_model.getBoundingBox().max.x << ")" << std::endl;
}

*/
