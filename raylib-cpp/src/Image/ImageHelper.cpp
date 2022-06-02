/*
** EPITECH PROJECT, 2022
** ImageHelper.cpp
** File description:
** ImageHelper.cpp
*/

#include "raylib/Image/ImageHelper.hpp"

// Image drawing functions

void raylib::ImageHelper::imageClearBackground(Image *dst, Color color)
{
    ImageClearBackground(dst, color);
}

void raylib::ImageHelper::imageDrawPixel(Image *dst, int posX, int posY, Color color)
{
    ImageDrawPixel(dst, posX, posY, color);
}

void raylib::ImageHelper::imageDrawPixelV(Image *dst, Vector2 position, Color color)
{
    ImageDrawPixelV(dst, position, color);
}

void raylib::ImageHelper::imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
    ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
}

void raylib::ImageHelper::imageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color)
{
    ImageDrawLineV(dst, start, end, color);
}

void raylib::ImageHelper::imageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color)
{
    ImageDrawCircle(dst, centerX, centerY, radius, color);
}

void raylib::ImageHelper::imageDrawCircleV(Image *dst, Vector2 center, int radius, Color color)
{
    ImageDrawCircleV(dst, center, radius, color);
}

void raylib::ImageHelper::imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color)
{
    ImageDrawRectangle(dst, posX, posY, width, height, color);
}

void raylib::ImageHelper::imageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color)
{
    ImageDrawRectangleV(dst, position, size, color);
}

void raylib::ImageHelper::imageDrawRectangleRec(Image *dst, Rectangle rec, Color color)
{
    ImageDrawRectangleRec(dst, rec, color);
}

void raylib::ImageHelper::imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color)
{
    ImageDrawRectangleLines(dst, rec, thick, color);
}

void raylib::ImageHelper::imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
{
    ImageDraw(dst, src, srcRec, dstRec, tint);
}

void raylib::ImageHelper::imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, Color color)
{
    ImageDrawText(dst, text.c_str(), posX, posY, fontSize, color);
}

void raylib::ImageHelper::imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
{
    ImageDrawTextEx(dst, font, text.c_str(), position, fontSize, spacing, tint);
}
