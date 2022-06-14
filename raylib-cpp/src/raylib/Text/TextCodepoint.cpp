/*
** EPITECH PROJECT, 2022
** TextCodepoint.cpp
** FileHelper description:
** TextCodepoint.cpp
*/

#include "raylib/Text/TextCodepoint.hpp"

raylib::TextCodepoint::TextCodepoint(const std::string &text)
{
    _codepointsCount = 0;
    _codepoints = LoadCodepoints(text.c_str(), &_codepointsCount);
}

raylib::TextCodepoint::~TextCodepoint()
{
    if (_codepoints)
        UnloadCodepoints(_codepoints);
    _codepoints = nullptr;
}

const int *raylib::TextCodepoint::getCodepoints() const
{
    return this->_codepoints;
}

const int &raylib::TextCodepoint::getCodepointsCount() const
{
    return this->_codepointsCount;
}

std::string raylib::TextCodepoint::codePointToUTF8(const int &codePoint, int &byteSize)
{
    return CodepointToUTF8(codePoint, &byteSize);
}

std::string raylib::TextCodepoint::textCodepointsToUTF8(const int &bytesLength)
{
    std::string result;
    for (int i = 0, bytes = 0; i < bytesLength; i++)
        result += codePointToUTF8(this->_codepoints[i], bytes);
    return result;
}
