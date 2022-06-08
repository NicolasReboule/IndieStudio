/*
** EPITECH PROJECT, 2022
** Text.cpp
** FileHelper description:
** Text.cpp
*/

#include "raylib/Text/Text.hpp"

raylib::Text::Text(const std::string &text, Vector2f position, Color color)
    : _color(color), _position(position), _font()
{
    this->_text = text;
}

raylib::Text::Text(const std::string &text, Font font, Vector2f position, Color color)
    : _color(color), _position(position), _font(font)
{
    this->_text = text;
}

raylib::Text::Text(const std::string &text, const raylib::RlFont &font, Vector2f position, Color color)
    : _color(color), _position(position), _font(font)
{
    this->_text = text;
}

raylib::Text::Text(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, Vector2f position, Color color)
    : _color(color), _position(position), _font(fontPath, fontSize, fontChars, glyphCount)
{
    this->_text = text;
}

raylib::Text::Text(const std::string &text, Image image, Color key, int firstChar, Vector2f position, Color color)
    : _color(color), _position(position), _font(image, key, firstChar)
{
    this->_text = text;
}

raylib::Text::Text(const raylib::Text &text)
    : _color(text.getColor()), _position(text.getPosition())
{
    this->_text = text._text;
    this->_font = text._font;
}

raylib::Text::Text(const std::string &text, const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount,  Vector2f position, Color color)
    : _color(color), _position(position), _font(fileType, fileData, dataSize, fontSize, fontChars, glyphCount)
{
    this->_text = text;
}

void raylib::Text::setText(const std::string &text)
{
    this->_text = text;
}

void raylib::Text::setFont(const raylib::RlFont &font)
{
    this->_font = font;
}

void raylib::Text::setPosition(float x, float y)
{
    _position.x = x;
    _position.y = y;
}

void raylib::Text::setPosition(Vector2f pos)
{
    this->_position = pos;
}

void raylib::Text::setColor(Color color)
{
    this->_color = color;
}

const raylib::RlFont &raylib::Text::getFont() const
{
    return this->_font;
}

const std::string &raylib::Text::getText() const
{
    return this->_text;
}

const Vector2f &raylib::Text::getPosition() const
{
    return this->_position;
}

const Color &raylib::Text::getColor() const
{
    return this->_color;
}

float raylib::Text::getHeight() const
{
    return _font.getFontSize();
}

float raylib::Text::getWidth() const
{
    return (float) MeasureText(_text.c_str(), (int) _font.getFontSize());
}

raylib::RlFont *raylib::Text::operator->()
{
    return &_font;
}
