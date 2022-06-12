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

//namespace raylib {
//    /**
//     * @brief Font class
//     */
//    class RlFont {
//    public:
//        /**
//         * @brief Create a RlFont, using default parameters
//         */
//        RlFont();
//
//        /**
//         * @brief Create a RlFont, using a font
//         * @param font the font
//         * @param fontSize the font size
//         * @param textSpacing the text spacing
//         */
//        explicit RlFont(const Font &font, int fontSize = 10, float textSpacing = 1);
//
//        /**
//         * @brief Create a RlFont, using a file path
//         * @param fileName the file path
//         * @param fontSize the font size
//         * @param textSpacing the text spacing
//         */
//        explicit RlFont(const std::string &fileName, int fontSize = 10, float textSpacing = 1);
//
//        /**
//         * @brief Create a RlFont, using a file path and a font size
//         * @param fileName the file path
//         * @param fontSize the font size
//         * @param fontChars the font characters
//         * @param glyphCount the glyph count
//         * @param realfontSize the real font size
//         * @param textSpacing the text spacing
//         */
//        explicit RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, int realfontSize = 10, float textSpacing = 1);
//
//        /**
//         * @brief Create a RlFont, using a RlImage and a key color
//         * @param image the RlImage
//         * @param key the key color
//         * @param firstChar the first character
//         * @param fontSize the font size
//         * @param textSpacing the text spacing
//         */
//        explicit RlFont(const RlImage &image, const RlColor &key, int firstChar, int fontSize = 10, float textSpacing = 1);
//
//        /**
//         * @brief Create a RlFont, using a file type and a file data
//         * @param fileType the file type
//         * @param fileData the file data
//         * @param dataSize the data size
//         * @param fontSize the font size
//         * @param fontChars the font characters
//         * @param glyphCount the glyph count
//         * @param realfontSize the real font size
//         * @param textSpacing the text spacing
//         */
//        explicit RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int realfontSize = 10, float textSpacing = 1);
//
//        /**
//         * @brief Destroy the RlFont
//         */
//        ~RlFont();
//
//        /**
//         * @brief Set the font size
//         * @param fontSize the new font size
//         */
//        void setFontSize(int fontSize);
//
//        /**
//         * @brief Set the text spacing
//         * @param textSpacing the new text spacing
//         */
//        void setTextSpacing(float textSpacing);
//
//        /**
//         * @brief Get the mutable font
//         * @return the mutable font
//         */
//        Font &getFont();
//
//        /**
//         * @brief Get the immutable font
//         * @return the immutable font
//         */
//        const Font &getFont() const;
//
//        /**
//         * @brief Check if the font is the default font
//         * @return true if the font is the default font
//         */
//        bool isDefaultFont() const;
//
//        /**
//         * @brief Get the font path
//         * @return the font path
//         */
//        const std::string &getFontPath() const;
//
//        /**
//         * @brief Get the font size
//         * @return the font size
//         */
//        const int &getFontSize() const;
//
//        /**
//         * @brief Get the text spacing
//         * @return the text spacing
//         */
//        const float &getTextSpacing() const;
//
//    private:
//        bool _defaultFont; /**< If the default raylib font is used */
//        Font _font; /**< The raylib font */
//        std::string _fontPath; /**< The font path */
//        int _fontSize; /**< The font size */
//        float _textSpacing; /**< The text spacing of the font */
//    };
//}

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
