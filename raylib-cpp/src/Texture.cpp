/*
** EPITECH PROJECT, 2022
** Texture.cpp
** File description:
** Texture.cpp
*/

#include "raylib/Texture.hpp"

// Image loading functions

Image raylib::Texture::loadImage(const std::string &fileName)
{
    return LoadImage(fileName.c_str());
}

Image raylib::Texture::loadImageRaw(const std::string &fileName, int width, int height, int format, int headerSize)
{
    return LoadImageRaw(fileName.c_str(), width, height, format, headerSize);
}

Image raylib::Texture::loadImageAnim(const std::string &fileName, int *frames)
{
    return LoadImageAnim(fileName.c_str(), frames);
}

Image raylib::Texture::loadImageFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return LoadImageFromMemory(fileType.c_str(), fileData, dataSize);
}

Image raylib::Texture::loadImageFromTexture(Texture2D texture)
{
    return LoadImageFromTexture(texture);
}

Image raylib::Texture::loadImageFromScreen()
{
    return LoadImageFromScreen();
}

void raylib::Texture::unloadImage(Image image)
{
    UnloadImage(image);
}

bool raylib::Texture::exportImage(Image image, const std::string &fileName)
{
    return ExportImage(image, fileName.c_str());
}

bool raylib::Texture::exportImageAsCode(Image image, const std::string &fileName)
{
    return ExportImageAsCode(image, fileName.c_str());
}

// Image generation functions

Image raylib::Texture::genImageColor(int width, int height, Color color)
{
    return GenImageColor(width, height, color);
}

Image raylib::Texture::genImageGradientV(int width, int height, Color top, Color bottom)
{
    return GenImageGradientV(width, height, top, bottom);
}

Image raylib::Texture::genImageGradientH(int width, int height, Color left, Color right)
{
    return GenImageGradientH(width, height, left, right);
}

Image raylib::Texture::genImageGradientRadial(int width, int height, float density, Color inner, Color outer)
{
    return GenImageGradientRadial(width, height, density, inner, outer);
}

Image raylib::Texture::genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
{
    return GenImageChecked(width, height, checksX, checksY, col1, col2);
}

Image raylib::Texture::genImageWhiteNoise(int width, int height, float factor)
{
    return GenImageWhiteNoise(width, height, factor);
}

Image raylib::Texture::genImageCellular(int width, int height, int tileSize)
{
    return GenImageCellular(width, height, tileSize);
}

// Image manipulation functions

Image raylib::Texture::imageCopy(Image image)
{
    return ImageCopy(image);
}

Image raylib::Texture::imageFromImage(Image image, Rectangle rec)
{
    return ImageFromImage(image, rec);
}

Image raylib::Texture::imageText(const std::string &text, int fontSize, Color color)
{
    return ImageText(text.c_str(), fontSize, color);
}

Image raylib::Texture::imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint)
{
    return ImageTextEx(font, text.c_str(), fontSize, spacing, tint);
}

void raylib::Texture::imageFormat(Image *image, int newFormat)
{
    ImageFormat(image, newFormat);
}

void raylib::Texture::imageToPOT(Image *image, Color fill)
{
    ImageToPOT(image, fill);
}

void raylib::Texture::imageCrop(Image *image, Rectangle crop)
{
    ImageCrop(image, crop);
}

void raylib::Texture::imageAlphaCrop(Image *image, float threshold)
{
    ImageAlphaCrop(image, threshold);
}

void raylib::Texture::imageAlphaClear(Image *image, Color color, float threshold)
{
    ImageAlphaClear(image, color, threshold);
}

void raylib::Texture::imageAlphaMask(Image *image, Image alphaMask)
{
    ImageAlphaMask(image, alphaMask);
}

void raylib::Texture::imageAlphaPremultiply(Image *image)
{
    ImageAlphaPremultiply(image);
}

void raylib::Texture::imageResize(Image *image, int newWidth, int newHeight)
{
    ImageResize(image, newWidth, newHeight);
}

