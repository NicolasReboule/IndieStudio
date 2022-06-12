/*
** EPITECH PROJECT, 2022
** RlText.hpp
** FileHelper description:
** RlText.hpp
*/

#ifndef INDIESTUDIO_RLTEXT_HPP
#define INDIESTUDIO_RLTEXT_HPP

#include "raylib/Text/RlFont.hpp"
#include "raylib/Math.hpp"
#include "TextHelper.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief RlText class
     */
    class RlText {
    public:
        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param position the position of the text
         * @param color the color of the text
         */
        explicit RlText(const std::string &text, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param font the font to use
         * @param position the position of the text
         * @param color the color of the text
         */
        explicit RlText(const std::string &text, const RlFont &font, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param fontPath the path to the font to use
         * @param position the position of the text
         * @param color the color of the text
         */
        explicit RlText(const std::string &text, const std::string &fontPath, float fontSize = 10, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param fontPath the path to the font to use
         * @param fontSize the font size
         * @param fontChars the characters to use
         * @param glyphCount the number of characters to use
         * @param postion the position of the text
         * @param color the color of the text
         */
        explicit RlText(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, const Vector2f &postion = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param image the image to use
         * @param key the key of the image to use
         * @param firstChar the first character to use
         * @param position the position of the text
         * @param color the color of the text
         */
        //explicit RlText(const std::string &text, const RlImage &image, const RlColor &key, int firstChar, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param fileType the file type of the image to use
         * @param fileDate the file date of the image to use
         * @param dataSize the data size of the image to use
         * @param fontSize the font size
         * @param fontChars the characters to use
         * @param postion the position of the text
         * @param color the color of the text
         */
        //explicit RlText(const std::string &text, const std::string &fileType, const unsigned char *fileDate, int dataSize, int fontSize, int *fontChars, int , const Vector2f &postion = {0, 0}, const RlColor &color = RlColor::Black); //TODO: check for missing parameters

        /**
         * @brief Set the text to use
         * @param text the text to use
         */
        void setText(const std::string &text);

        /**
         * @brief Set the font to use
         * @param font the font to use
         */
        void setFont(const RlFont &font);

        /**
         * @brief Set the position of the text
         * @param x the x position
         * @param y the position of the text
         */
        void setPosition(float x, float y);

        /**
         * @brief Set the position of the text
         * @param pos the position of the text
         */
        void setPosition(const Vector2f &pos);

        /**
         * @brief Set the color of the text
         * @param color the color of the text
         */
        void setColor(const RlColor &color);

        /**
         * @brief Get the text
         * @return the text
         */
        const std::string &getText() const;

        /**
         * @brief Get the font
         * @return the font
         */
        const RlFont &getFont() const;

        /**
         * @brief Get the position of the text
         * @return the position of the text
         */
        const Vector2f &getPosition() const;

        /**
         * @brief Get the color of the text
         * @return the color of the text
         */
        const RlColor &getColor() const;

        /**
         * @brief Get the font size
         * @return the height of the text
         */
        float getHeight() const;

        /**
         * @brief Get the width of the text with the loaded font
         * @return the width of the text
         */
        float getWidth() const;

        /**
         * @brief Get the size of the text with the loaded font
         * @return the size of the text
         */
        Vector2f getSize();

        /**
         * @brief Get the linked font (mutable)
         * @return the font
         */
        RlFont &operator->();

        /**
         * @brief Get the linked font (immutable)
         * @return the font
         */
        const RlFont &operator->() const;

    private:
        RlColor _color; /**< The text color */
        Vector2f _position; /**< The text position */
        std::string _text; /**< The text */
        RlFont _font; /**< The text font */
    };
}
#endif //INDIESTUDIO_RLTEXT_HPP
