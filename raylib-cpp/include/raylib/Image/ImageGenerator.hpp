/*
** EPITECH PROJECT, 2022
** ImageGenerator.hpp
** FileHelper description:
** ImageGenerator.hpp
*/

#ifndef INDIESTUDIO_IMAGEGENERATOR_HPP
#define INDIESTUDIO_IMAGEGENERATOR_HPP

#include "raylib/Color/RlColor.hpp"
#include "RlImage.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief Image generation functions
     */
    class ImageGenerator {
    public:
        /**
         * @brief Generate image: plain color
         * @param width the width
         * @param height the height
         * @param color the color
         * @return the image
         */
        static RlImage genImageColor(int width, int height, const RlColor &color);

        /**
         * @brief Generate image: vertical gradient
         * @param width the width
         * @param height the height
         * @param top the top color
         * @param bottom the bottom color
         * @return the image
         */
        static RlImage genImageGradientV(int width, int height, const RlColor &top, const RlColor &bottom);

        /**
         * @brief Generate image: horizontal gradient
         * @param width the width
         * @param height the height
         * @param left the left color
         * @param right the right color
         * @return the image
         */
        static RlImage genImageGradientH(int width, int height, const RlColor &left, const RlColor &right);

        /**
         * @brief Generate image: radial gradient
         * @param width the width
         * @param height the height
         * @param density the density
         * @param inner the inner color
         * @param outer the outer color
         * @return the image
         */
        static RlImage genImageGradientRadial(int width, int height, float density, const RlColor &inner, const RlColor &outer);

        /**
         * @brief Generate image: checked
         * @param width the width
         * @param height the height
         * @param checksX the checks x
         * @param checksY the checks y
         * @param col1 the col 1
         * @param col2 the col 2
         * @return the image
         */
        static RlImage genImageChecked(int width, int height, int checksX, int checksY, const RlColor &col1, const RlColor &col2);

        /**
         * @brief Generate image: white noise
         * @param width the width
         * @param height the height
         * @param factor the factor
         * @return the image
         */
        static RlImage genImageWhiteNoise(int width, int height, float factor);

        /**
         * @brief Generate image: cellular algorithm. Bigger tileSize means bigger cells
         * @param width the width
         * @param height the height
         * @param tileSize the tile size
         * @return the image
         */
        static RlImage genImageCellular(int width, int height, int tileSize);
    };
}

#endif //INDIESTUDIO_IMAGEGENERATOR_HPP
