/*
** EPITECH PROJECT, 2022
** TextHelper.cpp
** FileHelper description:
** TextHelper.cpp
*/

#include "raylib/Text/TextHelper.hpp"

int raylib::helper::TextHelper::measureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

Vector2f raylib::helper::TextHelper::measureText(const raylib::text::RlFont &font, const std::string &text)
{
    return measureText(font, text, (float) font.getFontSize());
}

Vector2f raylib::helper::TextHelper::measureText(const raylib::text::RlFont &font, const std::string &text, float fontSize, float spacing)
{
    return raylib::helper::VectorHelper::toVectorf(MeasureTextEx(font.getFont(), text.c_str(), fontSize, spacing));
}

int raylib::helper::TextHelper::getGlyphIndex(const raylib::text::RlFont &font, int codepoint)
{
    return GetGlyphIndex(font.getFont(), codepoint);
}

GlyphInfo raylib::helper::TextHelper::getGlyphInfo(const raylib::text::RlFont &font, int codepoint)
{
    return GetGlyphInfo(font.getFont(), codepoint);
}

Rectangle raylib::helper::TextHelper::getGlyphAtlasRec(const raylib::text::RlFont &font, int codepoint)
{
    return GetGlyphAtlasRec(font.getFont(), codepoint);
}
