/*
** EPITECH PROJECT, 2022
** Text.cpp
** File description:
** Text.cpp
*/

#include "raylib/Text/Text.hpp"

// Text drawing functions

void raylib::Text::drawFPS(int posX, int posY)
{
    DrawFPS(posX, posY);
}

void raylib::Text::drawText(const std::string &text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color);
}

void raylib::Text::drawTextEx(Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
{
    DrawTextEx(font, text.c_str(), position, fontSize, spacing, tint);
}

void raylib::Text::drawTextPro(Font font, const std::string &text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)
{
    DrawTextPro(font, text.c_str(), position, origin, rotation, fontSize, spacing, tint);
}

void raylib::Text::drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
{
    DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

// Text misc. functions

int raylib::Text::measureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

Vector2 raylib::Text::measureTextEx(Font font, const std::string &text, float fontSize, float spacing)
{
    return MeasureTextEx(font, text.c_str(), fontSize, spacing);
}

int raylib::Text::getGlyphIndex(Font font, int codepoint)
{
    return GetGlyphIndex(font, codepoint);
}

GlyphInfo raylib::Text::getGlyphInfo(Font font, int codepoint)
{
    return GetGlyphInfo(font, codepoint);
}

Rectangle raylib::Text::getGlyphAtlasRec(Font font, int codepoint)
{
    return GetGlyphAtlasRec(font, codepoint);
}

// Text codepoints management functions (unicode characters)

int *raylib::Text::loadCodepoints(const std::string &text, int *count)
{
    return LoadCodepoints(text.c_str(), count);
}

void raylib::Text::unloadCodepoints(int *codepoints)
{
    UnloadCodepoints(codepoints);
}

int raylib::Text::getCodepointCount(const std::string &text)
{
    return GetCodepointCount(text.c_str());
}

int raylib::Text::getCodepoint(const std::string &text, int *bytesProcessed)
{
    return GetCodepoint(text.c_str(), bytesProcessed);
}

std::string raylib::Text::codepointToUTF8(int codepoint, int *byteSize)
{
    return std::string(CodepointToUTF8(codepoint, byteSize));
}

std::string raylib::Text::textCodepointsToUTF8(int *codepoints, int length)
{
    return std::string(TextCodepointsToUTF8(codepoints, length));
}

// Text strings management functions (no utf8 strings, only byte chars)

int raylib::Text::textCopy(char *dst, const std::string &src)
{
    return TextCopy(dst, src.c_str());
}

bool raylib::Text::textIsEqual(const std::string &text1, const std::string &text2)
{
    return TextIsEqual(text1.c_str(), text2.c_str());
}

unsigned int raylib::Text::textLength(const std::string &text)
{
    return TextLength(text.c_str());
}

//std::string raylib::Text::textFormat(const std::string &text, ...)
//{
//    return std::string(TextFormat());
//}

std::string raylib::Text::textSubtext(const std::string &text, int position, int length)
{
    return std::string(TextSubtext(text.c_str(), position, length));
}

std::string raylib::Text::textReplace(char *text, const std::string &replace, const std::string &by)
{
    return std::string(TextReplace(text, replace.c_str(), by.c_str()));
}

std::string raylib::Text::textInsert(const std::string &text, const std::string &insert, int position)
{
    return std::string(TextInsert(text.c_str(), insert.c_str(), position));
}

std::string raylib::Text::textJoin(const char **textList, int count, const std::string &delimiter)
{
    return std::string (TextJoin(textList, count, delimiter.c_str()));
}

const char **raylib::Text::textSplit(const std::string &text, char delimiter, int *count)
{
    return TextSplit(text.c_str(), delimiter, count);
}

void raylib::Text::textAppend(char *text, const std::string &append, int *position)
{
    TextAppend(text, append.c_str(), position);
}

int raylib::Text::textFindIndex(const std::string &text, const std::string &find)
{
    return TextFindIndex(text.c_str(), find.c_str());
}

std::string raylib::Text::textToUpper(const std::string &text)
{
    return std::string(TextToUpper(text.c_str()));
}

std::string raylib::Text::textToLower(const std::string &text)
{
    return std::string(TextToLower(text.c_str()));
}

std::string raylib::Text::textToPascal(const std::string &text)
{
    return std::string(TextToPascal(text.c_str()));
}

int raylib::Text::TextToInteger(const std::string &text)
{
    return TextToInteger(text.c_str());
}
