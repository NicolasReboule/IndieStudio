/*
** EPITECH PROJECT, 2022
** TextCodepoint.cpp
** FileHelper description:
** TextCodepoint.cpp
*/

#include "raylib/Text/TextCodepoint.hpp"

raylib::text::TextCodepoint::TextCodepoint(const std::string &text)
{
    int codePointCount = 0;
    int *codepoints = LoadCodepoints(text.c_str(), &codePointCount);
    for (int i = 0; i < codePointCount; i++)
        this->_codepoints.emplace_back(codepoints[i]);
    UnloadCodepoints(codepoints);
}

const std::vector<int> &raylib::text::TextCodepoint::getCodepoints() const
{
    return this->_codepoints;
}

int raylib::text::TextCodepoint::getCodepointsCount() const
{
    return (int) this->_codepoints.size();
}

std::string raylib::text::TextCodepoint::codePointToUTF8(const int &codePoint, int &byteSize)
{
    return CodepointToUTF8(codePoint, &byteSize);
}

std::string raylib::text::TextCodepoint::toUTF8String(const int &bytesLength)
{
    std::string result;
    for (int i = 0, bytes = 0; i < bytesLength; i++)
        result += codePointToUTF8(this->_codepoints[i], bytes);
    return result;
}
