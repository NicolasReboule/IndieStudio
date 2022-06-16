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
#include "RlImage.hpp"
#include "raylib/Text/RlFont.hpp"
#include <raylib.h>
#include <string>

namespace raylib::helper {
    /**
     * @brief Helper class for image manipulation
     * NOTE: Image software-rendering functions (CPU)
     */
    class ImageHelper {
    public:
        /**
         * @brief Load image from file into CPU memory (RAM)
         * @param fileName the file name
         * @return the image
         */
        static raylib::image::RlImage load(const std::string &fileName);

        /**
         * @brief Load image from RAW file data
         * @param fileName the file name
         * @param width the width
         * @param height the height
         * @param format the format
         * @param headerSize the header size
         * @return the image
         */
        static raylib::image::RlImage loadRaw(const std::string &fileName, int width, int height, int format, int headerSize);

        /**
         * @brief Load image sequence from file (frames appended to image.data)
         * @param fileName the file name
         * @return the image
         */
        static raylib::image::RlImage loadAnim(const std::string &fileName);

        /**
         * @brief Load image from memory buffer
         * @param fileType the file type
         * @param fileData the file data
         * @param dataSize the data size
         * @return the image
         */
        static raylib::image::RlImage loadFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize);

        /**
         * @brief Load image from GPU texture data
         * @param texture the texture
         * @return the image
         */
        static raylib::image::RlImage loadFromTexture(const Texture2D &texture);

        /**
         * @brief Load image from screen buffer and (screenshot)
         * @return the image
         */
        static raylib::image::RlImage loadFromScreen();

        /**
         * @brief Create an image from text (default font)
         * @param text the text
         * @param fontSize the font size
         * @param color the color
         * @return the image
         */
        static raylib::image::RlImage fromText(const std::string &text, int fontSize, const RlColor &color);

        /**
         * @brief Create an image from text (custom sprite font)
         * @param font the font
         * @param text the text
         * @param fontSize the font size
         * @param spacing the spacing
         * @param tint the tint
         * @return the image
         */
        static raylib::image::RlImage fromText(const raylib::text::RlFont &font, const std::string &text, float fontSize, float spacing, const RlColor &tint);

        /**
         * @brief Create an image from font (custom sprite font)
         * @param chars the chars
         * @param recs the recs
         * @param glyphCount the glyph count
         * @param fontSize the font size
         * @param padding the padding
         * @param packMethod the pack method
         * @return the image
         */
        static raylib::image::RlImage genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod);

    };
}

#endif //INDIESTUDIO_IMAGEHELPER_HPP
