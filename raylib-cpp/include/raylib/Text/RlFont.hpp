/*
** EPITECH PROJECT, 2022
** Font.hpp
** FileHelper description:
** Font.hpp
*/

#ifndef INDIESTUDIO_RLFONT_HPP
#define INDIESTUDIO_RLFONT_HPP

#include "raylib/Image/RlImage.hpp"
#include "raylib/Core/RlLogger.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief Font class
     */
    class RlFont {
    public:
        /**
         * @brief Create a RlFont, using default parameters
         */
        RlFont();

        /**
         * @brief Create a RlFont, using a font path
         * Load font from file into GPU memory (VRAM)
         * @param filename the font path
         */
        explicit RlFont(const std::string &fontPath);

        /**
         * @brief Create a RlFont, with custom font size
         * @param fontSize the font size
         */
        explicit RlFont(const int &fontSize) : RlFont("", fontSize) {}

        /**
         * @brief Create a RlFont, using a font path and a font size
         * Load font from file with extended parameters
         * @param fontPath the font path
         * @param fontSize the font size
         * @param fontChars the font characters
         * @param glyphCount the glyph count
         */
        explicit RlFont(const std::string &fontPath, const int &fontSize = 20, int *fontChars = nullptr, const int &glyphCount = 0);

        /**
         * @brief Create a RlFont, using an iamge, key color and first character
         * Load font from Image (XNA style)
         * @param image the image
         * @param key the key color
         * @param firstChar the first character
         */
        explicit RlFont(const RlImage &image, const RlColor &key, const int &firstChar);

        /**
         * @brief Create a RlFont, using a file type and a file data
         * Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
         * @param fileType the file type (ttf, otf)
         * @param fileData the file data
         * @param dataSize the data size
         * @param fontSize the font size
         * @param fontChars the font characters
         * @param glyphCount the glyph count
         */
        explicit RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, const int &fontSize = 20, int *fontChars = nullptr, const int &glyphCount = 0);

        /**
         * @brief Destroy the RlFont
         */
        ~RlFont();

        /**
         * @brief Check if the font is the default font
         * @return true if the font is the default font
         */
        bool isDefaultFont() const;

        /**
         * @brief Get the raylib font
         * @return the raylib font
         */
        const Font &getFont() const;

        /**
         * @brief Get the font path
         * @return the font path
         */
        const std::string &getFontPath() const;

        /**
         * @brief Get the font size
         * @return the font size
         */
        int getFontSize() const;

        /**
         * @brief Get the text spacing
         * @return the text spacing
         */
        float getTextSpacing() const;

        /**
         * @brief Set the text spacing
         * @param textSpacing the new text spacing
         * @return this
         */
        RlFont &setTextSpacing(float textSpacing);

    private:
        bool _defaultFont = false; /**< If the default raylib font is used */
        Font _font; /**< The raylib font */
        std::string _fontPath; /**< The font path */
        int _fontSize; /**< The font size */
        float _textSpacing; /**< The text spacing when drawn */
    };
}

#endif //INDIESTUDIO_RLFONT_HPP
