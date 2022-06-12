/*
** EPITECH PROJECT, 2022
** RlImage.hpp
** FileHelper description:
** RlImage.hpp
*/

#ifndef INDIESTUDIO_RLIMAGE_HPP
#define INDIESTUDIO_RLIMAGE_HPP

#include "raylib/Color/RlColor.hpp"
#include <raylib.h>
#include <vector>
#include <string>

namespace raylib {
    /**
     * @brief Image class
     */
    class RlImage {
    public:
        /**
         * @brief Construct a new RlImage object
         * @param image the image
         */
        explicit RlImage(const Image &image);

        /**
         * @brief Construct a new RlImage object
         * @param image the image
         * @param frameCount the frame count
         */
        explicit RlImage(const Image &image, int frameCount);

        /**
         * @brief Destroy the RlImage object
         */
        ~RlImage();

        /**
         * @brief Create an image duplicate (useful for transformations)
         * @return the copy
         */
        RlImage copy();

        /**
         * @brief Export image data to file, returns true on success
         * @param fileName the file name
         * @return true if it succeeds, false otherwise
         */
        bool save(const std::string &fileName);

        /**
         * @brief Export image as code file defining an array of bytes, returns true on success
         * @param fileName the file name
         * @return true if it succeeds, false otherwise
         */
        bool saveAsCode(const std::string &fileName);

        /**
         * @brief Create an image from another image piece
         * @param rec the rec
         * @return the image
         */
        RlImage subImage(const Rectangle &rec);

        /**
         * @brief Convert image data to desired format
         * @param newFormat the new format
         */
        void changeFormat(int newFormat);

        /**
         * @brief Convert image to POT (power-of-two)
         * @param fill the fill
         */
        void toPot(const RlColor &fill);

        /**
         * @brief Crop an image to a defined rectangle
         * @param crop the crop
         */
        void crop(const Rectangle &crop);

        /**
         * @brief Crop image depending on alpha value
         * @param threshold the threshold
         */
        void alphaCrop(float threshold);

        /**
         * @brief Clear alpha channel to desired color
         * @param color the color
         * @param threshold the threshold
         */
        void alphaClear(const RlColor &color, float threshold);

        /**
         * @brief Apply alpha mask to image
         * @param alphaMask the alpha mask
         */
        void alphaMask(const RlImage &alphaMask);

        /**
         * @brief Premultiply alpha channel
         */
        void alphaPremultiply();

        /**
         * @brief Resize image (Bicubic scaling algorithm)
         * @param newWidth the new width
         * @param newHeight the new height
         */
        void resize(int newWidth, int newHeight);

        /**
         * @brief Resize image (Nearest-Neighbor scaling algorithm)
         * @param newWidth the new width
         * @param newHeight the new height
         */
        void resizeNearesetNeighbor(int newWidth,int newHeight);

        /**
         * @brief Resize canvas and fill with color
         * @param newWidth the new width
         * @param newHeight the new height
         * @param offsetX the offset x
         * @param offsetY the offset y
         * @param fill the color to fill
         */
        void resizeCanvas(int newWidth, int newHeight, int offsetX, int offsetY, const RlColor &fill);

        /**
         * @brief Generate all mipmap levels for a provided image
         */
        void mipmaps();

        /**
         * @brief Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
         * @param rBpp the r bpp
         * @param gBpp the g bpp
         * @param bBpp the b bpp
         * @param aBpp the a bpp
         */
        void dither(int rBpp, int gBpp, int bBpp, int aBpp);

        /**
         * @brief Flip image vertically
         */
        void flipVertical();

        /**
         * @brief Flip image horizontally
         */
        void flipHorizontal();

        /**
         * @brief Rotate image clockwise 90deg
         */
        void rotateClockwise();

        /**
         * @brief Rotate image counter-clockwise 90deg
         */
        void rotateCounterClockwise();

        /**
         * @brief Modify image color: tint
         * @param color the color
         */
        void colorTint(const RlColor &color);

        /**
         * @brief Modify image color: invert
         */
        void colorInvert();

        /**
         * @brief Modify image color: grayscale
         */
        void colorGrayscale();

        /**
         * @brief Modify image color: contrast
         * @param contrast the contrast (-100 to 100)
         */
        void colorContrast(float contrast);

        /**
         * @brief Modify image color: brightness
         * @param brightness the brightness (-255 to 255)
         */
        void colorBrightness(int brightness);

        /**
         * @brief Modify image color: replace color
         * @param color the color to replace
         * @param replace the replacement
         */
        void colorReplace(const RlColor &color, const RlColor &replace);

        /**
         * @brief Load color data from image as a Color array (RGBA - 32bit)
         * @return the color array
         */
        std::vector<RlColor> loadImageColors();

        /**
         * @brief Load colors palette from image as a Color array (RGBA - 32bit)
         * @param maxPaletteSize the max palette size
         * @param colorsCount the colors count
         * @return the color array
         */
        std::vector<RlColor> loadImagePalette(int maxPaletteSize);

        /**
         * @brief Get image alpha border rectangle
         * @param threshold the threshold
         * @return the rectangle
         */
        Rectangle getImageAlphaBorder(float threshold);

        /**
         * @brief Get image pixel color at (x, y) position
         * @param x the x
         * @param y the y
         * @return the color
         */
        RlColor getImageColor(int x, int y);

        /**
         * @brief Get the image (const)
         * @return the image
         */
        const Image &getImage() const;

        /**
         * @brief Get the mutable image
         * @return the image
         */
        Image &getImage();

        /**
         * @brief Get the frame count
         * @return the frame count
         */
        const int &getFrameCount() const;

    private:
        Image _image; /**< The raylib image */
        int _frameCount; /**< The frame count of the image */
    };
}

#endif //INDIESTUDIO_RLIMAGE_HPP
