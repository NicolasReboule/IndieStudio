/*
** EPITECH PROJECT, 2022
** Font.hpp
** FileHelper description:
** Font.hpp
*/

#ifndef INDIESTUDIO_RLFONT_HPP
#define INDIESTUDIO_RLFONT_HPP

#include "raylib/Image/RlImage.hpp"
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
         * @brief Create a RlFont, using a font
         * @param font the font
         * @param fontSize the font size
         * @param textSpacing the text spacing
         */
        explicit RlFont(const Font &font, float fontSize = 10, float textSpacing = 1);

        /**
         * @brief Create a RlFont, using a file path
         * @param fileName the file path
         * @param fontSize the font size
         * @param textSpacing the text spacing
         */
        explicit RlFont(const std::string &fileName, float fontSize = 10, float textSpacing = 1);

        /**
         * @brief Create a RlFont, using a file path and a font size
         * @param fileName the file path
         * @param fontSize the font size
         * @param fontChars the font characters
         * @param glyphCount the glyph count
         * @param realfontSize the real font size
         * @param textSpacing the text spacing
         */
        explicit RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, float realfontSize = 10, float textSpacing = 1);

        /**
         * @brief Create a RlFont, using a RlImage and a key color
         * @param image the RlImage
         * @param key the key color
         * @param firstChar the first character
         * @param fontSize the font size
         * @param textSpacing the text spacing
         */
        explicit RlFont(const RlImage &image, const RlColor &key, int firstChar, float fontSize = 10, float textSpacing = 1);

        /**
         * @brief Create a RlFont, using a file type and a file data
         * @param fileType the file type
         * @param fileData the file data
         * @param dataSize the data size
         * @param fontSize the font size
         * @param fontChars the font characters
         * @param glyphCount the glyph count
         * @param realfontSize the real font size
         * @param textSpacing the text spacing
         */
        explicit RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, float realfontSize = 10, float textSpacing = 1);

        /**
         * @brief Destroy the RlFont
         */
        ~RlFont();

        /**
         * @brief Set the font size
         * @param fontSize the new font size
         */
        void setFontSize(float fontSize);

        /**
         * @brief Set the text spacing
         * @param textSpacing the new text spacing
         */
        void setTextSpacing(float textSpacing);

        /**
         * @brief Get the mutable font
         * @return the mutable font
         */
        Font &getFont();

        /**
         * @brief Get the immutable font
         * @return the immutable font
         */
        const Font &getFont() const;

        /**
         * @brief Check if the font is the default font
         * @return true if the font is the default font
         */
        bool isDefaultFont() const;

        /**
         * @brief Get the font path
         * @return the font path
         */
        const std::string &getFontPath() const;

        /**
         * @brief Get the font size
         * @return the font size
         */
        const float &getFontSize() const;

        /**
         * @brief Get the text spacing
         * @return the text spacing
         */
        const float &getTextSpacing() const;

    private:
        bool _defaultFont; /**< If the default raylib font is used */
        Font _font; /**< The raylib font */
        std::string _fontPath; /**< The font path */
        float _fontSize; /**< The font size */
        float _textSpacing; /**< The text spacing of the font */
    };
}

#endif //INDIESTUDIO_RLFONT_HPP
