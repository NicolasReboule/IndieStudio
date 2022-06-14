/*
** EPITECH PROJECT, 2022
** RlTextBuilder.cpp
** File description:
** RlTextBuilder.cpp
*/

#include "raylib/Text/RlTextBuilder.hpp"

raylib::RlTextBuilder::RlTextBuilder() : _text(), _position(0, 0), _font(), _color(RlColor::Black), _origin(0, 0)
{
    this->_fontSize = 10;
    this->_textSpacing = 1;
    this->_rotation = 0;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setText(const std::string &text)
{
    _isTextSet = true;
    _text = text;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setPosition(const Vector2f &position)
{
    _position = position;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setFont(const std::shared_ptr<RlFont> &font)
{
    if (_isFontSet || _isFontPathSet)
        throw raylib::ex::BuilderException("Font already set");
    _isFontSet = true;
    _font = font;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setColor(const RlColor &color)
{
    _color = color;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setFontSize(const float &fontSize)
{
    _isFontSizeSet = true;
    _fontSize = fontSize;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setSpacing(const float &spacing)
{
    _textSpacing = spacing;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setRotation(const float &rotation)
{
    _rotation = rotation;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setOrigin(const Vector2f &origin)
{
    _origin = origin;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setFontPath(const std::string &fontPath)
{
    if (_isFontSet)
        throw raylib::ex::BuilderException("Font already set");
    _isFontPathSet = true;
    _fontPath = fontPath;
    return *this;
}

raylib::RlText raylib::RlTextBuilder::build()
{
    if (!_isTextSet)
        throw raylib::ex::BuilderException("Text is not set");
    if (_isFontPathSet) {
        RlText text = RlText(_text, _fontPath, _fontSize, _position, _color);
        text.setTextSpacing(_textSpacing);
        text.setRotation(_rotation);
        text.setOrigin(_origin);
        return text;
    }
    if (_isFontSet) {
        RlText text = RlText(_text, _font, _position, _color);
        text.setTextSpacing(_textSpacing);
        text.setRotation(_rotation);
        text.setOrigin(_origin);
        return text;
    }

    RlText text = RlText(_text, _position, _color);
    text.setFontSize(_fontSize);
    text.setTextSpacing(_textSpacing);
    text.setRotation(_rotation);
    text.setOrigin(_origin);
    return text;
}