/*
** EPITECH PROJECT, 2022
** RlText.cpp
** FileHelper description:
** RlText.cpp
*/

#include "raylib/Text/RlText.hpp"

raylib::text::RlText::RlText(const std::string &text, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _origin(0 , 0)
{
    this->_text = text;
    this->_font = RlFont::getDefaultFont();
    this->_fontSize = (float) _font->getFontSize();
    this->_textSpacing = 1;
    this->_rotation = 0;
}

raylib::text::RlText::RlText(const std::string &text, std::shared_ptr<raylib::text::RlFont> &font, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(font), _origin(0 , 0)
{
    this->_text = text;
    this->_fontSize = (float) _font->getFontSize();
    this->_textSpacing = 1;
    this->_rotation = 0;
}

raylib::text::RlText::RlText(const std::string &text, const std::string &fontPath, float fontSize, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _origin(0 , 0)
{
    this->_text = text;
    this->_font = std::make_shared<RlFont>(fontPath, (int) fontSize);
    this->_fontSize = fontSize;
    this->_textSpacing = 1;
    this->_rotation = 0;
}

void raylib::text::RlText::setText(const std::string &text)
{
    this->_text = text;
}

void raylib::text::RlText::setFont(const std::shared_ptr<raylib::text::RlFont> &font)
{
    this->_font = font;
}

void raylib::text::RlText::setPosition(float x, float y)
{
    this->_position.x = x;
    this->_position.y = y;
}

void raylib::text::RlText::setPosition(const Vector2f &pos)
{
    this->_position = pos;
}

void raylib::text::RlText::setColor(const RlColor &color)
{
    this->_color = color;
}

const std::shared_ptr<raylib::text::RlFont> &raylib::text::RlText::getFont() const
{
    return this->_font;
}

const std::string &raylib::text::RlText::getText() const
{
    return this->_text;
}

const Vector2f &raylib::text::RlText::getPosition() const
{
    return this->_position;
}

const RlColor &raylib::text::RlText::getColor() const
{
    return this->_color;
}

float raylib::text::RlText::getWidth() const
{
    return this->getSize().x;
}

float raylib::text::RlText::getTextSpacing() const
{
    return this->_textSpacing;
}

void raylib::text::RlText::setTextSpacing(float textSpacing)
{
    this->_textSpacing = textSpacing;
}

float raylib::text::RlText::getFontSize() const
{
    return this->_fontSize;
}

void raylib::text::RlText::setFontSize(float fontSize)
{
    this->_fontSize = fontSize;
}

float raylib::text::RlText::getRotation() const
{
    return this->_rotation;
}

void raylib::text::RlText::setRotation(float rotation)
{
    this->_rotation = rotation;
}

const Vector2f &raylib::text::RlText::getOrigin() const
{
    return this->_origin;
}

void raylib::text::RlText::setOrigin(const Vector2f &origin)
{
    this->_origin = origin;
}

Vector2f raylib::text::RlText::getSize() const
{
    return raylib::helper::TextHelper::measureText(*_font, this->_text, this->_fontSize, this->_textSpacing);
}
