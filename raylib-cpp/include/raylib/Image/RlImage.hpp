/*
** EPITECH PROJECT, 2022
** RlImage.hpp
** FileHelper description:
** RlImage.hpp
*/

#ifndef INDIESTUDIO_RLIMAGE_HPP
#define INDIESTUDIO_RLIMAGE_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlImage {
    public:
        // Image loading functions
        // NOTE: These functions do not require GPU access
        Image loadImage(const std::string &fileName);                                                             // Load image from file into CPU memory (RAM)
        Image loadImageRaw(const std::string &fileName, int width, int height, int format, int headerSize);       // Load image from RAW file data
        Image loadImageAnim(const std::string &fileName, int *frames);                                            // Load image sequence from file (frames appended to image.data)
        Image loadImageFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize);      // Load image from memory buffer
        Image loadImageFromTexture(Texture2D texture);                                                     // Load image from GPU texture data
        Image loadImageFromScreen();                                                                   // Load image from screen buffer and (screenshot)
        void unloadImage(Image image);                                                                     // Unload image from CPU memory (RAM)
        bool exportImage(Image image, const std::string &fileName);                                               // Export image data to file, returns true on success
        bool exportImageAsCode(Image image, const std::string &fileName);                                         // Export image as code file defining an array of bytes, returns true on success
    private:
    };
}

#endif //INDIESTUDIO_RLIMAGE_HPP
