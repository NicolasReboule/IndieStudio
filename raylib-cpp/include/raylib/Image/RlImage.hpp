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
        RlImage();
        explicit RlImage(const Image &image);
        ~RlImage();
        void load(const std::string &fileName);                                                             // Load image from file into CPU memory (RAM)
        void loadRaw(const std::string &fileName, int width, int height, int format, int headerSize);       // Load image from RAW file data
        void loadAnim(const std::string &fileName, int *frames);                                            // Load image sequence from file (frames appended to image.data)
        void loadFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize);      // Load image from memory buffer
        void loadFromTexture(Texture2D texture);                                                     // Load image from GPU texture data
        void loadFromScreen();                                                                   // Load image from screen buffer and (screenshot)
        bool exportImage(Image image, const std::string &fileName);                                               // Export image data to file, returns true on success
        bool exportAsCode(Image image, const std::string &fileName);                                         // Export image as code file defining an array of bytes, returns true on success

        const Image &getImage() const;
    private:
        Image _image;
    };
}

#endif //INDIESTUDIO_RLIMAGE_HPP
