/*
** EPITECH PROJECT, 2022
** RlImage.cpp
** File description:
** RlImage.cpp
*/

#include "raylib/Image/RlImage.hpp"

// Image loading functions

Image raylib::RlImage::loadImage(const std::string &fileName)
{
    return LoadImage(fileName.c_str());
}

Image raylib::RlImage::loadImageRaw(const std::string &fileName, int width, int height, int format, int headerSize)
{
    return LoadImageRaw(fileName.c_str(), width, height, format, headerSize);
}

Image raylib::RlImage::loadImageAnim(const std::string &fileName, int *frames)
{
    return LoadImageAnim(fileName.c_str(), frames);
}

Image raylib::RlImage::loadImageFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return LoadImageFromMemory(fileType.c_str(), fileData, dataSize);
}

Image raylib::RlImage::loadImageFromTexture(Texture2D texture)
{
    return LoadImageFromTexture(texture);
}

Image raylib::RlImage::loadImageFromScreen()
{
    return LoadImageFromScreen();
}

void raylib::RlImage::unloadImage(Image image)
{
    UnloadImage(image);
}

bool raylib::RlImage::exportImage(Image image, const std::string &fileName)
{
    return ExportImage(image, fileName.c_str());
}

bool raylib::RlImage::exportImageAsCode(Image image, const std::string &fileName)
{
    return ExportImageAsCode(image, fileName.c_str());
}

// Image generation functions

Image raylib::RlImage::genImageColor(int width, int height, Color color)
{
    return GenImageColor(width, height, color);
}

Image raylib::RlImage::genImageGradientV(int width, int height, Color top, Color bottom)
{
    return GenImageGradientV(width, height, top, bottom);
}

Image raylib::RlImage::genImageGradientH(int width, int height, Color left, Color right)
{
    return GenImageGradientH(width, height, left, right);
}

Image raylib::RlImage::genImageGradientRadial(int width, int height, float density, Color inner, Color outer)
{
    return GenImageGradientRadial(width, height, density, inner, outer);
}

Image raylib::RlImage::genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
{
    return GenImageChecked(width, height, checksX, checksY, col1, col2);
}

Image raylib::RlImage::genImageWhiteNoise(int width, int height, float factor)
{
    return GenImageWhiteNoise(width, height, factor);
}

Image raylib::RlImage::genImageCellular(int width, int height, int tileSize)
{
    return GenImageCellular(width, height, tileSize);
}

// Image manipulation functions

Image raylib::RlImage::imageCopy(Image image)
{
    return ImageCopy(image);
}

Image raylib::RlImage::imageFromImage(Image image, Rectangle rec)
{
    return ImageFromImage(image, rec);
}

Image raylib::RlImage::imageText(const std::string &text, int fontSize, Color color)
{
    return ImageText(text.c_str(), fontSize, color);
}

Image raylib::RlImage::imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint)
{
    return ImageTextEx(font, text.c_str(), fontSize, spacing, tint);
}

void raylib::RlImage::imageFormat(Image *image, int newFormat)
{
    ImageFormat(image, newFormat);
}

void raylib::RlImage::imageToPOT(Image *image, Color fill)
{
    ImageToPOT(image, fill);
}

void raylib::RlImage::imageCrop(Image *image, Rectangle crop)
{
    ImageCrop(image, crop);
}

void raylib::RlImage::imageAlphaCrop(Image *image, float threshold)
{
    ImageAlphaCrop(image, threshold);
}

void raylib::RlImage::imageAlphaClear(Image *image, Color color, float threshold)
{
    ImageAlphaClear(image, color, threshold);
}

void raylib::RlImage::imageAlphaMask(Image *image, Image alphaMask)
{
    ImageAlphaMask(image, alphaMask);
}

void raylib::RlImage::imageAlphaPremultiply(Image *image)
{
    ImageAlphaPremultiply(image);
}

void raylib::RlImage::imageResize(Image *image, int newWidth, int newHeight)
{
    ImageResize(image, newWidth, newHeight);
}

void raylib::RlImage::imageResizeNN(Image *image, int newWidth, int newHeight)
{
    ImageResizeNN(image, newWidth, newHeight);
}

void raylib::RlImage::imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
{
    ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
}

void raylib::RlImage::imageMipmaps(Image *image)
{
    ImageMipmaps(image);
}

void raylib::RlImage::imageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
{
    ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

void raylib::RlImage::imageFlipVertical(Image *image)
{
    ImageFlipVertical(image);
}

void raylib::RlImage::imageFlipHorizontal(Image *image)
{
    ImageFlipHorizontal(image);
}

void raylib::RlImage::imageRotateCW(Image *image)
{
    ImageRotateCW(image);
}

void raylib::RlImage::imageRotateCCW(Image *image)
{
    ImageRotateCCW(image);
}

void raylib::RlImage::imageColorTint(Image *image, Color color)
{
    ImageColorTint(image, color);
}

void raylib::RlImage::imageColorInvert(Image *image)
{
    ImageColorInvert(image);
}

void raylib::RlImage::imageColorGrayscale(Image *image)
{
    ImageColorGrayscale(image);
}

void raylib::RlImage::imageColorContrast(Image *image, float contrast)
{
    ImageColorContrast(image, contrast);
}

void raylib::RlImage::imageColorBrightness(Image *image, int brightness)
{
    ImageColorBrightness(image, brightness);
}

void raylib::RlImage::imageColorReplace(Image *image, Color color, Color replace)
{
    ImageColorReplace(image, color, replace);
}

Color *raylib::RlImage::loadImageColors(Image image)
{
    return LoadImageColors(image);
}

Color *raylib::RlImage::loadImagePalette(Image image, int maxPaletteSize, int *colorsCount)
{
    return LoadImagePalette(image, maxPaletteSize, colorsCount);
}

void raylib::RlImage::unloadImageColors(Color *colors)
{
    UnloadImageColors(colors);
}

void raylib::RlImage::unloadImagePalette(Color *colors)
{
    UnloadImagePalette(colors);
}

Rectangle raylib::RlImage::getImageAlphaBorder(Image image, float threshold)
{
    return GetImageAlphaBorder(image, threshold);
}

Color raylib::RlImage::getImageColor(Image image, int x, int y)
{
    return GetImageColor(image, x, y);
}
