/*
** EPITECH PROJECT, 2022
** CompressHelper.cpp
** File description:
** CompressHelper.cpp
*/

#include "raylib/Core/CompressHelper.hpp"

// Compression/Encoding functionality

unsigned char *raylib::CompressHelper::compressData(unsigned char *data, int dataLength, int *compDataLength)
{
    return CompressData(data, dataLength, compDataLength);
}

unsigned char *raylib::CompressHelper::decompressData(unsigned char *compData, int compDataLength, int *dataLength)
{
    return DecompressData(compData, compDataLength, dataLength);
}

std::string raylib::CompressHelper::encodeDataBase64(unsigned char *data, int dataLength, int *outputLength)
{
    return std::string(EncodeDataBase64(data, dataLength, outputLength));
}

unsigned char *raylib::CompressHelper::decodeDataBase64(unsigned char *data, int *outputLength)
{
    return DecodeDataBase64(data, outputLength);
}
