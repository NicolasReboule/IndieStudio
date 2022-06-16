/*
** EPITECH PROJECT, 2022
** RlColor.cpp
** File description:
** RlColor.cpp
*/

#include "raylib/Color/RlColor.hpp"

const raylib::RlColor raylib::RlColor::LightGray = raylib::RlColor(200, 200, 200, 255);
const raylib::RlColor raylib::RlColor::Gray = raylib::RlColor(130, 130, 130, 255);
const raylib::RlColor raylib::RlColor::DarkGray = raylib::RlColor(80, 80, 80, 255);
const raylib::RlColor raylib::RlColor::Yellow = raylib::RlColor(253, 249, 0, 255);
const raylib::RlColor raylib::RlColor::Gold = raylib::RlColor(255, 203, 0, 255);
const raylib::RlColor raylib::RlColor::Orange = raylib::RlColor(255, 161, 0, 255);
const raylib::RlColor raylib::RlColor::Pink = raylib::RlColor(255, 109, 194, 255);
const raylib::RlColor raylib::RlColor::Red = raylib::RlColor(230, 41, 55, 255);
const raylib::RlColor raylib::RlColor::Maroon = raylib::RlColor(190, 33, 55, 255);
const raylib::RlColor raylib::RlColor::Green = raylib::RlColor(0, 228, 48, 255);
const raylib::RlColor raylib::RlColor::Lime = raylib::RlColor(0, 158, 47, 255);
const raylib::RlColor raylib::RlColor::DarkGreen = raylib::RlColor(0, 117, 44, 255);
const raylib::RlColor raylib::RlColor::SkyBlue = raylib::RlColor(102, 191, 255, 255);
const raylib::RlColor raylib::RlColor::Blue = raylib::RlColor(0, 121, 241, 255);
const raylib::RlColor raylib::RlColor::DarkBlue = raylib::RlColor(0, 82, 172, 255);
const raylib::RlColor raylib::RlColor::Purple = raylib::RlColor(200, 122, 255, 255);
const raylib::RlColor raylib::RlColor::Violet = raylib::RlColor(135, 60, 190, 255);
const raylib::RlColor raylib::RlColor::DarkPurple = raylib::RlColor(112, 31, 126, 255);
const raylib::RlColor raylib::RlColor::Beige = raylib::RlColor(211, 176, 131, 255);
const raylib::RlColor raylib::RlColor::Brown = raylib::RlColor(127, 106, 79, 255);
const raylib::RlColor raylib::RlColor::DarkBrown = raylib::RlColor(76, 63, 47, 255);

const raylib::RlColor raylib::RlColor::White = raylib::RlColor(255, 255, 255, 255);
const raylib::RlColor raylib::RlColor::Black = raylib::RlColor(0, 0, 0, 255);
const raylib::RlColor raylib::RlColor::Transparent = raylib::RlColor(0, 0, 0, 0);
const raylib::RlColor raylib::RlColor::Magenta = raylib::RlColor(255, 0, 255, 255);
const raylib::RlColor raylib::RlColor::RayWhite = raylib::RlColor(245, 245, 245, 255);

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

raylib::RlColor::RlColor(float hue, float saturation, float value) : _color()
{
    this->_color = ColorFromHSV(hue, saturation, value);
}

void raylib::RlColor::alpha(float alpha)
{
    if (alpha < 0.0f)
        alpha = 0.0f;
    else if (alpha > 1.0f)
        alpha = 1.0f;

    this->_color.a = (unsigned char) (255.0f * alpha);
}

Vector3f raylib::RlColor::toHSV()
{
    return raylib::VectorHelper::toVectorf(ColorToHSV(this->_color));
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

void raylib::RlColor::alphaBlend(const RlColor &src, const RlColor &tint)
{
    ColorAlphaBlend(this->_color, src._color, tint._color);
}

void raylib::RlColor::setColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    this->_color.r = r;
    this->_color.g = g;
    this->_color.b = b;
    this->_color.a = a;
}

raylib::RlColor &raylib::RlColor::setRed(unsigned char r)
{
    this->_color.r = r;
    return *this;
}

raylib::RlColor &raylib::RlColor::setGreen(unsigned char g)
{
    this->_color.g = g;
    return *this;
}

raylib::RlColor &raylib::RlColor::setBlue(unsigned char b)
{
    this->_color.b = b;
    return *this;
}

raylib::RlColor &raylib::RlColor::setAlpha(unsigned char a)
{
    this->_color.a = a;
    return *this;
}

const Color &raylib::RlColor::getColor() const
{
    return this->_color;
}

const unsigned char &raylib::RlColor::getRed() const
{
    return this->_color.r;
}

const unsigned char &raylib::RlColor::getGreen() const
{
    return this->_color.g;
}

const unsigned char &raylib::RlColor::getBlue() const
{
    return this->_color.b;
}

const unsigned char &raylib::RlColor::getAlpha() const
{
    return this->_color.a;
}

void raylib::RlColor::setColor(const Color &color)
{
    this->_color = color;
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

raylib::RlColor &raylib::RlColor::operator-(unsigned char value)
{
    this->_color.r = this->_color.r - value < 0 ? 0 : this->_color.r - value;
    this->_color.g = this->_color.g - value < 0 ? 0 : this->_color.g - value;
    this->_color.b = this->_color.b - value < 0 ? 0 : this->_color.b - value;
    this->_color.a = this->_color.a - value < 0 ? 0 : this->_color.a - value;
    return *this;
}

RlColor &raylib::RlColor::operator+(unsigned char value)
{
    this->_color.r = this->_color.r + value > 255 ? 255 : this->_color.r + value;
    this->_color.g = this->_color.g + value > 255 ? 255 : this->_color.g + value;
    this->_color.b = this->_color.b + value > 255 ? 255 : this->_color.b + value;
    this->_color.a = this->_color.a + value > 255 ? 255 : this->_color.a + value;
    return *this;
}

RlColor &raylib::RlColor::operator-=(unsigned char value)
{
    *this - value;
    return *this;
}

RlColor &raylib::RlColor::operator+=(unsigned char value)
{
    *this + value;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const RlColor &color)
{
    os << "RlColor(" << (int) color.getRed() << ", " << (int) color.getGreen() << ", " << (int) color.getBlue()
       << ", " << (int) color.getAlpha() << ")";
    return os;
}
