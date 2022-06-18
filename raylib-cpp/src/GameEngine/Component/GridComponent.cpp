/*
** EPITECH PROJECT, 2022
** GridComponent.cpp
** File description:
** GridComponent.cpp
*/

#include "GameEngine/Component/GridComponent.hpp"

gameengine::component::GridComponent::GridComponent(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &tint, const std::string &name)
    : Node(name), _size(size), _position(position), _tint(tint), _scale(1, 1, 1)
{
    this->_size = size;
    this->_position = position;
    this->_spacing = spacing;
    this->_tint = tint;
    this->_rotationDegrees = 0;
}

Vector3f gameengine::component::GridComponent::getPosition()
{
    return this->_position;
}

void gameengine::component::GridComponent::setPosition(Vector3f pos)
{
    this->_position = pos;
}

Vector3f gameengine::component::GridComponent::getScale()
{
    return this->_scale;
}

void gameengine::component::GridComponent::setScale(Vector3f newScale)
{
    this->_scale = newScale;
}

void gameengine::component::GridComponent::setRotationDegrees(float degrees, Vector3f rotationAxis)
{
    this->_rotationDegrees = degrees;
}

void gameengine::component::GridComponent::ready()
{
    
}

void gameengine::component::GridComponent::update(float delta)
{
}

void gameengine::component::GridComponent::draw()
{
    raylib::helper::draw::Draw3DHelper::drawGrid(this->_size, this->_position, this->_spacing, this->_tint);
}

float gameengine::component::GridComponent::getRotationDegrees()
{
    return this->_rotationDegrees;
}
