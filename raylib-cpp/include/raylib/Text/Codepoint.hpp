/*
** EPITECH PROJECT, 2022
** Codepoint.hpp
** FileHelper description:
** Codepoint.hpp
*/

#ifndef INDIESTUDIO_CODEPOINT_HPP
#define INDIESTUDIO_CODEPOINT_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class Codepoint {
    public:
        // RlText codepoints management functions (unicode characters)
        int *loadCodepoints(const std::string &text, int *count);                                              // Load all codepoints from a UTF-8 text string, codepoints count returned by parameter
        void unloadCodepoints(int *codepoints);                                                         // Unload codepoints data from memory
        int getCodepointCount(const std::string &text);                                                        // Get total number of codepoints in a UTF-8 encoded string
        int getCodepoint(const std::string &text, int *bytesProcessed);                                        // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
        std::string codepointToUTF8(int codepoint, int *byteSize);                                      // Encode one codepoint into UTF-8 byte array (array length returned as parameter)
        std::string textCodepointsToUTF8(int *codepoints, int length);                                        // Encode text as codepoints array into UTF-8 text string (WARNING: memory must be freed!)
    private:
    };
}
#endif //INDIESTUDIO_CODEPOINT_HPP
