/*
** EPITECH PROJECT, 2022
** ColorHelper.cpp
** FileHelper description:
** ColorHelper.cpp
*/

#include "raylib/Color/ColorHelper.hpp"

// Color/pixel related functions

Color raylib::ColorHelper::fade(Color color, float alpha)
{
    return Fade(color, alpha);
}

int raylib::ColorHelper::colorToInt(Color color)
{
    return ColorToInt(color);
}

Vector4 raylib::ColorHelper::colorNormalize(Color color)
{
    return ColorNormalize(color);
}

Color raylib::ColorHelper::colorFromNormalized(Vector4 normalized)
{
    return ColorFromNormalized(normalized);
}

Vector3 raylib::ColorHelper::colorToHSV(Color color)
{
    return ColorToHSV(color);
}

Color raylib::ColorHelper::colorFromHSV(float hue, float saturation, float value)
{
    return ColorFromHSV(hue, saturation, value);
}

Color raylib::ColorHelper::colorAlpha(Color color, float alpha)
{
    return ColorAlpha(color, alpha);
}

Color raylib::ColorHelper::colorAlphaBlend(Color dst, Color src, Color tint)
{
    return ColorAlphaBlend(dst, src, tint);
}

Color raylib::ColorHelper::getColor(unsigned int hexValue)
{
    return GetColor(hexValue);
}

Color raylib::ColorHelper::getPixelColor(void *srcPtr, int format)
{
    return GetPixelColor(srcPtr, format);
}

void raylib::ColorHelper::setPixelColor(void *dstPtr, Color color, int format)
{
    SetPixelColor(dstPtr, color, format);
}

int raylib::ColorHelper::getPixelDataSize(int width, int height, int format)
{
    return GetPixelDataSize(width, height, format);
}
