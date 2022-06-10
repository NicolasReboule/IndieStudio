/*
** EPITECH PROJECT, 2022
** ImageHelper.cpp
** FileHelper description:
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

// Image manipulation functions

Image raylib::ImageHelper::imageCopy(Image image)
{
    return ImageCopy(image);
}

Image raylib::ImageHelper::imageFromImage(Image image, Rectangle rec)
{
    return ImageFromImage(image, rec);
}

Image raylib::ImageHelper::imageText(const std::string &text, int fontSize, Color color)
{
    return ImageText(text.c_str(), fontSize, color);
}

Image raylib::ImageHelper::imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint)
{
    return ImageTextEx(font, text.c_str(), fontSize, spacing, tint);
}

void raylib::ImageHelper::imageFormat(Image *image, int newFormat)
{
    ImageFormat(image, newFormat);
}

void raylib::ImageHelper::imageToPOT(Image *image, Color fill)
{
    ImageToPOT(image, fill);
}

void raylib::ImageHelper::imageCrop(Image *image, Rectangle crop)
{
    ImageCrop(image, crop);
}

void raylib::ImageHelper::imageAlphaCrop(Image *image, float threshold)
{
    ImageAlphaCrop(image, threshold);
}

void raylib::ImageHelper::imageAlphaClear(Image *image, Color color, float threshold)
{
    ImageAlphaClear(image, color, threshold);
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

void raylib::ImageHelper::imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
{
    ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
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

void raylib::ImageHelper::imageColorTint(Image *image, Color color)
{
    ImageColorTint(image, color);
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

void raylib::ImageHelper::imageColorReplace(Image *image, Color color, Color replace)
{
    ImageColorReplace(image, color, replace);
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

