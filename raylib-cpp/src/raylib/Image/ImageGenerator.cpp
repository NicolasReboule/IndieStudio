/*
** EPITECH PROJECT, 2022
** ImageGenerator.cpp
** FileHelper description:
** ImageGenerator.cpp
*/

#include "raylib/Image/ImageGenerator.hpp"

raylib::RlImage raylib::ImageGenerator::genImageColor(const int &width, const int &height, const RlColor &color)
{
    return RlImage(GenImageColor(width, height, color.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientV(const int &width, const int &height, const RlColor &top, const RlColor &bottom)
{
    return RlImage(GenImageGradientV(width, height, top.getColor(), bottom.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientH(const int &width, const int &height, const RlColor &left, const RlColor &right)
{
    return RlImage(GenImageGradientH(width, height, left.getColor(), right.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageGradientRadial(const int &width, const int &height, float density, const RlColor &inner, const RlColor &outer)
{
    return RlImage(GenImageGradientRadial(width, height, density, inner.getColor(), outer.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageChecked(const int &width, const int &height, const int &checksX, const int &checksY, const RlColor &col1, const RlColor &col2)
{
    return RlImage(GenImageChecked(width, height, checksX, checksY, col1.getColor(), col2.getColor()));
}

raylib::RlImage raylib::ImageGenerator::genImageWhiteNoise(const int &width, const int &height, float factor)
{
    return RlImage(GenImageWhiteNoise(width, height, factor));
}

raylib::RlImage raylib::ImageGenerator::genImageCellular(const int &width, const int &height, const int &tileSize)
{
    return RlImage(GenImageCellular(width, height, tileSize));
}
