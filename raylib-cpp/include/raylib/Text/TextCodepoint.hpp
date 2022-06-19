/*
** EPITECH PROJECT, 2022
** TextCodepoint.hpp
** FileHelper description:
** TextCodepoint.hpp
*/

#ifndef INDIESTUDIO_TEXTCODEPOINT_HPP
#define INDIESTUDIO_TEXTCODEPOINT_HPP

#include <raylib.h>
#include <string>
#include <vector>

namespace raylib::text {
    /**
     * @brief RlText codepoints management functions (unicode characters)
     */
    class TextCodepoint {
    public:
        /**
         * @brief Load all codepoints from a UTF-8 text string
         * @param text the text to use
         */
        explicit TextCodepoint(const std::string &text);

        /**
         * @brief Get the codepoints
         * @return the codepoints
         */
        const std::vector<int> &getCodepoints() const;

        /**
         * @brief Get total number of codepoints in a UTF-8 encoded string
         * @return the codepoints count
         */
        int getCodepointsCount() const;

        /**
         * @brief Encode one codepoint into UTF-8 byte (array length returned as parameter)
         * @param codepoint the codepoint to encode
         * @param byteSize the size of the codepoint will be stored in it
         * @return the codepoint count
         */
        static std::string codePointToUTF8(const int &codepoint, int &byteSize);

        /**
         * @brief Encode text as codepoints array into UTF-8 text string
         * @param bytesLength the length of the codepoints (in bytes)
         * @return the UTF-8 text string
         */
        std::string toUTF8String(const int &bytesLength);

    private:
        std::vector<int> _codepoints; /**< The codepoints */
    };
}
#endif //INDIESTUDIO_TEXTCODEPOINT_HPP
