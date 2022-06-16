/*
** EPITECH PROJECT, 2022
** ImageDrawHelper.hpp
** File description:
** ImageDrawHelper.hpp
*/

#ifndef INDIESTUDIO_IMAGEDRAWHELPER_HPP
#define INDIESTUDIO_IMAGEDRAWHELPER_HPP

#include "raylib/Image/RlImage.hpp"
#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/Text/RlFont.hpp"

namespace raylib::image {
    /**
     * @brief Image drawing functions, Draw on an image
     * NOTE: Image software-rendering functions (CPU)
     */
    class ImageDrawHelper {
    public:

        /**
         * @brief Clear image background with given color
         * @param dst the image to clear
         * @param color the color to use
         */
        static void clearBackground(image::RlImage &dst, const RlColor &color);

        /**
         * @brief Draw pixel within an image
         * @param dst the image to Draw on
         * @param posX the x position to Draw at
         * @param posY the y position to Draw at
         * @param color the color to use
         */
        static void drawPixel(image::RlImage &dst, int posX, int posY, const RlColor &color);

        /**
         * @brief Draw pixel within an image
         * @param dst the image to Draw on
         * @param position the position to Draw at
         * @param color the color to use
         */
        static void drawPixel(image::RlImage &dst, const Vector2f &position, const RlColor &color);

        /**
         * @brief Draw line within an image
         * @param dst the image to Draw on
         * @param startPosX the x position to start at
         * @param startPosY the y position to start at
         * @param endPosX the x position to end at
         * @param endPosY the y position to end at
         * @param color the color to use
         */
        static void drawLine(image::RlImage &dst, int startPosX, int startPosY, int endPosX, int endPosY, const RlColor &color);

        /**
         * @brief Draw line within an image
         * @param dst the image to Draw on
         * @param start the position to start at
         * @param end the position to end at
         * @param color the color to use
         */
        static void drawLine(image::RlImage &dst, const Vector2f &start, const Vector2f &end, const RlColor &color);

        /**
         * @brief Draw circle within an image
         * @param dst the image to Draw on
         * @param centerX the x position to center at
         * @param centerY the y position to center at
         * @param radius the radius of the circle
         * @param color the color to use
         */
        static void drawCircle(image::RlImage &dst, int centerX, int centerY, int radius, const RlColor &color);

        /**
         * @brief Draw circle within an image
         * @param dst the image to Draw on
         * @param center the position to center at
         * @param radius the radius of the circle
         * @param color the color to use
         */
        static void drawCircle(image::RlImage &dst, const Vector2f &center, int radius, const RlColor &color);

        /**
         * @brief Draw rectangle within an image
         * @param dst the image to Draw on
         * @param posX the x position to Draw at
         * @param posY the y position to Draw at
         * @param width the width of the rectangle
         * @param height the height of the rectangle
         * @param color the color to use
         */
        static void drawRectangle(image::RlImage &dst, int posX, int posY, int width, int height, const RlColor &color);

        /**
         * @brief Draw rectangle within an image
         * @param dst the image to Draw on
         * @param position the position to Draw at
         * @param size the size of the rectangle
         * @param color the color to use
         */
        static void drawRectangle(image::RlImage &dst, const Vector2f &position, const Vector2f &size, const RlColor &color);

        /**
         * @brief Draw rectangle within an image
         * @param dst the image to Draw on
         * @param rec the rectangle to Draw
         * @param color the color to use
         */
        static void drawRectangleRec(image::RlImage &dst, const Rectangle &rec, const RlColor &color);

        /**
         * @brief Draw rectangle lines within an image
         * @param dst the image to Draw on
         * @param rec the rectangle to Draw
         * @param thick the thickness of the lines
         * @param color the color to use
         */
        static void drawRectangleLines(image::RlImage &dst, const Rectangle &rec, int thick, const RlColor &color);

        /**
         * @brief Draw a source image within a destination image (tint applied to source)
         * @param dst the image to Draw on
         * @param src the image to Draw
         * @param srcRec the rectangle of the source image to Draw
         * @param dstRec the rectangle of the destination image to Draw on
         * @param tint the color to use
         */
        static void drawImage(image::RlImage &dst, const image::RlImage &src, const Rectangle &srcRec, const Rectangle &dstRec, const RlColor &tint);

        /**
         * @brief Draw text (using default font) within an image (destination)
         * @param dst the image to Draw on
         * @param text the text to Draw
         * @param posX the x position to Draw at
         * @param posY the y position to Draw at
         * @param fontSize the font size to use
         * @param color the color to use
         */
        static void drawImageText(image::RlImage &dst, const std::string &text, int posX, int posY, int fontSize, const RlColor &color);

        /**
         * @brief Draw text (custom sprite font) within an image (destination)
         * @param dst the image to Draw on
         * @param font the font to use
         * @param text the text to Draw
         * @param position the position to Draw at
         * @param fontSize the font size to use
         * @param spacing the spacing between letters
         * @param tint the color to use
         */
        static void drawImageText(image::RlImage &dst, const raylib::text::RlFont &font, const std::string &text, const Vector2f &position, float fontSize, float spacing, const RlColor &tint);
    };
}

#endif //INDIESTUDIO_IMAGEDRAWHELPER_HPP
