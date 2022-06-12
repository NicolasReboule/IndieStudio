/*
** EPITECH PROJECT, 2022
** Codepoint.cpp
** FileHelper description:
** Codepoint.cpp
*/

#include "raylib/Text/Codepoint.hpp"

// RlText codepoints management functions (unicode characters)

int *raylib::Codepoint::loadCodepoints(const std::string &text, int *count)
{
    return LoadCodepoints(text.c_str(), count);
}

void raylib::Codepoint::unloadCodepoints(int *codepoints)
{
    UnloadCodepoints(codepoints);
}

int raylib::Codepoint::getCodepointCount(const std::string &text)
{
    return GetCodepointCount(text.c_str());
}

int raylib::Codepoint::getCodepoint(const std::string &text, int *bytesProcessed)
{
    return GetCodepoint(text.c_str(), bytesProcessed);
}

std::string raylib::Codepoint::codepointToUTF8(int codepoint, int *byteSize)
{
    return std::string(CodepointToUTF8(codepoint, byteSize));
}

std::string raylib::Codepoint::textCodepointsToUTF8(int *codepoints, int length)
{
    return std::string(TextCodepointsToUTF8(codepoints, length));
}
