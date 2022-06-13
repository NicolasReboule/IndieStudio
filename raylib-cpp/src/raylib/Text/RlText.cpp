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
    this->_fontSize = (float) _font->getFontSize();
    this->_textSpacing = 1;
}

raylib::RlText::RlText(const std::string &text, std::shared_ptr<raylib::RlFont> &font, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(font)
{
    this->_text = text;
    this->_fontSize = (float) _font->getFontSize();
    this->_textSpacing = 1;
}

raylib::RlText::RlText(const std::string &text, const std::string &fontPath, float fontSize, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position)
{
    this->_text = text;
    this->_font = std::make_shared<RlFont>(fontPath, (int) fontSize);
    this->_fontSize = fontSize;
    this->_textSpacing = 1;
}

/*raylib::RlText::RlText(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, const Vector2f &position, const RlColor &color)
    : _color(color), _position(position), _font(fontPath, fontSize, fontChars, glyphCount)
{
    this->_text = text;
}


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

void raylib::RlText::setFont(const std::shared_ptr<raylib::RlFont> &font)
{
    this->_font = font;
}

void raylib::RlText::setPosition(float x, float y)
{
    this->_position.x = x;
    this->_position.y = y;
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
    return *this->_font;
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

float raylib::RlText::getWidth() const
{
    return this->getSize().x;
}

float raylib::RlText::getTextSpacing() const
{
    return this->_textSpacing;
}

void raylib::RlText::setTextSpacing(float textSpacing)
{
    this->_textSpacing = textSpacing;
}

float raylib::RlText::getFontSize() const
{
    return this->_fontSize;
}

void raylib::RlText::setFontSize(float fontSize)
{
    this->_fontSize = fontSize;
}

Vector2f raylib::RlText::getSize() const
{
    return TextHelper::measureText(*_font, this->_text, this->_fontSize, this->_textSpacing);
}
