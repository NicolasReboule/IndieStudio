/*
** EPITECH PROJECT, 2022
** RlColor.cpp
** File description:
** RlColor.cpp
*/

#include "raylib/Color/RlColor.hpp"

static const raylib::RlColor LightGray = raylib::RlColor(200, 200, 200, 255);
static const raylib::RlColor Gray = raylib::RlColor(130, 130, 130, 255);
static const raylib::RlColor DarkGray = raylib::RlColor(80, 80, 80, 255);
static const raylib::RlColor Yellow = raylib::RlColor(253, 249, 0, 255);
static const raylib::RlColor Gold = raylib::RlColor(255, 203, 0, 255);
static const raylib::RlColor Orange = raylib::RlColor(255, 161, 0, 255);
static const raylib::RlColor Pink = raylib::RlColor(255, 109, 194, 255);
static const raylib::RlColor Red = raylib::RlColor(230, 41, 55, 255);
static const raylib::RlColor Maroon = raylib::RlColor(190, 33, 55, 255);
static const raylib::RlColor Green = raylib::RlColor(0, 228, 48, 255);
static const raylib::RlColor Lime = raylib::RlColor(0, 158, 47, 255);
static const raylib::RlColor DarkGreen = raylib::RlColor(0, 117, 44, 255);
static const raylib::RlColor SkyBlue = raylib::RlColor(102, 191, 255, 255);
static const raylib::RlColor Blue = raylib::RlColor(0, 121, 241, 255);
static const raylib::RlColor DarkBlue = raylib::RlColor(0, 82, 172, 255);
static const raylib::RlColor Purple = raylib::RlColor(200, 122, 255, 255);
static const raylib::RlColor Violet = raylib::RlColor(135, 60, 190, 255);
static const raylib::RlColor DarkPurple = raylib::RlColor(112, 31, 126, 255);
static const raylib::RlColor Beige = raylib::RlColor(211, 176, 131, 255);
static const raylib::RlColor Brown = raylib::RlColor(127, 106, 79, 255);
static const raylib::RlColor DarkBrown = raylib::RlColor(76, 63, 47, 255);

static const raylib::RlColor White = raylib::RlColor(255, 255, 255, 255);
static const raylib::RlColor Black = raylib::RlColor(0, 0, 0, 255);
static const raylib::RlColor Blank = raylib::RlColor(0, 0, 0, 0);
static const raylib::RlColor Magenta = raylib::RlColor(255, 0, 255, 255);
static const raylib::RlColor RayWhite = raylib::RlColor(245, 245, 245, 255);

raylib::RlColor::RlColor(Color color) : _color()
{
    this->_color = color;
}

raylib::RlColor::RlColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) : _color()
{
    this->_color.r = r;
    this->_color.g = g;
    this->_color.b = b;
    this->_color.a = a;
}

raylib::RlColor::RlColor(std::uint32_t color) : _color()
{
    this->_color.r = (color >> 24) & 0xFF;
    this->_color.g = (color >> 16) & 0xFF;
    this->_color.b = (color >> 8) & 0xFF;
    this->_color.a = color & 0xFF;
}

raylib::RlColor::RlColor(const Vector4f &normalizedColor) : _color()
{
    this->_color.r = (unsigned char) (normalizedColor.x * 255);
    this->_color.g = (unsigned char) (normalizedColor.y * 255);
    this->_color.b = (unsigned char) (normalizedColor.z * 255);
    this->_color.a = (unsigned char) (normalizedColor.w * 255);
}

std::uint32_t raylib::RlColor::toInteger() const
{
    return (this->_color.r << 24) | (this->_color.g << 16) | (this->_color.b << 8) | this->_color.a;
}

Vector4f raylib::RlColor::normalize() const
{
    return {(float) this->_color.r / 255.0f, (float) this->_color.g / 255.0f, (float) this->_color.b / 255.0f,
            (float) this->_color.a / 255.0f};
}

const Color &raylib::RlColor::getColor() const
{
    return this->_color;
}

unsigned char raylib::RlColor::getRed() const
{
    return this->_color.r;
}

unsigned char raylib::RlColor::getGreen() const
{
    return this->_color.g;
}

unsigned char raylib::RlColor::getBlue() const
{
    return this->_color.b;
}

unsigned char raylib::RlColor::getAlpha() const
{
    return this->_color.a;
}

bool raylib::RlColor::operator==(const raylib::RlColor &other) const
{
    return this->_color.r == other.getRed() && this->_color.g == other.getGreen()
           && this->_color.b == other.getBlue() && this->_color.a == other.getAlpha();
}

bool raylib::RlColor::operator!=(const raylib::RlColor &rhs) const
{
    return !(rhs == *this);
}
