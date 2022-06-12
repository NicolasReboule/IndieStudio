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
    this->_defaultFont = true;
    this->_fontPath = "";
    this->_textSpacing = 1;
}

raylib::RlFont::RlFont(const std::string &filename) : _font()
{
    this->_fontPath = filename;
    this->_font = LoadFont(this->_fontPath.c_str());
    this->_fontSize = this->_font.baseSize;
    this->_textSpacing = 1;
}

raylib::RlFont::RlFont(const std::string &fontPath, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = fontPath;
    this->_font = LoadFontEx(this->_fontPath.c_str(), fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
    this->_textSpacing = 1;
}

raylib::RlFont::RlFont(const raylib::RlImage &image, const RlColor &key, const int &firstChar) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromImage(image.getImage(), key.getColor(), firstChar);
    this->_fontSize = this->_font.baseSize;
    this->_textSpacing = 1;
}

raylib::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, const int &fontSize, int *fontChars, const int &glyphCount) : _font()
{
    this->_fontPath = "";
    this->_font = LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
    this->_fontSize = fontSize;
    this->_textSpacing = 1;
}

raylib::RlFont::~RlFont()
{
    if (!this->_defaultFont)
        UnloadFont(this->_font);
}

bool raylib::RlFont::isDefaultFont() const
{
    return _defaultFont;
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

float raylib::RlFont::getTextSpacing() const
{
    return _textSpacing;
}

raylib::RlFont &raylib::RlFont::setTextSpacing(float textSpacing)
{
    _textSpacing = textSpacing;
    return *this;
}
