/*
** EPITECH PROJECT, 2022
** TextHelper.cpp
** FileHelper description:
** TextHelper.cpp
*/

#include "raylib/Text/TextHelper.hpp"

int raylib::TextHelper::measureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

Vector2f raylib::TextHelper::measureText(const raylib::RlFont &font, const std::string &text)
{
    return measureText(font, text, font.getFontSize(), font.getTextSpacing());
}

Vector2f raylib::TextHelper::measureText(const RlFont &font, const std::string &text, float fontSize, float spacing)
{
    return raylib::VectorHelper::toVectorf(MeasureTextEx(font.getFont(), text.c_str(), fontSize, spacing));
}

int raylib::TextHelper::getGlyphIndex(const RlFont &font, int codepoint)
{
    return GetGlyphIndex(font.getFont(), codepoint);
}

GlyphInfo raylib::TextHelper::getGlyphInfo(const RlFont &font, int codepoint)
{
    return GetGlyphInfo(font.getFont(), codepoint);
}

Rectangle raylib::TextHelper::getGlyphAtlasRec(const RlFont &font, int codepoint)
{
    return GetGlyphAtlasRec(font.getFont(), codepoint);
}
