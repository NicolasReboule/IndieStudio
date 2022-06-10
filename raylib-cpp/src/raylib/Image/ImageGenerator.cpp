/*
** EPITECH PROJECT, 2022
** ImageGenerator.cpp
** FileHelper description:
** ImageGenerator.cpp
*/

#include "raylib/Image/ImageGenerator.hpp"


// Image generation functions

Image raylib::ImageGenerator::genImageColor(int width, int height, RlColor color)
{
    return GenImageColor(width, height, color.getColor());
}

Image raylib::ImageGenerator::genImageGradientV(int width, int height, RlColor top, RlColor bottom)
{
    return GenImageGradientV(width, height, top.getColor(), bottom.getColor());
}

Image raylib::ImageGenerator::genImageGradientH(int width, int height, RlColor left, RlColor right)
{
    return GenImageGradientH(width, height, left.getColor(), right.getColor());
}

Image raylib::ImageGenerator::genImageGradientRadial(int width, int height, float density, RlColor inner, RlColor outer)
{
    return GenImageGradientRadial(width, height, density, inner.getColor(), outer.getColor());
}

Image raylib::ImageGenerator::genImageChecked(int width, int height, int checksX, int checksY, RlColor col1, RlColor col2)
{
    return GenImageChecked(width, height, checksX, checksY, col1.getColor(), col2.getColor());
}

Image raylib::ImageGenerator::genImageWhiteNoise(int width, int height, float factor)
{
    return GenImageWhiteNoise(width, height, factor);
}

Image raylib::ImageGenerator::genImageCellular(int width, int height, int tileSize)
{
    return GenImageCellular(width, height, tileSize);
}
