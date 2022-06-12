/*
** EPITECH PROJECT, 2022
** TextHelper.cpp
** FileHelper description:
** TextHelper.cpp
*/

#include "raylib/Text/TextHelper.hpp"

// RlText drawing functions

void raylib::TextHelper::drawText(const raylib::RlText &text)
{
    DrawTextEx(text.getFont().getFont(), text.getText().c_str(),
               raylib::VectorHelper::toRaylibVector(text.getPosition()), text.getFont().getFontSize(), text.getFont().getTextSpacing(), text.getColor().getColor());
}

void raylib::TextHelper::drawFPS(int posX, int posY)
{
    DrawFPS(posX, posY);
}

void raylib::TextHelper::drawText(const std::string &text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color);
}

void raylib::TextHelper::drawTextEx(Font font, const std::string &text, Vector2f position, float fontSize, float spacing, Color tint)
{
    DrawTextEx(font, text.c_str(),
               raylib::VectorHelper::toRaylibVector(position), fontSize, spacing, tint);
}

void raylib::TextHelper::drawTextPro(Font font, const std::string &text, Vector2f position, Vector2f origin, float rotation, float fontSize, float spacing, Color tint)
{
    DrawTextPro(font, text.c_str(),
                raylib::VectorHelper::toRaylibVector(position),
                raylib::VectorHelper::toRaylibVector(origin), rotation, fontSize, spacing, tint);
}

void raylib::TextHelper::drawTextCodepoint(Font font, int codepoint, Vector2f position, float fontSize, Color tint)
{
    DrawTextCodepoint(font, codepoint,
                      raylib::VectorHelper::toRaylibVector(position), fontSize, tint);
}

// RlText misc. functions

int raylib::TextHelper::measureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

Vector2f raylib::TextHelper::measureTextEx(Font font, const std::string &text, float fontSize, float spacing)
{
    return raylib::VectorHelper::toVectorf(MeasureTextEx(font, text.c_str(), fontSize, spacing));
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
