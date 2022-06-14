/*
** EPITECH PROJECT, 2022
** ImageHelper.cpp
** FileHelper description:
** ImageHelper.cpp
*/

#include "raylib/Image/ImageHelper.hpp"

raylib::image::RlImage raylib::image::ImageHelper::load(const std::string &fileName)
{
    return raylib::image::RlImage(LoadImage(fileName.c_str()));
}

raylib::image::RlImage raylib::image::ImageHelper::loadRaw(const std::string &fileName, int width, int height, int format, int headerSize)
{
    return raylib::image::RlImage(LoadImageRaw(fileName.c_str(), width, height, format, headerSize));
}

raylib::image::RlImage raylib::image::ImageHelper::loadAnim(const std::string &fileName)
{
    int frames = 0;
    return raylib::image::RlImage(LoadImageAnim(fileName.c_str(), &frames), frames);
}

raylib::image::RlImage raylib::image::ImageHelper::loadFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return raylib::image::RlImage(LoadImageFromMemory(fileType.c_str(), fileData, dataSize));
}

raylib::image::RlImage raylib::image::ImageHelper::loadFromTexture(const Texture2D &texture)
{
    return raylib::image::RlImage(LoadImageFromTexture(texture));
}

raylib::image::RlImage raylib::image::ImageHelper::loadFromScreen()
{
    return raylib::image::RlImage(LoadImageFromScreen());
}

raylib::image::RlImage raylib::image::ImageHelper::fromText(const std::string &text, int fontSize, const RlColor &color)
{
    return raylib::image::RlImage(ImageText(text.c_str(), fontSize, color.getColor()));
}

raylib::image::RlImage raylib::image::ImageHelper::fromText(const raylib::RlFont &font, const std::string &text, float fontSize, float spacing, const RlColor &tint)
{
    return raylib::image::RlImage(ImageTextEx(font.getFont(), text.c_str(), fontSize, spacing, tint.getColor()));
}

raylib::image::RlImage raylib::image::ImageHelper::genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod)
{
    return raylib::image::RlImage(GenImageFontAtlas(chars, recs, glyphCount, fontSize, padding, packMethod));
}
