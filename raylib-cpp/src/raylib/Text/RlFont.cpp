/*
** EPITECH PROJECT, 2022
** Font.cpp
** FileHelper description:
** Font.cpp
*/

#include "raylib/Text/RlFont.hpp"

raylib::RlFont::RlFont() : _font()
{
    this->_fontSize = 10;
    this->_textSpacing = 1;
    this->_font = GetFontDefault();
    this->_defaultFont = true;
    this->_fontPath = "";
}

raylib::RlFont::RlFont(const Font &font, int fontSize, float textSpacing) : _font()
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_font = font;
    this->_fontPath = "";
    this->_defaultFont = false;
}

raylib::RlFont::RlFont(const std::string &fileName, int fontSize, float textSpacing) : _font()
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = fileName;
    this->_font = LoadFontEx(fileName.c_str(), fontSize, nullptr, 0);
    this->_defaultFont = false;
}

raylib::RlFont::RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, int realFontSize, float textSpacing) : _font()
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = fileName;
    this->_font = LoadFontEx(fileName.c_str(), fontSize, fontChars, glyphCount);
    this->_defaultFont = false;
}

raylib::RlFont::RlFont(const RlImage &image, const RlColor &key, int firstChar, int fontSize, float textSpacing) : _font()
{
    this->_fontSize = fontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = LoadFontFromImage(image.getImage(), key.getColor(), firstChar);
    this->_defaultFont = false;
}

raylib::RlFont::RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int realFontSize, float textSpacing) : _font()
{
    this->_fontSize = realFontSize;
    this->_textSpacing = textSpacing;
    this->_fontPath = "";
    this->_font = LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize, fontChars, glyphCount);
    this->_defaultFont = false;
}

raylib::RlFont::~RlFont()
{
    if (!this->_defaultFont)
        UnloadFont(this->_font);
}

void raylib::RlFont::setFontSize(int fontSize)
{
    this->_fontSize = fontSize;
}

void raylib::RlFont::setTextSpacing(float textSpacing)
{
    _textSpacing = textSpacing;
}

Font &raylib::RlFont::getFont()
{
    return this->_font;
}

const Font &raylib::RlFont::getFont() const
{
    return this->_font;
}

bool raylib::RlFont::isDefaultFont() const
{
    return this->_defaultFont;
}

const std::string &raylib::RlFont::getFontPath() const
{
    return this->_fontPath;
}

const int &raylib::RlFont::getFontSize() const
{
    return this->_fontSize;
}

const float &raylib::RlFont::getTextSpacing() const
{
    return this->_textSpacing;
}
