/*
** EPITECH PROJECT, 2022
** TextureRect.cpp
** File description:
** TextureRect.cpp
*/


#include "GameEngine/Nodes/2D/TextureRect.hpp"

GameEngine::TextureRect::TextureRect(const std::string& filename, Vector2f position, Vector2f scale, float degrees, raylib::RlColor color)
    : _texture(filename), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void GameEngine::TextureRect::draw()
{
    Rectangle rectangle;
    rectangle.x = 0;
    rectangle.y = 0;
    rectangle.width = (float)this->_texture.getTexture().width;
    rectangle.height = (float)this->_texture.getTexture().height;
    raylib::TextureHelper::drawTextureRec(this->_texture.getTexture(), rectangle, this->_position, this->_color.getColor());
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
