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

    class RlFont {
    public:
        // Font loading/unloading functions
        RlFont();
        explicit RlFont(Font font, float fontSize = 10, float textSpacing = 1);
        explicit RlFont(const RlFont &font);
        explicit RlFont(const std::string &fileName, float fontSize = 10, float textSpacing = 1);
        explicit RlFont(const std::string &fileName, int fontSize, int *fontChars, int glyphCount, float realfontSize = 10, float textSpacing = 1);
        explicit RlFont(Image image, Color key, int firstChar, float fontSize = 10, float textSpacing = 1);
        explicit RlFont(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, float realfontSize = 10, float textSpacing = 1);
        ~RlFont();
        RlFont &operator=(const RlFont &font);

        GlyphInfo *loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int type);      // Load font data for further use
        Image genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod);      // Generate image font atlas using chars info
        void unloadFontData(GlyphInfo *chars, int glyphCount);                                          // Unload font chars info data (RAM)

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
