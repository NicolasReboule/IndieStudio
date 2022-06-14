/*
** EPITECH PROJECT, 2022
** RlTextBuilder.cpp
** File description:
** RlTextBuilder.cpp
*/

#include "raylib/Text/RlTextBuilder.hpp"

raylib::RlTextBuilder::RlTextBuilder() : _text(), _position(0, 0), _font(), _color(BLACK), _origin(0, 0)
{
    _fontSize = 10;
    _textSpacing = 1;
    _rotation = 0;
}

raylib::RlText raylib::RlTextBuilder::build()
{
    if (!_isTextSet)
        throw raylib::ex::BuilderException("Text is not set");
    RlText text(_text, _position, _color);
    text.setRotation(_rotation);
    text.setOrigin(_origin);
    if (!_isFontSizeSet && _isFontSet && _fontPath.empty())
        text.setFontSize((float) _font->getFontSize());
    else
        text.setFontSize(_fontSize);
    text.setTextSpacing(_textSpacing);
    if (_fontPath.empty() && _isFontSet)
        text.setFont(_font);
    else if (_isFontSet)
        text.setFont(std::make_shared<RlFont>(_fontPath, (int) _fontSize));
    return text;
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
    if (_isFontSet)
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

raylib::RlTextBuilder &raylib::RlTextBuilder::setFontSize(float fontSize)
{
    _isFontSizeSet = true;
    _fontSize = fontSize;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setSpacing(float spacing)
{
    _textSpacing = spacing;
    return *this;
}

raylib::RlTextBuilder &raylib::RlTextBuilder::setRotation(float rotation)
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
    _isFontSet = true;
    _fontPath = fontPath;
    return *this;
}
