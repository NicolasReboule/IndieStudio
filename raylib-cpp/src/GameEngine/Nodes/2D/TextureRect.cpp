/*
** EPITECH PROJECT, 2022
** TextureRect.cpp
** File description:
** TextureRect.cpp
*/

#include "GameEngine/Nodes/2D/TextureRect.hpp"

gameengine::node::_2D::TextureRect::TextureRect(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture, \
const Vector2f &position, const Vector2f &scale, const float &degrees, const raylib::RlColor &color)
    : Node2D(name), _texture(texture), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void gameengine::node::_2D::TextureRect::draw()
{
    Rectangle rectangle;
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.width = (float) this->_texture->getWidth();
    rectangle.height = (float) this->_texture->getHeight();
    raylib::helper::draw::DrawTextureHelper::drawTextureRec(*this->_texture, rectangle, this->_position, this->_color);
}

const Vector2f &gameengine::node::_2D::TextureRect::getPosition() const
{
    return this->_position;
}

void gameengine::node::_2D::TextureRect::setPosition(const Vector2f &position)
{
    this->_position = position;
}

const Vector2f &gameengine::node::_2D::TextureRect::getScale() const
{
    return this->_scale;
}

void gameengine::node::_2D::TextureRect::setScale(const Vector2f &scale)
{
    this->_scale = scale;
}

float gameengine::node::_2D::TextureRect::getRotationDegrees() const
{
    return this->_rotationDegrees;
}

void gameengine::node::_2D::TextureRect::setRotationDegrees(const float &rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}

void gameengine::node::_2D::TextureRect::init()
{
}

void gameengine::node::_2D::TextureRect::update(const float &delta)
{
}

void gameengine::node::_2D::TextureRect::setColor(const raylib::RlColor &color)
{
    this->_color = color;
}

raylib::RlColor &gameengine::node::_2D::TextureRect::getColor()
{
    return this->_color;
}

const raylib::RlColor &gameengine::node::_2D::TextureRect::getColor() const
{
    return this->_color;
}
