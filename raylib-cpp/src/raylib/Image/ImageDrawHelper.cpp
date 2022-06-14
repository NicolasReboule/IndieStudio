/*
** EPITECH PROJECT, 2022
** ImageDrawHelper.cpp
** File description:
** ImageDrawHelper.cpp
*/

#include "raylib/Image/ImageDrawHelper.hpp"

void raylib::image::ImageDrawHelper::clearBackground(RlImage &dst, const RlColor &color)
{
    ImageClearBackground(&dst.getImage(), color.getColor());
}

void raylib::image::ImageDrawHelper::drawPixel(RlImage &dst, int posX, int posY, const RlColor &color)
{
    ImageDrawPixel(&dst.getImage(), posX, posY, color.getColor());
}

void raylib::image::ImageDrawHelper::drawPixel(RlImage &dst, const Vector2f &position, const RlColor &color)
{
    ImageDrawPixel(&dst.getImage(), (int) position.x, (int) position.y, color.getColor());
}

void raylib::image::ImageDrawHelper::drawLine(RlImage &dst, int startPosX, int startPosY, int endPosX, int endPosY, const RlColor &color)
{
    ImageDrawLine(&dst.getImage(), startPosX, startPosY, endPosX, endPosY, color.getColor());
}

void raylib::image::ImageDrawHelper::drawLine(RlImage &dst, const Vector2f &start, const Vector2f &end, const RlColor &color)
{
    ImageDrawLine(&dst.getImage(), (int) start.x, (int) start.y, (int) end.x, (int) end.y, color.getColor());
}

void raylib::image::ImageDrawHelper::drawCircle(RlImage &dst, int centerX, int centerY, int radius, const RlColor &color)
{
    ImageDrawCircle(&dst.getImage(), centerX, centerY, radius, color.getColor());
}

void raylib::image::ImageDrawHelper::drawCircle(RlImage &dst, const Vector2f &center, int radius, const RlColor &color)
{
    ImageDrawCircle(&dst.getImage(), (int) center.x, (int) center.y, radius, color.getColor());
}

void raylib::image::ImageDrawHelper::drawRectangle(RlImage &dst, int posX, int posY, int width, int height, const RlColor &color)
{
    ImageDrawRectangle(&dst.getImage(), posX, posY, width, height, color.getColor());
}

void raylib::image::ImageDrawHelper::drawRectangle(RlImage &dst, const Vector2f &position, const Vector2f &size, const RlColor &color)
{
    ImageDrawRectangle(&dst.getImage(), (int) position.x, (int) position.y, (int) size.x, (int) size.y, color.getColor());
}

void raylib::image::ImageDrawHelper::drawRectangleRec(RlImage &dst, const Rectangle &rec, const RlColor &color)
{
    ImageDrawRectangleRec(&dst.getImage(), rec, color.getColor());
}

void raylib::image::ImageDrawHelper::drawRectangleLines(RlImage &dst, const Rectangle &rec, int thick, const RlColor &color)
{
    ImageDrawRectangleLines(&dst.getImage(), rec, thick, color.getColor());
}

void raylib::image::ImageDrawHelper::drawImage(RlImage &dst, const RlImage &src, const Rectangle &srcRec, const Rectangle &dstRec, const RlColor &tint)
{
    ImageDraw(&dst.getImage(), src.getImage(), srcRec, dstRec, tint.getColor());
}

void raylib::image::ImageDrawHelper::drawImageText(RlImage &dst, const std::string &text, int posX, int posY, int fontSize, const RlColor &color)
{
    ImageDrawText(&dst.getImage(), text.c_str(), posX, posY, fontSize, color.getColor());
}

void raylib::image::ImageDrawHelper::drawImageText(RlImage &dst, const RlFont &font, const std::string &text, const Vector2f &position, float fontSize, float spacing, const RlColor &tint)
{
    ImageDrawTextEx(&dst.getImage(), font.getFont(), text.c_str(), raylib::VectorHelper::toRaylibVector(position), fontSize, spacing, tint.getColor());
}
