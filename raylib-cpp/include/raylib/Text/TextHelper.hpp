/*
** EPITECH PROJECT, 2022
** TextHelper.hpp
** FileHelper description:
** TextHelper.hpp
*/

#ifndef INDIESTUDIO_TEXTHELPER_HPP
#define INDIESTUDIO_TEXTHELPER_HPP

#include "RlText.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief TextHelper class
     */
    class TextHelper {
    public:
        /**
         * @brief Measure string width for default font
         * @param text the text to measure
         * @param fontSize the font size
         * @return the width of the text
         */
        static int measureText(const std::string &text, int fontSize);

        /**
         * @brief Measure string width for custom font
         * @param font the font to use
         * @param text the text to measure
         * @return the width of the text
         */
        static Vector2f measureText(const RlFont &font, const std::string &text);

        /**
        * @brief Measure string width for custom font
        * @param font the font to use
        * @param text the text to measure
        * @param fontSize the font size
        * @param spacing the spacing between characters
        * @return the width of the text
        */
        static Vector2f measureText(const RlFont &font, const std::string &text, float fontSize, float spacing = 1);

        /**
         * @brief Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
         * @param font the font to use
         * @param codepoint the codepoint to get the index for
         * @return the index of the codepoint
         */
        static int getGlyphIndex(const RlFont &font, int codepoint);

        /**
         * @brief Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
         * @param font the font to use
         * @param codepoint the codepoint to get the info for
         * @return the info of the codepoint
         */
        static GlyphInfo getGlyphInfo(const RlFont &font, int codepoint);

        /**
         * @brief Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found
         * @param font the font to use
         * @param codepoint the codepoint to get the rectangle for
         * @return the rectangle of the codepoint
         */
        static Rectangle getGlyphAtlasRec(const RlFont &font, int codepoint);
    };
}

#endif //INDIESTUDIO_TEXTHELPER_HPP
