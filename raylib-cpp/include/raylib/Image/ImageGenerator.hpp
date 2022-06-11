/*
** EPITECH PROJECT, 2022
** ImageGenerator.hpp
** FileHelper description:
** ImageGenerator.hpp
*/

#ifndef INDIESTUDIO_IMAGEGENERATOR_HPP
#define INDIESTUDIO_IMAGEGENERATOR_HPP

#include "raylib/Color/RlColor.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    class ImageGenerator {
    public:
        // Image generation functions
        static Image genImageColor(int width, int height, RlColor color);                                           // Generate image: plain color
        static Image genImageGradientV(int width, int height, RlColor top, RlColor bottom);                           // Generate image: vertical gradient
        static Image genImageGradientH(int width, int height, RlColor left, RlColor right);                           // Generate image: horizontal gradient
        static Image genImageGradientRadial(int width, int height, float density, RlColor inner, RlColor outer);      // Generate image: radial gradient
        static Image genImageChecked(int width, int height, int checksX, int checksY, RlColor col1, RlColor col2);    // Generate image: checked
        static Image genImageWhiteNoise(int width, int height, float factor);                                     // Generate image: white noise
        static Image genImageCellular(int width, int height, int tileSize);                                       // Generate image: cellular algorithm. Bigger tileSize means bigger cells
    private:
    };
}

#endif //INDIESTUDIO_IMAGEGENERATOR_HPP
