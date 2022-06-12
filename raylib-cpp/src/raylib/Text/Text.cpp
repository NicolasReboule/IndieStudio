/*
** EPITECH PROJECT, 2022
** RlText.cpp
** FileHelper description:
** RlText.cpp
*/

#include "raylib/Text/RlText.hpp"

raylib::RlText::RlText(const std::string &text, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font()
{
    this->_text = text;
}

raylib::RlText::RlText(const std::string &text, const raylib::RlFont &font, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(font)
{
    this->_text = text;
}

raylib::RlText::RlText(const std::string &text, const std::string &fontPath, float fontSize, const Vector2f &position, const RlColor &color): _color(color), _position(position)
{
    this->_text = text;
    this->_font = RlFont(fontPath, (float) fontSize);
}

raylib::RlText::RlText(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(fontPath, fontSize, fontChars, glyphCount)
{
    this->_text = text;
}

/*
raylib::RlText::RlText(const std::string &text, const RlImage &image, const RlColor &key, int firstChar, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(image, key, firstChar)
{
    this->_text = text;
}

raylib::RlText::RlText(const std::string &text, const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(fileType, fileData, dataSize, fontSize, fontChars, glyphCount)
{
    this->_text = text;
}
*/

void raylib::RlText::setText(const std::string &text)
{
    this->_text = text;
}

void raylib::RlText::setFont(const raylib::RlFont &font)
{
    this->_font = font;
}

void raylib::RlText::setPosition(float x, float y)
{
    _position.x = x;
    _position.y = y;
}

void raylib::RlText::setPosition(const Vector2f &pos)
{
    this->_position = pos;
}

void raylib::RlText::setColor(const RlColor &color)
{
    this->_color = color;
}

const raylib::RlFont &raylib::RlText::getFont() const
{
    return this->_font;
}

const std::string &raylib::RlText::getText() const
{
    return this->_text;
}

const Vector2f &raylib::RlText::getPosition() const
{
    return this->_position;
}

const RlColor &raylib::RlText::getColor() const
{
    return this->_color;
}

float raylib::RlText::getHeight() const
{
    return this->_font.getFontSize();
}

float raylib::RlText::getWidth() const
{
    return (float) TextHelper::measureText(this->_text, (int) this->getFont().getFontSize());
}

Vector2f raylib::RlText::getSize()
{
    return TextHelper::measureText(_font, this->_text);
}

raylib::RlFont &raylib::RlText::operator->()
{
    return this->_font;
}

const raylib::RlFont &raylib::RlText::operator->() const
{
    return this->_font;
}
