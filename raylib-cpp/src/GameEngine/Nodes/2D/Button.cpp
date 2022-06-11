/*
** EPITECH PROJECT, 2022
** Button.cpp
** File description:
** Button.cpp
*/

#include "GameEngine/Nodes/2D/Button.hpp"
#include "raylib/Math/VectorHelper.hpp"

GameEngine::Button::Button(const std::string& filename)
    : _texture(filename), _position((Vector2f){0, 0}), _scale((Vector2f){1, 1}), _bounds(), _rectangle()
{
    this->_rotationDegrees = 0;

    this->_action = false;
    this->_state = 0;
    this->_frameNum = 3;
    this->_frameHeight = (float)this->_texture.getTexture().height / (float)this->_frameNum;
    this->_rectangle = (Rectangle){0, 0, (float)this->_texture.getTexture().width, (float)this->_frameHeight};
    this->_bounds = (Rectangle){this->_position.x, this->_position.y, (float)this->_texture.getTexture().width, this->_frameHeight};
}

void GameEngine::Button::ready()
{
}

void GameEngine::Button::update()
{
    if (this->_action) {
        this->_action = false;
        this->_state = 0;
        return;
    }
    if (raylib::Collision2DHelper::checkCollisionPointRec(raylib::MouseHelper::getMousePosition(), this->_bounds)) {
        if (raylib::MouseHelper::isMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            this->_state = 2;
            this->_action = true;
        } else
            this->_state = 1;

        //if (raylib::MouseHelper::isMouseButtonReleased(MOUSE_BUTTON_LEFT))
    } else
        this->_state = 0;

    if (this->_action)
        this->pressed();

    this->_rectangle.y = (float)(this->_state) * this->_frameHeight;
}

void GameEngine::Button::draw()
{
    raylib::TextureHelper::drawTextureRec(this->_texture.getTexture(), this->_rectangle, this->_position, RlColor::White);
}

Vector2f GameEngine::Button::getPosition()
{
    return this->_position;
}

void GameEngine::Button::setPosition(Vector2f position)
{
    this->_position = position;
}

Vector2f GameEngine::Button::getScale()
{
    return this->_scale;
}

void GameEngine::Button::setScale(Vector2f scale)
{
    this->_scale = scale;
}

float GameEngine::Button::getRotationDegrees()
{
    return this->_rotationDegrees;
}

void GameEngine::Button::setRotationDegrees(float rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}
