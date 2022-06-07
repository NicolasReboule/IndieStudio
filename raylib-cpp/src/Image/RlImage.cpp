/*
** EPITECH PROJECT, 2022
** RlImage.cpp
** FileHelper description:
** RlImage.cpp
*/

#include "raylib/Image/RlImage.hpp"

// Image loading functions

raylib::RlImage::RlImage()
{
    this->_image.data = nullptr;
    this->_image.format = 0;
    this->_image.mipmaps = 0;
    this->_image.width = 0;
    this->_image.height = 0;
}

raylib::RlImage::~RlImage()
{
    UnloadImage(this->_image);
}

void raylib::RlImage::load(const std::string &fileName)
{
    this->_image = LoadImage(fileName.c_str());
}

void raylib::RlImage::loadRaw(const std::string &fileName, int width, int height, int format, int headerSize)
{
    this->_image = LoadImageRaw(fileName.c_str(), width, height, format, headerSize);
}

void raylib::RlImage::loadAnim(const std::string &fileName, int *frames)
{
    this->_image = LoadImageAnim(fileName.c_str(), frames);
}

void raylib::RlImage::loadFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    this->_image = LoadImageFromMemory(fileType.c_str(), fileData, dataSize);
}

void raylib::RlImage::loadFromTexture(Texture2D texture)
{
    this->_image = LoadImageFromTexture(texture);
}

void raylib::RlImage::loadFromScreen()
{
    this->_image = LoadImageFromScreen();
}

bool raylib::RlImage::exportImage(Image image, const std::string &fileName)
{
    return ExportImage(image, fileName.c_str());
}

bool raylib::RlImage::exportAsCode(Image image, const std::string &fileName)
{
    return ExportImageAsCode(image, fileName.c_str());
}
