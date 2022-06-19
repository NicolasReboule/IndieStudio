/*
** EPITECH PROJECT, 2022
** Label.cpp
** File description:
** Label.cpp
*/

#include "GameEngine/Nodes/2D/Label.hpp"

gameengine::node::_2D::Label::Label(const std::string &name, const Vector2f &position, const Vector2f &scale, const float &degrees, const RlColor &color)
    : Node2D(name), _textComponent(""), _color(color), _position(position), _scale(scale), _rotationDegrees(degrees)
{
}

void gameengine::node::_2D::Label::init()
{
    this->_textComponent = raylib::builder::RlTextBuilder()
        .setText(this->_text)
        .setPosition(this->_position)
        .setColor(this->_color)
        .setFontSize(std::max(this->_scale.x, this->_scale.y)).build();
}

void gameengine::node::_2D::Label::update(const float &delta)
{
    this->_textComponent.setText(this->_text);
    this->_textComponent.setPosition(this->_position);
    this->_textComponent.setColor(this->_color);
    this->_textComponent.setFontSize(std::max(this->_scale.x, this->_scale.y));
    this->_textComponent.setRotation(this->_rotationDegrees);
}

void gameengine::node::_2D::Label::draw()
{
    raylib::helper::draw::DrawTextHelper::drawText(this->_textComponent);
}

const Vector2f &gameengine::node::_2D::Label::getPosition() const
{
    return this->_position;
}

void gameengine::node::_2D::Label::setPosition(const Vector2f &position)
{
    this->_position = position;
}

const Vector2f &gameengine::node::_2D::Label::getScale() const
{
    return this->_scale;
}

void gameengine::node::_2D::Label::setScale(const Vector2f &scale)
{
    this->_scale = scale;
}

float gameengine::node::_2D::Label::getRotationDegrees() const
{
    return this->_rotationDegrees;
}

void gameengine::node::_2D::Label::setRotationDegrees(const float &rotationDegrees)
{
}

void gameengine::node::_2D::Label::setColor(raylib::RlColor color)
{
    this->_color.setColor(color.getColor());
}


raylib::RlColor &gameengine::node::_2D::Label::getColor()
{
    return this->_color;
}

const raylib::RlColor &gameengine::node::_2D::Label::getColor() const
{
    return this->_color;
}

void gameengine::node::_2D::Label::setText(const std::string &text)
{
    this->_text = text;
}
