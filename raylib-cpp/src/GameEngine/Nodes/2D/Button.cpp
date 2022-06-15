/*
** EPITECH PROJECT, 2022
** Button.cpp
** File description:
** Button.cpp
*/

#include "GameEngine/Nodes/2D/Button.hpp"
#include "raylib/Math/VectorHelper.hpp"

gameengine::Button::Button(const std::string &name, const std::string &filename) : gameengine::Node2D(name),
    _texture(filename), _position({0, 0}), _scale({1, 1}), _bounds(), _rectangle()
{
    this->_rotationDegrees = 0;

    this->_action = false;
    this->_state = 0;
    this->_frameNum = 3;
    this->_frameHeight = (float) this->_texture.get().height / (float)this->_frameNum;
    this->_rectangle = {0, 0, (float) this->_texture.get().width, (float)this->_frameHeight};
    this->_bounds = {this->_position.x, this->_position.y, (float) this->_texture.get().width, this->_frameHeight};
}

void gameengine::Button::ready()
{

}

void gameengine::Button::update(float delta)
{
    if (this->_isEnable) {
        if (this->_action) {
            this->_action = false;
            this->_state = 0;
            return;
        }
        if (raylib::Collision2DHelper::checkCollisionPointRec(raylib::input::MouseHelper::getMousePosition(),
                                                              this->_bounds)) {
            if (raylib::input::MouseHelper::isMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                this->_state = 2;
                this->_action = true;
            } else
                this->_state = 1;

            //if (raylib::MouseHelper::isMouseButtonReleased(MOUSE_BUTTON_LEFT))
        } else
            this->_state = 0;

        if (this->_action)
            this->pressed();

        this->_rectangle.y = (float) (this->_state) * this->_frameHeight;
    }
}

void gameengine::Button::draw()
{
    raylib::DrawTextureHelper::drawTextureRec(this->_texture, this->_rectangle, this->_position, RlColor::White);
}

Vector2f gameengine::Button::getPosition()
{
    return this->_position;
}

void gameengine::Button::setPosition(Vector2f position)
{
    this->_position = position;
    this->_rectangle = {0, 0, (float) this->_texture.get().width, (float)this->_frameHeight};
    this->_bounds = {this->_position.x, this->_position.y, (float) this->_texture.get().width, this->_frameHeight};
}

Vector2f gameengine::Button::getScale()
{
    return this->_scale;
}

void gameengine::Button::setScale(Vector2f scale)
{

    this->_scale = scale;
}

float gameengine::Button::getRotationDegrees()
{
    return this->_rotationDegrees;
}

void gameengine::Button::setRotationDegrees(float rotationDegrees)
{
    this->_rotationDegrees = rotationDegrees;
}

bool gameengine::Button::getIsEnable()
{
    return this->_isEnable;
}

void gameengine::Button::setEnable(bool value)
{
    this->_isEnable = value;
}
