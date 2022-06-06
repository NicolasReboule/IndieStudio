/*
** EPITECH PROJECT, 2022
** TextHelper.cpp
** FileHelper description:
** TextHelper.cpp
*/

#include "raylib/Text/TextHelper.hpp"

// Text drawing functions

void raylib::TextHelper::drawText(const raylib::Text &text)
{
    DrawTextEx(text.getFont().getFont(), text.getText().c_str(), text.getPosition(), text.getFont().getFontSize(), text.getFont().getTextSpacing(), text.getColor());
}

void raylib::TextHelper::drawFPS(int posX, int posY)
{
    DrawFPS(posX, posY);
}

void raylib::TextHelper::drawText(const std::string &text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color);
}

void raylib::TextHelper::drawTextEx(Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
{
    DrawTextEx(font, text.c_str(), position, fontSize, spacing, tint);
}

void raylib::TextHelper::drawTextPro(Font font, const std::string &text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)
{
    DrawTextPro(font, text.c_str(), position, origin, rotation, fontSize, spacing, tint);
}

void raylib::TextHelper::drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
{
    DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

// Text misc. functions

int raylib::TextHelper::measureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

Vector2 raylib::TextHelper::measureTextEx(Font font, const std::string &text, float fontSize, float spacing)
{
    return MeasureTextEx(font, text.c_str(), fontSize, spacing);
}

int raylib::TextHelper::getGlyphIndex(Font font, int codepoint)
{
    return GetGlyphIndex(font, codepoint);
}

GlyphInfo raylib::TextHelper::getGlyphInfo(Font font, int codepoint)
{
    return GetGlyphInfo(font, codepoint);
}

Rectangle raylib::TextHelper::getGlyphAtlasRec(Font font, int codepoint)
{
    return GetGlyphAtlasRec(font, codepoint);
}
