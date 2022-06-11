/*
** EPITECH PROJECT, 2022
** ImageHelper.hpp
** FileHelper description:
** ImageHelper.hpp
*/

#ifndef INDIESTUDIO_IMAGEHELPER_HPP
#define INDIESTUDIO_IMAGEHELPER_HPP

#include "raylib/Color/RlColor.hpp"
#include "raylib/Math.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief Image drawing functions
     * NOTE: Image software-rendering functions (CPU)
     */
    class ImageHelper {
    public:
        static void imageClearBackground(Image *dst, RlColor color);                                                // Clear image background with given color
        static void imageDrawPixel(Image *dst, int posX, int posY, RlColor color);                                  // DrawHelper pixel within an image
        static void imageDrawPixelV(Image *dst, Vector2f position, RlColor color);                                   // DrawHelper pixel within an image (Vector version)
        static void imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, RlColor color); // DrawHelper line within an image
        static void imageDrawLineV(Image *dst, Vector2f start, Vector2f end, RlColor color);                          // DrawHelper line within an image (Vector version)
        static void imageDrawCircle(Image *dst, int centerX, int centerY, int radius, RlColor color);               // DrawHelper circle within an image
        static void imageDrawCircleV(Image *dst, Vector2f center, int radius, RlColor color);                        // DrawHelper circle within an image (Vector version)
        static void imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, RlColor color);       // DrawHelper rectangle within an image
        static void imageDrawRectangleV(Image *dst, Vector2f position, Vector2f size, RlColor color);                 // DrawHelper rectangle within an image (Vector version)
        static void imageDrawRectangleRec(Image *dst, Rectangle rec, RlColor color);                                // DrawHelper rectangle within an image
        static void imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, RlColor color);                   // DrawHelper rectangle lines within an image
        static void imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, RlColor tint);             // DrawHelper a source image within a destination image (tint applied to source)
        static void imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, RlColor color);   // DrawHelper text (using default font) within an image (destination)
        static void imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2f position, float fontSize, float spacing, RlColor tint); // DrawHelper text (custom sprite font) within an image (destination)

        // Image manipulation functions
        static Image imageCopy(Image image);                                                                      // Create an image duplicate (useful for transformations)
        static Image imageFromImage(Image image, Rectangle rec);                                                  // Create an image from another image piece
        static Image imageText(const std::string &text, int fontSize, RlColor color);                                      // Create an image from text (default font)
        static Image imageTextEx(Font font, const std::string &text, float fontSize, float spacing, RlColor tint);         // Create an image from text (custom sprite font)
        static void imageFormat(Image *image, int newFormat);                                                     // Convert image data to desired format
        static void imageToPOT(Image *image, RlColor fill);                                                         // Convert image to POT (power-of-two)
        static void imageCrop(Image *image, Rectangle crop);                                                      // Crop an image to a defined rectangle
        static void imageAlphaCrop(Image *image, float threshold);                                                // Crop image depending on alpha value
        static void imageAlphaClear(Image *image, RlColor color, float threshold);                                  // Clear alpha channel to desired color
        static void imageAlphaMask(Image *image, Image alphaMask);                                                // Apply alpha mask to image
        static void imageAlphaPremultiply(Image *image);                                                          // Premultiply alpha channel
        static void imageResize(Image *image, int newWidth, int newHeight);                                       // Resize image (Bicubic scaling algorithm)
        static void imageResizeNN(Image *image, int newWidth,int newHeight);                                      // Resize image (Nearest-Neighbor scaling algorithm)
        static void imageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, RlColor fill);  // Resize canvas and fill with color
        static void imageMipmaps(Image *image);                                                                   // Generate all mipmap levels for a provided image
        static void imageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp);                            // Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
        static void imageFlipVertical(Image *image);                                                              // Flip image vertically
        static void imageFlipHorizontal(Image *image);                                                            // Flip image horizontally
        static void imageRotateCW(Image *image);                                                                  // Rotate image clockwise 90deg
        static void imageRotateCCW(Image *image);                                                                 // Rotate image counter-clockwise 90deg
        static void imageColorTint(Image *image, RlColor color);                                                    // Modify image color: tint
        static void imageColorInvert(Image *image);                                                               // Modify image color: invert
        static void imageColorGrayscale(Image *image);                                                            // Modify image color: grayscale
        static void imageColorContrast(Image *image, float contrast);                                             // Modify image color: contrast (-100 to 100)
        static void imageColorBrightness(Image *image, int brightness);                                           // Modify image color: brightness (-255 to 255)
        static void imageColorReplace(Image *image, RlColor color, RlColor replace);                                  // Modify image color: replace color
        static Color *loadImageColors(Image image);                                                               // Load color data from image as a Color array (RGBA - 32bit)
        static Color *loadImagePalette(Image image, int maxPaletteSize, int *colorsCount);                        // Load colors palette from image as a Color array (RGBA - 32bit)
        static void unloadImageColors(Color *colors);                                                             // Unload color data loaded with LoadImageColors()
        static void unloadImagePalette(Color *colors);                                                            // Unload colors palette loaded with LoadImagePalette()
        static Rectangle getImageAlphaBorder(Image image, float threshold);                                       // Get image alpha border rectangle
        static Color getImageColor(Image image, int x, int y);                                                    // Get image pixel color at (x, y) position

    private:
    };
}

#endif //INDIESTUDIO_IMAGEHELPER_HPP
