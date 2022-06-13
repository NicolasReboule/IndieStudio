/*
** EPITECH PROJECT, 2022
** Font.cpp
** FileHelper description:
** Font.cpp
*/

#include "raylib/Text/RlFont.hpp"

raylib::RlFont::RlFont() : _font()
{
    this->_font = GetFontDefault();
    this->_fontSize = this->_font.baseSize;
    this->_fontPath = "";
}

raylib::RlFont::RlFont(const std::string &filename) : _font()
{
    this->_fontPath = filename;
    this->_font = LoadFont(this->_fontPath.c_str());
    this->_fontSize = this->_font.baseSize;
}

raylib::RlFont::RlFont(const std::string &fontPath, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = fontPath;
    this->_font = LoadFontEx(this->_fontPath.c_str(), fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
}

raylib::RlFont::RlFont(const raylib::RlImage &image, const RlColor &key, const int &firstChar) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromImage(image.getImage(), key.getColor(), firstChar);
    this->_fontSize = this->_font.baseSize;
}

raylib::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
}

raylib::RlFont::~RlFont()
{
    UnloadFont(this->_font);
}

const Font &raylib::RlFont::getFont() const
{
    return _font;
}

const std::string &raylib::RlFont::getFontPath() const
{
    return _fontPath;
}

int raylib::RlFont::getFontSize() const
{
    return _fontSize;
}
