/*
** EPITECH PROJECT, 2022
** Font.cpp
** FileHelper description:
** Font.cpp
*/

#include "raylib/Text/RlFont.hpp"

raylib::RlFont::RlFont()
{
    this->_fontSize = 10;
    this->_textSpacing = 1;
    this->_font = GetFontDefault();
    this->_fontPath = "";
}

raylib::RlFont::RlFont(Font font, float fontSize, float textSpacing)
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_font = font;
    this->_fontPath = "";
}

raylib::RlFont::RlFont(const raylib::RlFont &font)
{
    *this = font;
}

raylib::RlFont::RlFont(const std::string &fileName, float fontSize, float textSpacing)
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = fileName;
    this->_font = LoadFont(fileName.c_str());
}

raylib::RlFont::RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, float realFontSize, float textSpacing)
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = fileName;
    this->_font = LoadFontEx(fileName.c_str(), fontSize, fontChars, glyphCount);
}

raylib::RlFont::RlFont(Image image, Color key, int firstChar, float fontSize, float textSpacing)
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = LoadFontFromImage(image, key, firstChar);
}

raylib::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, float realFontSize, float textSpacing)
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
}

raylib::RlFont::~RlFont()
{
    UnloadFont(_font);
}

raylib::RlFont &raylib::RlFont::operator=(const raylib::RlFont &font)
{
    this->_font = font._font;
    this->_fontPath = font._fontPath;
    this->_fontSize = font._fontSize;
    _textSpacing = font._textSpacing;
    return *this;
}

// Font loading/unloading functions

GlyphInfo *raylib::RlFont::loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int type)
{
    return LoadFontData(fileData, dataSize, fontSize, fontChars, glyphCount, type);
}

Image raylib::RlFont::genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod)
{
    return GenImageFontAtlas(chars, recs, glyphCount, fontSize, padding, packMethod);
}

void raylib::RlFont::unloadFontData(GlyphInfo *chars, int glyphCount)
{
    UnloadFontData(chars, glyphCount);
}

void raylib::RlFont::setFontSize(float fontSize)
{
    this->_fontSize = fontSize;
}

void raylib::RlFont::setTextSpacing(float textSpacing)
{
    _textSpacing = textSpacing;
}
