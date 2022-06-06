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
    this->_font = getFontDefault();
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
    this->_font = this->loadFont(fileName);
}

raylib::RlFont::RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, float realFontSize, float textSpacing)
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = fileName;
    this->_font = this->loadFontEx(fileName, fontSize, fontChars, glyphCount);
}

raylib::RlFont::RlFont(Image image, Color key, int firstChar, float fontSize, float textSpacing)
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = this->loadFontFromImage(image, key, firstChar);
}

raylib::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, float realFontSize, float textSpacing)
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = this->loadFontFromMemory(fileType, fileData, dataSize, fontSize, fontChars, glyphCount);
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

Font raylib::RlFont::getFontDefault()
{
    return GetFontDefault();
}

Font raylib::RlFont::loadFont(const std::string &fileName)
{
    return LoadFont(fileName.c_str());
}

Font raylib::RlFont::loadFontEx(const std::string &fileName, int fontSize, int *fontChars, int glyphCount)
{
    return LoadFontEx(fileName.c_str(), fontSize, fontChars, glyphCount);
}

Font raylib::RlFont::loadFontFromImage(Image image, Color key, int firstChar)
{
    return LoadFontFromImage(image, key, firstChar);
}

Font raylib::RlFont::loadFontFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount)
{
    return LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
}

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

void raylib::RlFont::unloadFont(Font font)
{
    UnloadFont(font);
}

void raylib::RlFont::setFontSize(float fontSize)
{
    this->_fontSize = fontSize;
}

void raylib::RlFont::setTextSpacing(float textSpacing)
{
    _textSpacing = textSpacing;
}
