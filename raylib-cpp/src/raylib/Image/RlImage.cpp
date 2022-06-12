/*
** EPITECH PROJECT, 2022
** RlImage.cpp
** FileHelper description:
** RlImage.cpp
*/

#include "raylib/Image/RlImage.hpp"

raylib::RlImage::RlImage(const Image &image) : raylib::RlImage(image, 1)
{
}

raylib::RlImage::RlImage(const Image &image, int frameCount) : _image()
{
    this->_image = image;
    this->_frameCount = frameCount;
}

raylib::RlImage::~RlImage()
{
    if (this->_image.data)
        UnloadImage(this->_image);
    this->_image.data = nullptr;
}

raylib::RlImage raylib::RlImage::copy()
{
    return raylib::RlImage(ImageCopy(this->_image));
}

bool raylib::RlImage::save(const std::string &fileName)
{
    return ExportImage(this->_image, fileName.c_str());
}

bool raylib::RlImage::saveAsCode(const std::string &fileName)
{
    return ExportImageAsCode(this->_image, fileName.c_str());
}

raylib::RlImage raylib::RlImage::subImage(const Rectangle &rec)
{
    return raylib::RlImage(ImageFromImage(this->_image, rec));
}

void raylib::RlImage::changeFormat(int newFormat)
{
    ImageFormat(&this->_image, newFormat);
}

void raylib::RlImage::toPot(const RlColor &fill)
{
    ImageToPOT(&this->_image, fill.getColor());
}

void raylib::RlImage::crop(const Rectangle &crop)
{
    ImageCrop(&this->_image, crop);
}

void raylib::RlImage::alphaCrop(float threshold)
{
    ImageAlphaCrop(&this->_image, threshold);
}

void raylib::RlImage::alphaClear(const RlColor &color, float threshold)
{
    ImageAlphaClear(&this->_image, color.getColor(), threshold);
}

void raylib::RlImage::alphaMask(const raylib::RlImage &alphaMask)
{
    ImageAlphaMask(&this->_image, alphaMask._image);
}

void raylib::RlImage::alphaPremultiply()
{
    ImageAlphaPremultiply(&this->_image);
}

void raylib::RlImage::resize(int newWidth, int newHeight)
{
    ImageResize(&this->_image, newWidth, newHeight);
}

void raylib::RlImage::resizeNearesetNeighbor(int newWidth, int newHeight)
{
    ImageResizeNN(&this->_image, newWidth, newHeight);
}

void raylib::RlImage::resizeCanvas(int newWidth, int newHeight, int offsetX, int offsetY, const RlColor &fill)
{
    ImageResizeCanvas(&this->_image, newWidth, newHeight, offsetX, offsetY, fill.getColor());
}

void raylib::RlImage::mipmaps()
{
    ImageMipmaps(&this->_image);
}

void raylib::RlImage::dither(int rBpp, int gBpp, int bBpp, int aBpp)
{
    ImageDither(&this->_image, rBpp, gBpp, bBpp, aBpp);
}

void raylib::RlImage::flipVertical()
{
    ImageFlipVertical(&this->_image);
}

void raylib::RlImage::flipHorizontal()
{
    ImageFlipHorizontal(&this->_image);
}

void raylib::RlImage::rotateClockwise()
{
    ImageRotateCW(&this->_image);
}

void raylib::RlImage::rotateCounterClockwise()
{
    ImageRotateCCW(&this->_image);
}

void raylib::RlImage::colorTint(const RlColor &color)
{
    ImageColorTint(&this->_image, color.getColor());
}

void raylib::RlImage::colorInvert()
{
    ImageColorInvert(&this->_image);
}

void raylib::RlImage::colorGrayscale()
{
    ImageColorGrayscale(&this->_image);
}

void raylib::RlImage::colorContrast(float contrast)
{
    ImageColorContrast(&this->_image, contrast);
}

void raylib::RlImage::colorBrightness(int brightness)
{
    ImageColorBrightness(&this->_image, brightness);
}

void raylib::RlImage::colorReplace(const RlColor &color, const RlColor &replace)
{
    ImageColorReplace(&this->_image, color.getColor(), replace.getColor());
}

std::vector<RlColor> raylib::RlImage::loadImageColors()
{
    Color *colors = LoadImageColors(this->_image);
    std::vector<RlColor> colorsVector;
    for (int i = 0; i < this->_image.width * this->_image.height; i++)
        colorsVector.emplace_back(colors[i]);
    UnloadImageColors(colors);
    return colorsVector;
}

std::vector<RlColor> raylib::RlImage::loadImagePalette(int maxPaletteSize)
{
    int palCount = 0;
    Color *colors = LoadImagePalette(this->_image, maxPaletteSize, &palCount);
    std::vector<RlColor> colorsVector;
    for (int i = 0; i < palCount; i++)
        colorsVector.emplace_back(colors[i]);
    UnloadImagePalette(colors);
    return colorsVector;
}

Rectangle raylib::RlImage::getImageAlphaBorder(float threshold)
{
    return GetImageAlphaBorder(this->_image, threshold);
}

raylib::RlColor raylib::RlImage::getImageColor(int x, int y)
{
    return RlColor(GetImageColor(this->_image, x, y));
}

const Image &raylib::RlImage::getImage() const
{
    return this->_image;
}

Image &raylib::RlImage::getImage()
{
    return this->_image;
}

const int &raylib::RlImage::getFrameCount() const
{
    return _frameCount;
}
