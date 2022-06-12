/*
** EPITECH PROJECT, 2022
** DrawTextHelper.cpp
** File description:
** DrawTextHelper.cpp
*/

#include "raylib/Draw/DrawTextHelper.hpp"

void raylib::DrawTextHelper::drawFps(int posX, int posY)
{
    DrawFPS(posX, posY);
}

void raylib::DrawTextHelper::drawFps(const Vector2f &pos)
{
    DrawFPS((int) pos.x, (int) pos.y);
}

void raylib::DrawTextHelper::drawText(const std::string &text, int posX, int posY, int fontSize, const RlColor &color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color.getColor());
}

void raylib::DrawTextHelper::drawTextEx(const RlFont &font, const std::string &text, const Vector2f &position,
                                        float fontSize, float spacing, const RlColor &tint)
{
    DrawTextEx(font.getFont(), text.c_str(), raylib::VectorHelper::toRaylibVector(position), fontSize, spacing, tint.getColor());
}

void raylib::DrawTextHelper::drawText(const raylib::RlText &text, const Vector2f &position, const RlColor &color)
{
    drawTextEx(text.getFont(), text.getText(), position, text.getFont().getFontSize(), text.getFont().getTextSpacing(), color);
}

void raylib::DrawTextHelper::drawText(const raylib::RlText &text, float posX, float posY, const RlColor &color)
{
    drawTextEx(text.getFont(), text.getText(), {posX, posY}, text.getFont().getFontSize(), text.getFont().getTextSpacing(), color);
}

void raylib::DrawTextHelper::drawText(const raylib::RlFont &font, const std::string &text, const Vector2f &position,
                                      const RlColor &color)
{
    drawTextEx(font, text, position, font.getFontSize(), font.getTextSpacing(), color);
}

void raylib::DrawTextHelper::drawText(const RlFont &font, const std::string &text, const Vector2f &position,
                                      const Vector2f &origin, float rotation, float fontSize, float spacing,
                                      const RlColor &tint)
{
    DrawTextPro(font.getFont(), text.c_str(), raylib::VectorHelper::toRaylibVector(position),
                raylib::VectorHelper::toRaylibVector(origin), rotation, fontSize, spacing, tint.getColor());
}

void raylib::DrawTextHelper::drawText(const RlFont &font, int codepoint, const Vector2f &position, float fontSize,
                                      const RlColor &tint)
{
    DrawTextCodepoint(font.getFont(), codepoint, raylib::VectorHelper::toRaylibVector(position), fontSize, tint.getColor());
}