void raylib::Texture::imageResizeNN(Image *image, int newWidth, int newHeight)
{
    ImageResizeNN(image, newWidth, newHeight);
}

void raylib::Texture::imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
{
    ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
}

void raylib::Texture::imageMipmaps(Image *image)
{
    ImageMipmaps(image);
}

void raylib::Texture::imageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
{
    ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

void raylib::Texture::imageFlipVertical(Image *image)
{
    ImageFlipVertical(image);
}

void raylib::Texture::imageFlipHorizontal(Image *image)
{
    ImageFlipHorizontal(image);
}

void raylib::Texture::imageRotateCW(Image *image)
{
    ImageRotateCW(image);
}

void raylib::Texture::imageRotateCCW(Image *image)
{
    ImageRotateCCW(image);
}

void raylib::Texture::imageColorTint(Image *image, Color color)
{
    ImageColorTint(image, color);
}

void raylib::Texture::imageColorInvert(Image *image)
{
    ImageColorInvert(image);
}

void raylib::Texture::imageColorGrayscale(Image *image)
{
    ImageColorGrayscale(image);
}

void raylib::Texture::imageColorContrast(Image *image, float contrast)
{
    ImageColorContrast(image, contrast);
}

void raylib::Texture::imageColorBrightness(Image *image, int brightness)
{
    ImageColorBrightness(image, brightness);
}

void raylib::Texture::imageColorReplace(Image *image, Color color, Color replace)
{
    ImageColorReplace(image, color, replace);
}

Color *raylib::Texture::loadImageColors(Image image)
{
    return LoadImageColors(image);
}

Color *raylib::Texture::loadImagePalette(Image image, int maxPaletteSize, int *colorsCount)
{
    return LoadImagePalette(image, maxPaletteSize, colorsCount);
}

void raylib::Texture::unloadImageColors(Color *colors)
{
    UnloadImageColors(colors);
}

void raylib::Texture::unloadImagePalette(Color *colors)
{
    UnloadImagePalette(colors);
}

Rectangle raylib::Texture::getImageAlphaBorder(Image image, float threshold)
{
    return GetImageAlphaBorder(image, threshold);
}

Color raylib::Texture::getImageColor(Image image, int x, int y)
{
    return GetImageColor(image, x, y);
}

// Image drawing functions

void raylib::Texture::imageClearBackground(Image *dst, Color color)
{
    ImageClearBackground(dst, color);
}

void raylib::Texture::imageDrawPixel(Image *dst, int posX, int posY, Color color)
{
    ImageDrawPixel(dst, posX, posY, color);
}

void raylib::Texture::imageDrawPixelV(Image *dst, Vector2 position, Color color)
{
    ImageDrawPixelV(dst, position, color);
}

void raylib::Texture::imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
    ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
}

void raylib::Texture::imageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color)
{
    ImageDrawLineV(dst, start, end, color);
}

void raylib::Texture::imageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color)
{
    ImageDrawCircle(dst, centerX, centerY, radius, color);
}

void raylib::Texture::imageDrawCircleV(Image *dst, Vector2 center, int radius, Color color)
{
    ImageDrawCircleV(dst, center, radius, color);
}

void raylib::Texture::imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color)
{
    ImageDrawRectangle(dst, posX, posY, width, height, color);
}

void raylib::Texture::imageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color)
{
    ImageDrawRectangleV(dst, position, size, color);
}

void raylib::Texture::imageDrawRectangleRec(Image *dst, Rectangle rec, Color color)
{
    ImageDrawRectangleRec(dst, rec, color);
}

void raylib::Texture::imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color)
{
    ImageDrawRectangleLines(dst, rec, thick, color);
}

void raylib::Texture::imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
{
    ImageDraw(dst, src, srcRec, dstRec, tint);
}

void raylib::Texture::imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, Color color)
{
    ImageDrawText(dst, text.c_str(), posX, posY, fontSize, color);
}

void raylib::Texture::imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
{
    ImageDrawTextEx(dst, font, text.c_str(), position, fontSize, spacing, tint);
}

