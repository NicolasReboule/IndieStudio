/*
** EPITECH PROJECT, 2022
** ColorHelper.cpp
** FileHelper description:
** ColorHelper.cpp
*/

#include "raylib/Color/ColorHelper.hpp"

raylib::RlColor raylib::helper::ColorHelper::colorFromNormalized(const Vector4f &normalizedColor)
{
    return RlColor(normalizedColor);
}

Vector3f raylib::helper::ColorHelper::colorToHSV(const RlColor &color)
{
    return raylib::helper::VectorHelper::toVectorf(ColorToHSV(color.getColor()));
}

raylib::RlColor raylib::helper::ColorHelper::colorFromHSV(float hue, float saturation, float value)
{
    return RlColor(ColorFromHSV(hue, saturation, value));
}

raylib::RlColor raylib::helper::ColorHelper::colorAlpha(const RlColor &color, float alpha)
{
    return RlColor(ColorAlpha(color.getColor(), alpha));
}

raylib::RlColor raylib::helper::ColorHelper::colorAlphaBlend(const RlColor &dst, const RlColor &src, const RlColor &tint)
{
    return RlColor(ColorAlphaBlend(dst.getColor(), src.getColor(), tint.getColor()));
}

raylib::RlColor raylib::helper::ColorHelper::getColor(unsigned int hexValue)
{
    return RlColor(hexValue);
}

raylib::RlColor raylib::helper::ColorHelper::getPixelColor(void *srcPtr, int format)
{
    return RlColor(GetPixelColor(srcPtr, format));
}

void raylib::helper::ColorHelper::setPixelColor(void *dstPtr, const RlColor &color, int format)
{
    SetPixelColor(dstPtr, color.getColor(), format);
}

int raylib::helper::ColorHelper::getPixelDataSize(int width, int height, int format)
{
    return GetPixelDataSize(width, height, format);
}
