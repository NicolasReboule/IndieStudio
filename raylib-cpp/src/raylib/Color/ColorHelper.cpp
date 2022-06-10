/*
** EPITECH PROJECT, 2022
** ColorHelper.cpp
** FileHelper description:
** ColorHelper.cpp
*/

#include "raylib/Color/ColorHelper.hpp"

// Color/pixel related functions

raylib::RlColor raylib::ColorHelper::fade(RlColor color, float alpha)
{
    return Fade(color.getColor(), alpha);
}

int raylib::ColorHelper::colorToInt(RlColor color)
{
    return ColorToInt(color.getColor());
}

Vector4 raylib::ColorHelper::colorNormalize(RlColor color)
{
    return ColorNormalize(color.getColor());
}

raylib::RlColor raylib::ColorHelper::colorFromNormalized(Vector4 normalized)
{
    return ColorFromNormalized(normalized);
}

Vector3f raylib::ColorHelper::colorToHSV(RlColor color)
{
    return raylib::VectorHelper::toVectorf(ColorToHSV(color.getColor()));
}

raylib::RlColor raylib::ColorHelper::colorFromHSV(float hue, float saturation, float value)
{
    return ColorFromHSV(hue, saturation, value);
}

raylib::RlColor raylib::ColorHelper::colorAlpha(RlColor color, float alpha)
{
    return ColorAlpha(color.getColor(), alpha);
}

raylib::RlColor raylib::ColorHelper::colorAlphaBlend(RlColor dst, RlColor src, RlColor tint)
{
    return ColorAlphaBlend(dst.getColor(), src.getColor(), tint.getColor());
}

raylib::RlColor raylib::ColorHelper::getColor(unsigned int hexValue)
{
    return GetColor(hexValue);
}

raylib::RlColor raylib::ColorHelper::getPixelColor(void *srcPtr, int format)
{
    return GetPixelColor(srcPtr, format);
}

void raylib::ColorHelper::setPixelColor(void *dstPtr, RlColor color, int format)
{
    SetPixelColor(dstPtr, color.getColor(), format);
}

int raylib::ColorHelper::getPixelDataSize(int width, int height, int format)
{
    return GetPixelDataSize(width, height, format);
}
