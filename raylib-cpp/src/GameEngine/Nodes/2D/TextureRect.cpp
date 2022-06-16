/*
** EPITECH PROJECT, 2022
** TextureRect.cpp
** File description:
** TextureRect.cpp
*/


#include "GameEngine/Nodes/2D/TextureRect.hpp"
#include <utility>

gameengine::TextureRect::TextureRect(const std::string &name, const std::string& filename, Vector2f position, Vector2f scale, float degrees, const raylib::RlColor &color)
    : Node2D(name), _texture(filename), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void gameengine::TextureRect::draw()
{
    Rectangle rectangle;
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.width = (float) this->_texture.getWidth();
    rectangle.height = (float) this->_texture.getHeight();
    raylib::helper::draw::DrawTextureHelper::drawTextureRec(this->_texture, rectangle, this->_position, this->_color);
}

Vector2f gameengine::TextureRect::getPosition()
{
    return this->_position;
}

void gameengine::TextureRect::setPosition(Vector2f position)
{
    this->_position = position;
}

Vector2f gameengine::TextureRect::getScale()
{
    return this->_scale;
}

void gameengine::TextureRect::setScale(Vector2f scale)
{
    this->_scale = scale;
}

float gameengine::TextureRect::getRotationDegrees()
{
    return this->_rotationDegrees;
}

void gameengine::TextureRect::setRotationDegrees(float rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}

void gameengine::TextureRect::ready()
{
}

void gameengine::TextureRect::update(float delta)
{
}

void gameengine::TextureRect::setColor(unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
    this->_color.setColor(r, g, b, a);
}

raylib::RlColor &gameengine::TextureRect::getColor()
{
    return this->_color;
}

const raylib::RlColor &gameengine::TextureRect::getColor() const
{
    return this->_color;
}
