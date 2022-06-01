/*
** EPITECH PROJECT, 2022
** Text.hpp
** File description:
** Text.hpp
*/

#ifndef INDIESTUDIO_TEXT_HPP
#define INDIESTUDIO_TEXT_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class Text {
    public:
        // Text drawing functions
        void drawFPS(int posX, int posY);                                                               // Draw current FPS
        static void drawText(const std::string &text, int posX, int posY, int fontSize, Color color);                 // Draw text (using default font)
        void drawTextEx(Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint);  // Draw text using font and additional parameters
        void drawTextPro(Font font, const std::string &text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint); // Draw text using Font and pro parameters (rotation)
        void drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint); // Draw one character (codepoint)

        // Text misc. functions
        int measureText(const std::string &text, int fontSize);                                                // Measure string width for default font
        Vector2 measureTextEx(Font font, const std::string &text, float fontSize, float spacing);              // Measure string size for Font
        int getGlyphIndex(Font font, int codepoint);                                                    // Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
        GlyphInfo getGlyphInfo(Font font, int codepoint);                                               // Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
        Rectangle getGlyphAtlasRec(Font font, int codepoint);                                           // Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found

        // Text codepoints management functions (unicode characters)
        int *loadCodepoints(const std::string &text, int *count);                                              // Load all codepoints from a UTF-8 text string, codepoints count returned by parameter
        void unloadCodepoints(int *codepoints);                                                         // Unload codepoints data from memory
        int getCodepointCount(const std::string &text);                                                        // Get total number of codepoints in a UTF-8 encoded string
        int getCodepoint(const std::string &text, int *bytesProcessed);                                        // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
        std::string codepointToUTF8(int codepoint, int *byteSize);                                      // Encode one codepoint into UTF-8 byte array (array length returned as parameter)
        std::string textCodepointsToUTF8(int *codepoints, int length);                                        // Encode text as codepoints array into UTF-8 text string (WARNING: memory must be freed!)

        // Text strings management functions (no utf8 strings, only byte chars)
        // NOTE: Some strings allocate memory internally for returned strings, just be careful!
        int textCopy(char *dst, const std::string &src);                                                       // Copy one string to another, returns bytes copied
        bool textIsEqual(const std::string &text1, const std::string &text2);                                         // Check if two text string are equal
        unsigned int textLength(const std::string &text);                                                      // Get text length, checks for '\0' ending
//        std::string textFormat(const std::string &text, ...);                                                  // Text formatting with variables (sprintf style)
        std::string textSubtext(const std::string &text, int position, int length);                            // Get a piece of a text string
        std::string textReplace(char *text, const std::string &replace, const std::string &by);                             // Replace text string (memory must be freed!)
        std::string textInsert(const std::string &text, const std::string &insert, int position);                           // Insert text in a position (memory must be freed!)
        std::string textJoin(const char **textList, int count, const std::string &delimiter);                  // Join text strings with delimiter
        const char **textSplit(const std::string &text, char delimiter, int *count);                           // Split text into multiple strings
        void textAppend(char *text, const std::string &append, int *position);                                 // Append text at specific position and move cursor!
        int textFindIndex(const std::string &text, const std::string &find);                                          // Find first text occurrence within a string
        std::string textToUpper(const std::string &text);                                                      // Get upper case version of provided string
        std::string textToLower(const std::string &text);                                                      // Get lower case version of provided string
        std::string textToPascal(const std::string &text);                                                     // Get Pascal case notation version of provided string
        int TextToInteger(const std::string &text);                                                            // Get integer value from text (negative values not supported)

    private:
    };
}
#endif //INDIESTUDIO_TEXT_HPP
