/*
** EPITECH PROJECT, 2022
** ImageHelper.hpp
** File description:
** ImageHelper.hpp
*/

#ifndef INDIESTUDIO_IMAGEHELPER_HPP
#define INDIESTUDIO_IMAGEHELPER_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class ImageHelper {
    public:
        // Image drawing functions
        // NOTE: Image software-rendering functions (CPU)
        void imageClearBackground(Image *dst, Color color);                                                // Clear image background with given color
        void imageDrawPixel(Image *dst, int posX, int posY, Color color);                                  // DrawHelper pixel within an image
        void imageDrawPixelV(Image *dst, Vector2 position, Color color);                                   // DrawHelper pixel within an image (Vector version)
        void imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color); // DrawHelper line within an image
        void imageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color);                          // DrawHelper line within an image (Vector version)
        void imageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color);               // DrawHelper circle within an image
        void imageDrawCircleV(Image *dst, Vector2 center, int radius, Color color);                        // DrawHelper circle within an image (Vector version)
        void imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color);       // DrawHelper rectangle within an image
        void imageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color);                 // DrawHelper rectangle within an image (Vector version)
        void imageDrawRectangleRec(Image *dst, Rectangle rec, Color color);                                // DrawHelper rectangle within an image
        void imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color);                   // DrawHelper rectangle lines within an image
        void imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint);             // DrawHelper a source image within a destination image (tint applied to source)
        void imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, Color color);   // DrawHelper text (using default font) within an image (destination)
        void imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint); // DrawHelper text (custom sprite font) within an image (destination)

    private:
    };
}

#endif //INDIESTUDIO_IMAGEHELPER_HPP
