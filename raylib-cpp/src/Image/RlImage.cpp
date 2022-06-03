/*
** EPITECH PROJECT, 2022
** RlImage.cpp
** FileHelper description:
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
