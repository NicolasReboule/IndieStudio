/*
** EPITECH PROJECT, 2022
** Font.hpp
** File description:
** Font.hpp
*/

#ifndef INDIESTUDIO_FONTS_HPP
#define INDIESTUDIO_FONTS_HPP

#include <raylib.h>
#include <string>

namespace raylib {

    class Fonts {
    public:
        // Font loading/unloading functions
        Font getFontDefault();                                                                      // Get the default Font
        Font loadFont(const std::string &fileName);                                                            // Load font from file into GPU memory (VRAM)
        Font loadFontEx(const std::string &fileName, int fontSize, int *fontChars, int glyphCount);            // Load font from file with extended parameters
        Font loadFontFromImage(Image image, Color key, int firstChar);                                  // Load font from Image (XNA style)
        Font loadFontFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount); // Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
        GlyphInfo *loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int glyphCount, int type);      // Load font data for further use
        Image genImageFontAtlas(const GlyphInfo *chars, Rectangle **recs, int glyphCount, int fontSize, int padding, int packMethod);      // Generate image font atlas using chars info
        void unloadFontData(GlyphInfo *chars, int glyphCount);                                          // Unload font chars info data (RAM)
        void unloadFont(Font font);                                                                     // Unload Font from GPU memory (VRAM)
    private:
    };
}

#endif //INDIESTUDIO_FONTS_HPP
