/*
** EPITECH PROJECT, 2022
** TextureRect.cpp
** File description:
** TextureRect.cpp
*/


#include "GameEngine/Nodes/2D/TextureRect.hpp"
#include <utility>

GameEngine::TextureRect::TextureRect(const std::string &name, const std::string& filename, Vector2f position, Vector2f scale, float degrees, const raylib::RlColor &color)
    : Node2D(name), _texture(filename), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void GameEngine::TextureRect::draw()
{
    Rectangle rectangle;
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.width = (float) this->_texture.getWidth();
    rectangle.height = (float) this->_texture.getHeight();
    raylib::DrawTextureHelper::drawTextureRec(this->_texture, rectangle, this->_position, this->_color);
}

Vector2f GameEngine::TextureRect::getPosition()
{
    return this->_position;
}

void GameEngine::TextureRect::setPosition(Vector2f position)
{
    this->_position = position;
}

Vector2f GameEngine::TextureRect::getScale()
{
    return this->_scale;
}

void GameEngine::TextureRect::setScale(Vector2f scale)
{
    this->_scale = scale;
}

float GameEngine::TextureRect::getRotationDegrees()
{
    return this->_rotationDegrees;
}

void GameEngine::TextureRect::setRotationDegrees(float rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}

void GameEngine::TextureRect::ready()
{
}

void GameEngine::TextureRect::update()
{
}

void GameEngine::TextureRect::setColor(unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
    this->_color.setColor(r, g, b, a);
}

raylib::RlColor &GameEngine::TextureRect::getColor()
{
    return this->_color;
}

const raylib::RlColor &GameEngine::TextureRect::getColor() const
{
    return this->_color;
}
