/*
** EPITECH PROJECT, 2022
** CompressHelper.hpp
** File description:
** CompressHelper.hpp
*/

#ifndef INDIESTUDIO_COMPRESSHELPER_HPP
#define INDIESTUDIO_COMPRESSHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class CompressHelper {
    public:
        // Compression/Encoding functionality
        static unsigned char *compressData(unsigned char *data, int dataLength, int *compDataLength);        // Compress data (DEFLATE algorithm)
        static unsigned char *decompressData(unsigned char *compData, int compDataLength, int *dataLength);  // Decompress data (DEFLATE algorithm)
        static std::string encodeDataBase64(unsigned char *data, int dataLength,int *outputLength);         // Encode data to Base64 string
        static unsigned char *decodeDataBase64(unsigned char *data, int *outputLength);                      // Decode Base64 string data
    private:
    };
}

#endif //INDIESTUDIO_COMPRESSHELPER_HPP
