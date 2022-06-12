/*
** EPITECH PROJECT, 2022
** ImageHelper.cpp
** FileHelper description:
** ImageHelper.cpp
*/

#include "raylib/Image/ImageHelper.hpp"

raylib::RlImage raylib::ImageHelper::load(const std::string &fileName)
{
    return raylib::RlImage(LoadImage(fileName.c_str()));
}

raylib::RlImage raylib::ImageHelper::loadRaw(const std::string &fileName, int width, int height, int format, int headerSize)
{
    return raylib::RlImage(LoadImageRaw(fileName.c_str(), width, height, format, headerSize));
}

raylib::RlImage raylib::ImageHelper::loadAnim(const std::string &fileName)
{
    int frames = 0;
    return raylib::RlImage(LoadImageAnim(fileName.c_str(), &frames), frames);
}

raylib::RlImage raylib::ImageHelper::loadFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return raylib::RlImage(LoadImageFromMemory(fileType.c_str(), fileData, dataSize));
}

raylib::RlImage raylib::ImageHelper::loadFromTexture(const Texture2D &texture)
{
    return raylib::RlImage(LoadImageFromTexture(texture));
}

raylib::RlImage raylib::ImageHelper::loadFromScreen()
{
    return raylib::RlImage(LoadImageFromScreen());
}

raylib::RlImage raylib::ImageHelper::fromText(const std::string &text, int fontSize, const RlColor &color)
{
    return RlImage(ImageText(text.c_str(), fontSize, color.getColor()));
}

raylib::RlImage raylib::ImageHelper::fromText(const raylib::RlFont &font, const std::string &text, float fontSize, float spacing, const RlColor &tint)
{
    return RlImage(ImageTextEx(font.getFont(), text.c_str(), fontSize, spacing, tint.getColor()));
}
