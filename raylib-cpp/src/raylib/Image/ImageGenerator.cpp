/*
** EPITECH PROJECT, 2022
** ImageGenerator.cpp
** FileHelper description:
** ImageGenerator.cpp
*/

#include "raylib/Image/ImageGenerator.hpp"

raylib::RlImage raylib::ImageGenerator::genImageColor(int width, int height, const RlColor &color)
{
    return RlImage(GenImageColor(width, height, color.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientV(int width, int height, const RlColor &top, const RlColor &bottom)
{
    return RlImage(GenImageGradientV(width, height, top.getColor(), bottom.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientH(int width, int height, const RlColor &left, const RlColor &right)
{
    return RlImage(GenImageGradientH(width, height, left.getColor(), right.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientRadial(int width, int height, float density, const RlColor &inner, const RlColor &outer)
{
    return RlImage(GenImageGradientRadial(width, height, density, inner.getColor(), outer.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageChecked(int width, int height, int checksX, int checksY, const RlColor &col1, const RlColor &col2)
{
    return RlImage(GenImageChecked(width, height, checksX, checksY, col1.getColor(), col2.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageWhiteNoise(int width, int height, float factor)
{
    return RlImage(GenImageWhiteNoise(width, height, factor));
}

raylib::RlImage raylib::ImageGenerator::genImageCellular(int width, int height, int tileSize)
{
    return RlImage(GenImageCellular(width, height, tileSize));
}
