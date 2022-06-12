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
    class TextHelper {
    public:
        // RlText drawing functions
        static void drawFPS(int posX, int posY);                                                               // DrawHelper current FPS
        static void drawText(const std::string &text, int posX, int posY, int fontSize, Color color);                 // DrawHelper text (using default font)
        static void drawText(const RlText &text);
        static void drawTextEx(Font font, const std::string &text, Vector2f position, float fontSize, float spacing, Color tint);  // DrawHelper text using font and additional parameters
        static void drawTextPro(Font font, const std::string &text, Vector2f position, Vector2f origin, float rotation, float fontSize, float spacing, Color tint); // DrawHelper text using Font and pro parameters (rotation)
        static void drawTextCodepoint(Font font, int codepoint, Vector2f position, float fontSize, Color tint); // DrawHelper one character (codepoint)

        // RlText misc. functions
        static int measureText(const std::string &text, int fontSize);                                                // Measure string width for default font
        static Vector2f measureTextEx(Font font, const std::string &text, float fontSize, float spacing);              // Measure string size for Font
        static int getGlyphIndex(Font font, int codepoint);                                                    // Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
        static GlyphInfo getGlyphInfo(Font font, int codepoint);                                               // Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
        static Rectangle getGlyphAtlasRec(Font font, int codepoint);                                           // Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found
    private:
    };
}

#endif //INDIESTUDIO_TEXTHELPER_HPP
