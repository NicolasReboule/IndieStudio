/*
** EPITECH PROJECT, 2022
** ImageHelper.cpp
** FileHelper description:
** ImageHelper.cpp
*/

#include "raylib/Image/ImageHelper.hpp"

void raylib::ImageHelper::imageClearBackground(Image *dst, RlColor color)
{
    ImageClearBackground(dst, color.getColor());
}

void raylib::ImageHelper::imageDrawPixel(Image *dst, int posX, int posY, RlColor color)
{
    ImageDrawPixel(dst, posX, posY, color.getColor());
}

void raylib::ImageHelper::imageDrawPixelV(Image *dst, Vector2f position, RlColor color)
{
    ImageDrawPixelV(dst, raylib::VectorHelper::toRaylibVector(position), color.getColor());
}

void raylib::ImageHelper::imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, RlColor color)
{
    ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color.getColor());
}

void raylib::ImageHelper::imageDrawLineV(Image *dst, Vector2f start, Vector2f end, RlColor color)
{
    ImageDrawLineV(dst, raylib::VectorHelper::toRaylibVector(start), raylib::VectorHelper::toRaylibVector(end), color.getColor());
}

void raylib::ImageHelper::imageDrawCircle(Image *dst, int centerX, int centerY, int radius, RlColor color)
{
    ImageDrawCircle(dst, centerX, centerY, radius, color.getColor());
}

void raylib::ImageHelper::imageDrawCircleV(Image *dst, Vector2f center, int radius, RlColor color)
{
    ImageDrawCircleV(dst, raylib::VectorHelper::toRaylibVector(center), radius, color.getColor());
}

void raylib::ImageHelper::imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, RlColor color)
{
    ImageDrawRectangle(dst, posX, posY, width, height, color.getColor());
}

void raylib::ImageHelper::imageDrawRectangleV(Image *dst, Vector2f position, Vector2f size, RlColor color)
{
    ImageDrawRectangleV(dst, raylib::VectorHelper::toRaylibVector(position), raylib::VectorHelper::toRaylibVector(size), color.getColor());
}

void raylib::ImageHelper::imageDrawRectangleRec(Image *dst, Rectangle rec, RlColor color)
{
    ImageDrawRectangleRec(dst, rec, color.getColor());
}

void raylib::ImageHelper::imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, RlColor color)
{
    ImageDrawRectangleLines(dst, rec, thick, color.getColor());
}

void raylib::ImageHelper::imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, RlColor tint)
{
    ImageDraw(dst, src, srcRec, dstRec, tint.getColor());
}

void raylib::ImageHelper::imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, RlColor color)
{
    ImageDrawText(dst, text.c_str(), posX, posY, fontSize, color.getColor());
}

void raylib::ImageHelper::imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2f position, float fontSize, float spacing, RlColor tint)
{
    ImageDrawTextEx(dst, font, text.c_str(), raylib::VectorHelper::toRaylibVector(position), fontSize, spacing, tint.getColor());
}

// Image manipulation functions

Image raylib::ImageHelper::imageCopy(Image image)
{
    return ImageCopy(image);
}

Image raylib::ImageHelper::imageFromImage(Image image, Rectangle rec)
{
    return ImageFromImage(image, rec);
}

Image raylib::ImageHelper::imageText(const std::string &text, int fontSize, RlColor color)
{
    return ImageText(text.c_str(), fontSize, color.getColor());
}

Image raylib::ImageHelper::imageTextEx(Font font, const std::string &text, float fontSize, float spacing, RlColor tint)
{
    return ImageTextEx(font, text.c_str(), fontSize, spacing, tint.getColor());
}

void raylib::ImageHelper::imageFormat(Image *image, int newFormat)
{
    ImageFormat(image, newFormat);
}

void raylib::ImageHelper::imageToPOT(Image *image, RlColor fill)
{
    ImageToPOT(image, fill.getColor());
}

void raylib::ImageHelper::imageCrop(Image *image, Rectangle crop)
{
    ImageCrop(image, crop);
}

void raylib::ImageHelper::imageAlphaCrop(Image *image, float threshold)
{
    ImageAlphaCrop(image, threshold);
}

void raylib::ImageHelper::imageAlphaClear(Image *image, RlColor color, float threshold)
{
    ImageAlphaClear(image, color.getColor(), threshold);
}

void raylib::ImageHelper::imageAlphaMask(Image *image, Image alphaMask)
{
    ImageAlphaMask(image, alphaMask);
}

void raylib::ImageHelper::imageAlphaPremultiply(Image *image)
{
    ImageAlphaPremultiply(image);
}

void raylib::ImageHelper::imageResize(Image *image, int newWidth, int newHeight)
{
    ImageResize(image, newWidth, newHeight);
}

void raylib::ImageHelper::imageResizeNN(Image *image, int newWidth, int newHeight)
{
    ImageResizeNN(image, newWidth, newHeight);
}

void raylib::ImageHelper::imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, RlColor fill)
{
    ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill.getColor());
}

void raylib::ImageHelper::imageMipmaps(Image *image)
{
    ImageMipmaps(image);
}

void raylib::ImageHelper::imageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
{
    ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

void raylib::ImageHelper::imageFlipVertical(Image *image)
{
    ImageFlipVertical(image);
}

void raylib::ImageHelper::imageFlipHorizontal(Image *image)
{
    ImageFlipHorizontal(image);
}

void raylib::ImageHelper::imageRotateCW(Image *image)
{
    ImageRotateCW(image);
}

void raylib::ImageHelper::imageRotateCCW(Image *image)
{
    ImageRotateCCW(image);
}

void raylib::ImageHelper::imageColorTint(Image *image, RlColor color)
{
    ImageColorTint(image, color.getColor());
}

void raylib::ImageHelper::imageColorInvert(Image *image)
{
    ImageColorInvert(image);
}

void raylib::ImageHelper::imageColorGrayscale(Image *image)
{
    ImageColorGrayscale(image);
}

void raylib::ImageHelper::imageColorContrast(Image *image, float contrast)
{
    ImageColorContrast(image, contrast);
}

void raylib::ImageHelper::imageColorBrightness(Image *image, int brightness)
{
    ImageColorBrightness(image, brightness);
}

void raylib::ImageHelper::imageColorReplace(Image *image, RlColor color, RlColor replace)
{
    ImageColorReplace(image, color.getColor(), replace.getColor());
}

Color *raylib::ImageHelper::loadImageColors(Image image)
{
    return LoadImageColors(image);
}

Color *raylib::ImageHelper::loadImagePalette(Image image, int maxPaletteSize, int *colorsCount)
{
    return LoadImagePalette(image, maxPaletteSize, colorsCount);
}

void raylib::ImageHelper::unloadImageColors(Color *colors)
{
    UnloadImageColors(colors);
}

void raylib::ImageHelper::unloadImagePalette(Color *colors)
{
    UnloadImagePalette(colors);
}

Rectangle raylib::ImageHelper::getImageAlphaBorder(Image image, float threshold)
{
    return GetImageAlphaBorder(image, threshold);
}

Color raylib::ImageHelper::getImageColor(Image image, int x, int y)
{
    return GetImageColor(image, x, y);
}

