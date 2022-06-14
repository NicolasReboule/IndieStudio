/*
** EPITECH PROJECT, 2022
** ImageGenerator.cpp
** FileHelper description:
** ImageGenerator.cpp
*/

#include "raylib/Image/ImageGenerator.hpp"

raylib::image::RlImage raylib::image::ImageGenerator::genImageColor(const int &width, const int &height, const RlColor &color)
{
    return raylib::image::RlImage(GenImageColor(width, height, color.getColor()));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageGradientV(const int &width, const int &height, const RlColor &top, const RlColor &bottom)
{
    return raylib::image::RlImage(GenImageGradientV(width, height, top.getColor(), bottom.getColor()));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageGradientH(const int &width, const int &height, const RlColor &left, const RlColor &right)
{
    return raylib::image::RlImage(GenImageGradientH(width, height, left.getColor(), right.getColor()));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageGradientRadial(const int &width, const int &height, float density, const RlColor &inner, const RlColor &outer)
{
    return raylib::image::RlImage(GenImageGradientRadial(width, height, density, inner.getColor(), outer.getColor()));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageChecked(const int &width, const int &height, const int &checksX, const int &checksY, const RlColor &col1, const RlColor &col2)
{
    return raylib::image::RlImage(GenImageChecked(width, height, checksX, checksY, col1.getColor(), col2.getColor()));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageWhiteNoise(const int &width, const int &height, float factor)
{
    return raylib::image::RlImage(GenImageWhiteNoise(width, height, factor));
}

raylib::image::RlImage raylib::image::ImageGenerator::genImageCellular(const int &width, const int &height, const int &tileSize)
{
    return raylib::image::RlImage(GenImageCellular(width, height, tileSize));
}
