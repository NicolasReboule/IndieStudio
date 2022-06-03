/*
** EPITECH PROJECT, 2022
** ImageGenerator.cpp
** FileHelper description:
** ImageGenerator.cpp
*/

#include "raylib/Image/ImageGenerator.hpp"


// Image generation functions

Image raylib::ImageGenerator::genImageColor(int width, int height, Color color)
{
    return GenImageColor(width, height, color);
}

Image raylib::ImageGenerator::genImageGradientV(int width, int height, Color top, Color bottom)
{
    return GenImageGradientV(width, height, top, bottom);
}

Image raylib::ImageGenerator::genImageGradientH(int width, int height, Color left, Color right)
{
    return GenImageGradientH(width, height, left, right);
}

Image raylib::ImageGenerator::genImageGradientRadial(int width, int height, float density, Color inner, Color outer)
{
    return GenImageGradientRadial(width, height, density, inner, outer);
}

Image raylib::ImageGenerator::genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
{
    return GenImageChecked(width, height, checksX, checksY, col1, col2);
}

Image raylib::ImageGenerator::genImageWhiteNoise(int width, int height, float factor)
{
    return GenImageWhiteNoise(width, height, factor);
}

Image raylib::ImageGenerator::genImageCellular(int width, int height, int tileSize)
{
    return GenImageCellular(width, height, tileSize);
}
