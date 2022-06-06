/*
** EPITECH PROJECT, 2022
** Font.hpp
** FileHelper description:
** Font.hpp
*/

#ifndef INDIESTUDIO_RLFONT_HPP
#define INDIESTUDIO_RLFONT_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    #define DEFAULT_FONT_SIZE 10
    #define DEFAULT_TEXT_SPACING 1

    class RlFont {
    public:
        // Font loading/unloading functions
        RlFont();
        RlFont(Font font, float fontSize = DEFAULT_FONT_SIZE, float textSpacing = DEFAULT_TEXT_SPACING);
        RlFont(const RlFont &font);
        RlFont(const std::string &fileName, float fontSize = DEFAULT_FONT_SIZE, float textSpacing = DEFAULT_TEXT_SPACING);
        RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, float realfontSize = DEFAULT_FONT_SIZE, float textSpacing = DEFAULT_TEXT_SPACING);
        RlFont(Image image, Color key, int firstChar, float fontSize = DEFAULT_FONT_SIZE, float textSpacing = DEFAULT_TEXT_SPACING);
        RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, float realfontSize = DEFAULT_FONT_SIZE, float textSpacing = DEFAULT_TEXT_SPACING);

        RlFont &operator=(const RlFont &font);

        Font getFontDefault();                                                                      // Get the default Font
        Font loadFont(const std::string &fileName);                                                            // Load font from file into GPU memory (VRAM)
        Font loadFontEx(const std::string &fileName, int fontSize, int *fontChars, int glyphCount);            // Load font from file with extended parameters
        Font loadFontFromImage(Image image, Color key, int firstChar);                                  // Load font from Image (XNA style)
        Font loadFontFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount); // Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
        GlyphInfo *loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int type);      // Load font data for further use
        Image genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod);      // Generate image font atlas using chars info
        void unloadFontData(GlyphInfo *chars, int glyphCount);                                          // Unload font chars info data (RAM)
        void unloadFont(Font font);                                         // Unload Font from GPU memory (VRAM)

        void setFontSize(float fontSize);
        void setTextSpacing(float textSpacing);

        Font getFont() const {return _font;};
        std::string getFontPath() const {return _fontPath;};
        float getFontSize() const {return _fontSize;};
        float getTextSpacing() const {return _textSpacing;};
    private:
        Font _font;
        std::string _fontPath;
        float _fontSize;
        float _textSpacing;
    };
}

#endif //INDIESTUDIO_RLFONT_HPP
