/*
** EPITECH PROJECT, 2022
** Font.cpp
** File description:
** Font.cpp
*/

#include "raylib/Fonts.hpp"

// Font loading/unloading functions

Font raylib::Fonts::getFontDefault()
{
    return GetFontDefault();
}

Font raylib::Fonts::loadFont(const std::string &fileName)
{
    return LoadFont(fileName.c_str());
}

Font raylib::Fonts::loadFontEx(const std::string &fileName, int fontSize, int *fontChars, int glyphCount)
{
    return LoadFontEx(fileName.c_str(), fontSize, fontChars, glyphCount);
}

Font raylib::Fonts::loadFontFromImage(Image image, Color key, int firstChar)
{
    return LoadFontFromImage(image, key, firstChar);
}

Font raylib::Fonts::loadFontFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount)
{
    return LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
}

GlyphInfo *raylib::Fonts::loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int type)
{
    return LoadFontData(fileData, dataSize, fontSize, fontChars, glyphCount, type);
}

Image raylib::Fonts::genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod)
{
    return GenImageFontAtlas(chars, recs, glyphCount, fontSize, padding, packMethod);
}

void raylib::Fonts::unloadFontData(GlyphInfo *chars, int glyphCount)
{
    UnloadFontData(chars, glyphCount);
}

void raylib::Fonts::unloadFont(Font font)
{
    UnloadFont(font);
}