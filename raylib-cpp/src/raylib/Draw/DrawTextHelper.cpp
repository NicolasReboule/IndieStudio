/*
** EPITECH PROJECT, 2022
** DrawTextHelper.cpp
** File description:
** DrawTextHelper.cpp
*/

#include "raylib/Draw/DrawTextHelper.hpp"

void raylib::DrawTextHelper::drawFps(const Vector2f &pos, const int &fontSize)
{
    drawFps(pos.x, pos.y, fontSize);
}

void raylib::DrawTextHelper::drawFps(const float &posX, const float &posY, const int &fontSize)
{
    RlColor color = RlColor::Lime; // good fps
    int fps = GetFPS();
    if (fps < 30 && fps >= 15)
        color = RlColor::Orange;  // warning FPS
    else if (fps < 15)
        color = RlColor::Red; // bad FPS

    drawText(std::to_string(fps) + " FPS", posX, posY, fontSize, color);
}

void raylib::DrawTextHelper::drawFps(const Vector2f &pos)
{
    DrawFPS((int) pos.x, (int) pos.y);
}

void raylib::DrawTextHelper::drawFps(const int &posX, const int &posY)
{
    DrawFPS(posX, posY);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const Vector2f &pos, const int &fontSize, const RlColor &color)
{
    drawText(text, pos.x, pos.y, fontSize, color);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const float &posX, const float &posY, const int &fontSize, const RlColor &color)
{
    DrawText(text.c_str(), (int) posX, (int) posY, fontSize, color.getColor());
}

void raylib::DrawTextHelper::drawText(const std::string &text, const raylib::RlFont &font, const Vector2f &position, const RlColor &color)
{
    drawText(text, font, position, (float) font.getFontSize(), color, 1);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const raylib::RlFont &font, const Vector2f &position,
    const float &fontSize, const RlColor &tint, const float &spacing)
{
    drawText(text, font, position, {0, 0}, 0, fontSize, tint, spacing);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const raylib::RlFont &font, const Vector2f &position,
    const float &rotation, const float &fontSize, const RlColor &tint, const float &spacing)
{
    drawText(text, font, position, {0, 0}, rotation, fontSize, tint, spacing);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const raylib::RlFont &font, const Vector2f &position,
    const Vector2f &origin, const float &fontSize, const RlColor &tint, const float &spacing)
{
    drawText(text, font, position, origin, 0, fontSize, tint, spacing);
}

void raylib::DrawTextHelper::drawText(const std::string &text, const raylib::RlFont &font, const Vector2f &position,
    const Vector2f &origin, const float &rotation, const float &fontSize, const RlColor &tint, const float &spacing)
{
    ::Vector2 pos = raylib::VectorHelper::toRaylibVector(position);
    ::Vector2 ori = raylib::VectorHelper::toRaylibVector(origin);
    DrawTextPro(font.getFont(), text.c_str(), pos, ori, rotation, fontSize, spacing, tint.getColor());
}

void raylib::DrawTextHelper::drawCenteredText(const std::string &text, const raylib::RlFont &font, const Vector2f &position, const RlColor &color, const float &spacing)
{
    drawCenteredText(text, font, position, (float) font.getFontSize(), color, spacing);
}

void raylib::DrawTextHelper::drawCenteredText(const std::string &text, const raylib::RlFont &font, const Vector2f &position,
    const float &fontSize, const RlColor &color, const float &spacing)
{
    ::Vector2 textSize = MeasureTextEx(font.getFont(), text.c_str(), fontSize, spacing);
    const float posX = position.x - (textSize.x / 2.0f);

    drawText(text, font, {posX, position.y}, fontSize, color, spacing); //NOTE: potential use of origin
}

void raylib::DrawTextHelper::drawCenteredText(const raylib::RlText &text)
{
    drawCenteredText(text.getText(), *text.getFont(), text.getPosition(), text.getFontSize(), text.getColor(), text.getTextSpacing());
}

void raylib::DrawTextHelper::drawTextUsingCodepoint(const RlFont &font, const int &codepoint, const Vector2f &position, float fontSize, const RlColor &tint)
{
    ::Vector2 pos = raylib::VectorHelper::toRaylibVector(position);
    DrawTextCodepoint(font.getFont(), codepoint, pos, fontSize, tint.getColor());
}

void raylib::DrawTextHelper::drawText(const raylib::RlText &text, const Vector2f &position, const RlColor &color)
{
    drawText(text.getText(), *text.getFont(), position, text.getOrigin(), text.getRotation(), text.getFontSize(), color, text.getTextSpacing());
}

void raylib::DrawTextHelper::drawText(const raylib::RlText &text, const float &posX, const float &posY, const RlColor &color)
{
    drawText(text.getText(), *text.getFont(), {posX, posY}, text.getOrigin(), text.getRotation(), text.getFontSize(), color, text.getTextSpacing());
}

void raylib::DrawTextHelper::drawText(const raylib::RlText &text)
{
    drawText(text.getText(), *text.getFont(), text.getPosition(), text.getOrigin(), text.getRotation(), text.getFontSize(), text.getColor(), text.getTextSpacing());
}
