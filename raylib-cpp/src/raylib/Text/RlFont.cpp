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

raylib::RlFont::~RlFont()
{
    if (!this->_defaultFont)
        UnloadFont(this->_font);
}


/*
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
*/


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

void raylib::RlFont::setTextSpacing(float textSpacing)
{
    _textSpacing = textSpacing;
}
