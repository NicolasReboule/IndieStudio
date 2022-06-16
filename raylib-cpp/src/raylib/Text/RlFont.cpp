/*
** EPITECH PROJECT, 2022
** Font.cpp
** FileHelper description:
** Font.cpp
*/

#include "raylib/Text/RlFont.hpp"

raylib::text::RlFont::RlFont() : _font()
{
    this->_font = GetFontDefault();
    this->_fontSize = this->_font.baseSize;
    this->_fontPath = "";
}

raylib::text::RlFont::RlFont(const std::string &filename) : _font()
{
    this->_fontPath = filename;
    this->_font = LoadFont(this->_fontPath.c_str());
    this->_fontSize = this->_font.baseSize;
}

raylib::text::RlFont::RlFont(const std::string &fontPath, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = fontPath;
    this->_font = LoadFontEx(this->_fontPath.c_str(), fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
}

raylib::text::RlFont::RlFont(const raylib::image::RlImage &image, const RlColor &key, const int &firstChar) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromImage(image.getImage(), key.getColor(), firstChar);
    this->_fontSize = this->_font.baseSize;
}

raylib::text::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
}

raylib::text::RlFont::~RlFont()
{
    UnloadFont(this->_font);
}

const Font &raylib::text::RlFont::getFont() const
{
    return this->_font;
}

const std::string &raylib::text::RlFont::getFontPath() const
{
    return this->_fontPath;
}

int raylib::text::RlFont::getFontSize() const
{
    return this->_fontSize;
}

std::shared_ptr<raylib::text::RlFont> raylib::text::RlFont::getDefaultFont()
{
    return std::make_shared<RlFont>();
}
