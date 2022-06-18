/*
** EPITECH PROJECT, 2022
** Grid3D.cpp
** File description:
** Grid3D.cpp
*/

#include "GameEngine/Nodes/3D/Grid3D.hpp"

gameengine::node::_3D::Grid3D::Grid3D(const Vector2i &size, const Vector3f &position, const float &spacing, const RlColor &tint, const std::string &name)
    : Node3D(name), _size(size), _position(position), _tint(tint), _scale(1, 1, 1)
{
    this->_size = size;
    this->_position = position;
    this->_spacing = spacing;
    this->_tint = tint;
}

const Vector3f &gameengine::node::_3D::Grid3D::getPosition() const
{
    return this->_position;
}

void gameengine::node::_3D::Grid3D::setPosition(const Vector3f &pos)
{
    this->_position = pos;
}

const Vector3f &gameengine::node::_3D::Grid3D::getScale() const
{
    return this->_scale;
}

void gameengine::node::_3D::Grid3D::setScale(const Vector3f &newScale)
{
    this->_scale = newScale;
}

void gameengine::node::_3D::Grid3D::setRotationDegrees(const float &degrees, const Vector3f &rotationAxis)
{
}

void gameengine::node::_3D::Grid3D::init()
{
}

void gameengine::node::_3D::Grid3D::update(const float &delta)
{
}

void gameengine::node::_3D::Grid3D::draw()
{
    raylib::helper::draw::Draw3DHelper::drawGrid(this->_size, this->_position, this->_spacing, this->_tint);
}

float gameengine::node::_3D::Grid3D::getRotationDegrees() const
{
    return 0;
}

void gameengine::node::_3D::Grid3D::setSize(const Vector2i &size)
{
    this->_size = size;
}

void gameengine::node::_3D::Grid3D::setSpacing(const float &spacing)
{
    this->_spacing = spacing;
}

void gameengine::node::_3D::Grid3D::setTint(const RlColor &tint)
{
    this->_tint = tint;
}
