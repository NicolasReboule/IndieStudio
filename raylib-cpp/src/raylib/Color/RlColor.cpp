/*
** EPITECH PROJECT, 2022
** RlColor.cpp
** File description:
** RlColor.cpp
*/

#include "raylib/Color/RlColor.hpp"

raylib::RlColor::RlColor(Color color) : _color()
{
    _color = color;
}

raylib::RlColor::RlColor(unsigned int r, unsigned int g, unsigned int b, unsigned int a) : _color()
{
    _color.r = r;
    _color.g = g;
    _color.b = b;
    _color.a = a;
}

const Color &raylib::RlColor::getColor() const
{
    return _color;
}

unsigned int raylib::RlColor::getRed() const
{
    return _color.r;
}

unsigned int raylib::RlColor::getGreen() const
{
    return _color.g;
}

unsigned int raylib::RlColor::getBlue() const
{
    return _color.b;
}

unsigned int raylib::RlColor::getAlpha() const
{
    return _color.a;
}
