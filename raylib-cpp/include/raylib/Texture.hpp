/*
** EPITECH PROJECT, 2022
** Texture.hpp
** File description:
** Texture.hpp
*/

#ifndef INDIESTUDIO_TEXTURE_HPP
#define INDIESTUDIO_TEXTURE_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class Texture {
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

        // Image drawing functions
        // NOTE: Image software-rendering functions (CPU)
        void imageClearBackground(Image *dst, Color color);                                                // Clear image background with given color
        void imageDrawPixel(Image *dst, int posX, int posY, Color color);                                  // Draw pixel within an image
        void imageDrawPixelV(Image *dst, Vector2 position, Color color);                                   // Draw pixel within an image (Vector version)
        void imageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color); // Draw line within an image
        void imageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color);                          // Draw line within an image (Vector version)
        void imageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color);               // Draw circle within an image
        void imageDrawCircleV(Image *dst, Vector2 center, int radius, Color color);                        // Draw circle within an image (Vector version)
        void imageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color);       // Draw rectangle within an image
        void imageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color);                 // Draw rectangle within an image (Vector version)
        void imageDrawRectangleRec(Image *dst, Rectangle rec, Color color);                                // Draw rectangle within an image
        void imageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color);                   // Draw rectangle lines within an image
        void imageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint);             // Draw a source image within a destination image (tint applied to source)
        void imageDrawText(Image *dst, const std::string &text, int posX, int posY, int fontSize, Color color);   // Draw text (using default font) within an image (destination)
        void imageDrawTextEx(Image *dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint); // Draw text (custom sprite font) within an image (destination)

        // Texture loading functions
        // NOTE: These functions require GPU access
        Texture2D loadTexture(const std::string &fileName);                                                       // Load texture from file into GPU memory (VRAM)
        Texture2D loadTextureFromImage(Image image);                                                       // Load texture from image data
        TextureCubemap loadTextureCubemap(Image image, int layout);                                        // Load cubemap from image, multiple image cubemap layouts supported
        RenderTexture2D loadRenderTexture(int width, int height);                                          // Load texture for rendering (framebuffer)
        void unloadTexture(Texture2D texture);                                                             // Unload texture from GPU memory (VRAM)
        void unloadRenderTexture(RenderTexture2D target);                                                  // Unload render texture from GPU memory (VRAM)
        void updateTexture(Texture2D texture, const void *pixels);                                         // Update GPU texture with new data
        void updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels);                       // Update GPU texture rectangle with new data

        // Texture configuration functions
        void genTextureMipmaps(Texture2D *texture);                                                        // Generate GPU mipmaps for a texture
        void setTextureFilter(Texture2D texture, int filter);                                              // Set texture scaling filter mode
        void setTextureWrap(Texture2D texture, int wrap);                                                  // Set texture wrapping mode

        // Texture drawing functions
        void drawTexture(Texture2D texture, int posX, int posY, Color tint);                               // Draw a Texture2D
        void drawTextureV(Texture2D texture, Vector2 position, Color tint);                                // Draw a Texture2D with position defined as Vector2
        void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint);  // Draw a Texture2D with extended parameters
        void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);            // Draw a part of a texture defined by a rectangle
        void drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint);  // Draw texture quad with tiling and offset parameters
        void drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint);      // Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
        void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint);           // Draw a part of a texture defined by a rectangle with 'pro' parameters
        void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint);   // Draws a texture (or part of it) that stretches or shrinks nicely
        void drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint);      // Draw a textured polygon

        // Color/pixel related functions
        Color fade(Color color, float alpha);                                                              // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        int colorToInt(Color color);                                                                       // Returns hexadecimal value for a Color
        Vector4 colorNormalize(Color color);                                                               // Returns Color normalized as float [0..1]
        Color colorFromNormalized(Vector4 normalized);                                                     // Returns Color from normalized values [0..1]
        Vector3 colorToHSV(Color color);                                                                   // Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
        Color colorFromHSV(float hue, float saturation, float value);                                      // Returns a Color from HSV values, hue [0..360], saturation/value [0..1]
        Color colorAlpha(Color color, float alpha);                                                        // Returns color with alpha applied, alpha goes from 0.0f to 1.0f
        Color colorAlphaBlend(Color dst, Color src, Color tint);                                           // Returns src alpha-blended into dst color with tint
        Color getColor(unsigned int hexValue);                                                             // Get Color structure from hexadecimal value
        Color getPixelColor(void *srcPtr, int format);                                                     // Get Color from a source pixel pointer of certain format
        void setPixelColor(void *dstPtr, Color color, int format);                                         // Set color formatted into destination pixel pointer
        int getPixelDataSize(int width, int height, int format);                                           // Get pixel data size in bytes for certain format

    private:
    };
}

#endif //INDIESTUDIO_TEXTURE_HPP