// Texture loading functions

Texture2D raylib::Texture::loadTexture(const std::string &fileName)
{
    return LoadTexture(fileName.c_str());
}

Texture2D raylib::Texture::loadTextureFromImage(Image image)
{
    return LoadTextureFromImage(image);
}

TextureCubemap raylib::Texture::loadTextureCubemap(Image image, int layout)
{
    return LoadTextureCubemap(image, layout);
}

RenderTexture2D raylib::Texture::loadRenderTexture(int width, int height)
{
    return LoadRenderTexture(width, height);
}

void raylib::Texture::unloadTexture(Texture2D texture)
{
    UnloadTexture(texture);
}

void raylib::Texture::unloadRenderTexture(RenderTexture2D target)
{
    UnloadRenderTexture(target);
}

void raylib::Texture::updateTexture(Texture2D texture, const void *pixels)
{
    UpdateTexture(texture, pixels);
}

void raylib::Texture::updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
{
    UpdateTextureRec(texture, rec, pixels);
}

// Texture configuration functions

void raylib::Texture::genTextureMipmaps(Texture2D *texture)
{
    GenTextureMipmaps(texture);
}

void raylib::Texture::setTextureFilter(Texture2D texture, int filter)
{
    SetTextureFilter(texture, filter);
}

void raylib::Texture::setTextureWrap(Texture2D texture, int wrap)
{
    SetTextureWrap(texture, wrap);
}

// Texture drawing functions

void raylib::Texture::drawTexture(Texture2D texture, int posX, int posY, Color tint)
{
    DrawTexture(texture, posX, posY, tint);
}

void raylib::Texture::drawTextureV(Texture2D texture, Vector2 position, Color tint)
{
    DrawTextureV(texture, position, tint);
}

void raylib::Texture::drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)
{
    DrawTextureEx(texture, position, rotation, scale, tint);
}

void raylib::Texture::drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)
{
    DrawTextureRec(texture, source, position, tint);
}

void raylib::Texture::drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint)
{
    DrawTextureQuad(texture, tiling, offset, quad, tint);
}

void raylib::Texture::drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint)
{
    DrawTextureTiled(texture, source, dest, origin, rotation, scale, tint);
}

void raylib::Texture::drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)
{
    DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

void raylib::Texture::drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)
{
    DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
}

void raylib::Texture::drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint)
{
    DrawTexturePoly(texture, center, points, texcoords, pointsCount, tint);
}

// Color/pixel related functions

Color raylib::Texture::fade(Color color, float alpha)
{
    return Fade(color, alpha);
}

int raylib::Texture::colorToInt(Color color)
{
    return ColorToInt(color);
}

Vector4 raylib::Texture::colorNormalize(Color color)
{
    return ColorNormalize(color);
}

Color raylib::Texture::colorFromNormalized(Vector4 normalized)
{
    return ColorFromNormalized(normalized);
}

Vector3 raylib::Texture::colorToHSV(Color color)
{
    return ColorToHSV(color);
}

Color raylib::Texture::colorFromHSV(float hue, float saturation, float value)
{
    return ColorFromHSV(hue, saturation, value);
}

Color raylib::Texture::colorAlpha(Color color, float alpha)
{
    return ColorAlpha(color, alpha);
}

Color raylib::Texture::colorAlphaBlend(Color dst, Color src, Color tint)
{
    return ColorAlphaBlend(dst, src, tint);
}

Color raylib::Texture::getColor(unsigned int hexValue)
{
    return GetColor(hexValue);
}

Color raylib::Texture::getPixelColor(void *srcPtr, int format)
{
    return GetPixelColor(srcPtr, format);
}

void raylib::Texture::setPixelColor(void *dstPtr, Color color, int format)
{
    SetPixelColor(dstPtr, color, format);
}

int raylib::Texture::getPixelDataSize(int width, int height, int format)
{
    return GetPixelDataSize(width, height, format);
}
