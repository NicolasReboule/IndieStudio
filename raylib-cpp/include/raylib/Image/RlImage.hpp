/*
** EPITECH PROJECT, 2022
** RlImage.hpp
** File description:
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

        // Image generation functions
        Image genImageColor(int width, int height, Color color);                                           // Generate image: plain color
        Image genImageGradientV(int width, int height, Color top, Color bottom);                           // Generate image: vertical gradient
        Image genImageGradientH(int width, int height, Color left, Color right);                           // Generate image: horizontal gradient
        Image genImageGradientRadial(int width, int height, float density, Color inner, Color outer);      // Generate image: radial gradient
        Image genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2);    // Generate image: checked
        Image genImageWhiteNoise(int width, int height, float factor);                                     // Generate image: white noise
        Image genImageCellular(int width, int height, int tileSize);                                       // Generate image: cellular algorithm. Bigger tileSize means bigger cells

        // Image manipulation functions
        Image imageCopy(Image image);                                                                      // Create an image duplicate (useful for transformations)
        Image imageFromImage(Image image, Rectangle rec);                                                  // Create an image from another image piece
        Image imageText(const std::string &text, int fontSize, Color color);                                      // Create an image from text (default font)
        Image imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint);         // Create an image from text (custom sprite font)
        void imageFormat(Image *image, int newFormat);                                                     // Convert image data to desired format
        void imageToPOT(Image *image, Color fill);                                                         // Convert image to POT (power-of-two)
        void imageCrop(Image *image, Rectangle crop);                                                      // Crop an image to a defined rectangle
        void imageAlphaCrop(Image *image, float threshold);                                                // Crop image depending on alpha value
        void imageAlphaClear(Image *image, Color color, float threshold);                                  // Clear alpha channel to desired color
        void imageAlphaMask(Image *image, Image alphaMask);                                                // Apply alpha mask to image
        void imageAlphaPremultiply(Image *image);                                                          // Premultiply alpha channel
        void imageResize(Image *image, int newWidth, int newHeight);                                       // Resize image (Bicubic scaling algorithm)
        void imageResizeNN(Image *image, int newWidth,int newHeight);                                      // Resize image (Nearest-Neighbor scaling algorithm)
        void imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill);  // Resize canvas and fill with color
        void imageMipmaps(Image *image);                                                                   // Generate all mipmap levels for a provided image
        void imageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp);                            // Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
        void imageFlipVertical(Image *image);                                                              // Flip image vertically
        void imageFlipHorizontal(Image *image);                                                            // Flip image horizontally
        void imageRotateCW(Image *image);                                                                  // Rotate image clockwise 90deg
        void imageRotateCCW(Image *image);                                                                 // Rotate image counter-clockwise 90deg
        void imageColorTint(Image *image, Color color);                                                    // Modify image color: tint
        void imageColorInvert(Image *image);                                                               // Modify image color: invert
        void imageColorGrayscale(Image *image);                                                            // Modify image color: grayscale
        void imageColorContrast(Image *image, float contrast);                                             // Modify image color: contrast (-100 to 100)
        void imageColorBrightness(Image *image, int brightness);                                           // Modify image color: brightness (-255 to 255)
        void imageColorReplace(Image *image, Color color, Color replace);                                  // Modify image color: replace color
        Color *loadImageColors(Image image);                                                               // Load color data from image as a Color array (RGBA - 32bit)
        Color *loadImagePalette(Image image, int maxPaletteSize, int *colorsCount);                        // Load colors palette from image as a Color array (RGBA - 32bit)
        void unloadImageColors(Color *colors);                                                             // Unload color data loaded with LoadImageColors()
        void unloadImagePalette(Color *colors);                                                            // Unload colors palette loaded with LoadImagePalette()
        Rectangle getImageAlphaBorder(Image image, float threshold);                                       // Get image alpha border rectangle
        Color getImageColor(Image image, int x, int y);                                                    // Get image pixel color at (x, y) position
    private:
    };
}

#endif //INDIESTUDIO_RLIMAGE_HPP
