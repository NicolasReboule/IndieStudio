/*
** EPITECH PROJECT, 2022
** Label.cpp
** File description:
** Label.cpp
*/

#include "GameEngine/Nodes/2D/Label.hpp"

gameengine::Label::Label(const std::string &name, Vector2f position, Vector2f scale, float degrees, const RlColor &color)
    : Node2D(name), _textComponent(""), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void gameengine::Label::ready()
{
}

void gameengine::Label::update(float delta)
{
}

void gameengine::Label::draw()
{
    this->_textComponent = raylib::builder::RlTextBuilder().setText(this->_text).setPosition(this->_position).setColor(this->_color).setFontSize(std::max(this->_scale.x, this->_scale.y)).build();
    raylib::helper::draw::DrawTextHelper::drawText(this->_textComponent);
}

Vector2f gameengine::Label::getPosition()
{
    return this->_position;
}

void gameengine::Label::setPosition(Vector2f position)
{
    this->_position = position;
}

Vector2f gameengine::Label::getScale()
{
    return this->_scale;
}

void gameengine::Label::setScale(Vector2f scale)
{
    this->_scale = scale;
}

float gameengine::Label::getRotationDegrees()
{
    return this->_rotationDegrees;
}

void gameengine::Label::setRotationDegrees(float rotationDegrees)
{
}

void gameengine::Label::setColor(unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
    this->_color.setColor(r, g, b, a);
    Vector4f vector = {(float)r, (float)g, (float)b, (float)a};
    raylib::RlColor color(vector);
    this->_color = color;
}

void gameengine::Label::setColor(raylib::RlColor color)
{
    this->_color.setColor(color.getColor());
}


raylib::RlColor &gameengine::Label::getColor()
{
    return this->_color;
}

const raylib::RlColor &gameengine::Label::getColor() const
{
    return this->_color;
}

void gameengine::Label::setText(const std::string &text)
{
    this->_text = text;
}
