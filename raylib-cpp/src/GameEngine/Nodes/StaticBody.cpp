/*
** EPITECH PROJECT, 2022
** StaticBody.cpp
** File description:
** StaticBody.cpp
*/

#include "GameEngine/Nodes/StaticBody.hpp"

gameengine::StaticBody::StaticBody(const std::string &name, const std::string &modelPath, const std::string &texturePath)
    : Node(name), _model(modelPath, texturePath), _position({0, 0, 0}), _scale({1, 1, 1})
{
    this->_rotationDegrees = 0;
    this->_collisionEnable = true;
}

gameengine::StaticBody::StaticBody(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturepath)
    : Node(name), _model(type, texturepath), _position({0, 0, 0}), _scale({1, 1, 1})
{
    this->_rotationDegrees = 0;
    this->_collisionEnable = true;
}

void gameengine::StaticBody::ready()
{
}

void gameengine::StaticBody::update(float delta)
{
}

void gameengine::StaticBody::draw()
{
    raylib::ModelHelper::drawModel(this->_model);
}

Vector3f gameengine::StaticBody::getPosition()
{
    return this->_position;
}

float gameengine::StaticBody::getRotationDegrees()
{
    return this->_rotationDegrees;
}

Vector3f gameengine::StaticBody::getScale()
{
    return this->_scale;
}

void gameengine::StaticBody::setPosition(Vector3f pos)
{
    this->_position = pos;
    this->_model.setPosition(this->_position);
}

void gameengine::StaticBody::setRotationDegrees(float degrees, Vector3f rotationAxis)
{
    this->_rotationDegrees = degrees;
    this->_model.setRotationAxis(rotationAxis);
    this->_model.setRotationAngle(degrees);
}

void gameengine::StaticBody::setScale(Vector3f newScale)
{
    this->_scale = newScale;
    this->_model.setScale(newScale);
}

void gameengine::StaticBody::setColor(raylib::RlColor color)
{
    this->_model.setColor(color.getColor());
}

Color gameengine::StaticBody::getColor()
{
    return this->_model.getColor();
}

raylib::RlModel *gameengine::StaticBody::operator->()
{
    return &this->_model;
}

const BoundingBox &gameengine::StaticBody::getBoundingBox() const
{
    return this->_model.getBoundingBox();
}

void gameengine::StaticBody::setBoundingBox(BoundingBox &boundingBox)
{
    this->_model.setBoundingBox(boundingBox);
}

bool &gameengine::StaticBody::getIsCollsionEnable()
{
    return this->_collisionEnable;
}

void gameengine::StaticBody::setCollisionEnable(bool value)
{
    this->_collisionEnable = value;
}

/*
void gameengine::StaticBody::collisionBox()
{
    std::cout << "(" << this->_model.getBoundingBox().max.x << "," << this->_model.getBoundingBox().max.y << "," << this->_model.getBoundingBox().max.x << ")" << std::endl;
}

*/
