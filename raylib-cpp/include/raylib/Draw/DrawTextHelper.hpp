/*
** EPITECH PROJECT, 2022
** DrawTextHelper.hpp
** File description:
** DrawTextHelper.hpp
*/

#ifndef INDIESTUDIO_DRAWTEXTHELPER_HPP
#define INDIESTUDIO_DRAWTEXTHELPER_HPP

#include "raylib/Text/RlText.hpp"
#include "raylib/Math.hpp"

namespace raylib {
    /**
     * @brief DrawTextHelper class
     */
    class DrawTextHelper {
    public:
        /**
         * @brief Draw the current fps
         * @param pos the position
         * @param fontSize the font size
         */
        static void drawFps(const Vector2f &pos = {10, 10}, const int &fontSize = 20);

        /**
         * @brief Draw the current fps
         * @param posX the position x
         * @param posY the position y
         * @param fontSize the font size
         */
        static void drawFps(const float &posX = 10, const float &posY = 10, const int &fontSize = 20);

        /**
         * @brief Draw the fps
         * @param pos the position
         */
        static void drawFps(const Vector2f &pos = {10, 10});

        /**
         * @brief Draw the fps
         * @param posX the position x
         * @param posY the position y
         */
        static void drawFps(const int &posX = 10, const int &posY = 10);

        /**
         * @brief Draw a text (using default font)
         * @param text the text to draw
         * @param pos the position
         * @param fontSize the font size
         * @param color the color
         */
        static void drawText(const std::string &text, const Vector2f &pos, const int &fontSize, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw a text (using default font)
         * @param text the text to draw
         * @param posX the x position
         * @param posY the y position
         * @param fontSize the font size
         * @param color the color
         */
        static void drawText(const std::string &text, const float &posX, const float &posY, const int &fontSize, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw text using font and additional parameters
         * @param font the font
         * @param text the text to draw
         * @param position the position
         * @param color the color
         */
        static void drawText(const std::string &text, const RlFont &font, const Vector2f &position, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw text using font and additional parameters
         * @param font the font
         * @param text the text to draw
         * @param position the position
         * @param fontSize the font size
         * @param spacing the spacing
         * @param tint the color
         */
        static void drawText(const std::string &text, const RlFont &font, const Vector2f &position, const float &fontSize, const RlColor &tint = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw text using font and additional parameters
         * @param text the text to draw
         * @param font the font
         * @param position the position
         * @param rotation the rotation
         * @param fontSize the font size
         * @param tint the color
         * @param spacing the spacing
         */
        static void drawText(const std::string &text, const RlFont &font, const Vector2f &position, const float &rotation, const float &fontSize, const RlColor &tint = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw text using font and additional parameters
         * @param text the text to draw
         * @param font the font
         * @param position the position
         * @param origin the origin
         * @param fontSize the font size
         * @param tint the color
         * @param spacing the spacing
         */
        static void drawText(const std::string &text, const RlFont &font, const Vector2f &position, const Vector2f &origin, const float &fontSize, const RlColor &tint = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw text using Font and 'pro' parameters (rotation)
         * @param font the font
         * @param text the text to draw
         * @param position the position
         * @param origin the origin
         * @param rotation the rotation
         * @param fontSize the font size
         * @param spacing the spacing
         * @param tint the color
         */
        static void drawText(const std::string &text, const RlFont &font, const Vector2f &position, const Vector2f &origin, const float &rotation, const float &fontSize = 20, const RlColor &tint = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw a text centered to the position
         * @param text the text to draw
         * @param font the font
         * @param position the position
         * @param color the color
         * @param spacing the spacing
         */
        static void drawCenteredText(const std::string &text, const RlFont &font, const Vector2f &position, const RlColor &color = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw a text centered to the position
         * @param text the text to draw
         * @param font the font
         * @param position the position
         * @param fontSize the font size
         * @param color the color
         * @param spacing the spacing
         */
        static void drawCenteredText(const std::string &text, const RlFont &font, const Vector2f &position, const float &fontSize, const RlColor &color = RlColor::Black, const float &spacing = 1);

        /**
         * @brief Draw one character (codepoint)
         * @param font the font
         * @param codepoint the codepoint
         * @param position the position
         * @param fontSize the font size
         * @param tint the color
         */
        static void drawTextUsingCodepoint(const RlFont &font, const int &codepoint, const Vector2f &position, float fontSize, const RlColor &tint);

        /**
         * @brief Draw text using RlText and additional parameters
         * @param text the text to draw
         * @param position the position
         * @param color the color
         */
        static void drawText(const RlText &text, const Vector2f &position, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw text using RlText and additional parameters
         * @param text the text to draw
         * @param posX the x position
         * @param posY the y position
         * @param color the color
         */
        static void drawText(const RlText &text, const float &posX, const float &posY, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw text using RlText values
         * @param text the text to draw
         */
        static void drawText(const RlText &text);
    };
}

#endif //INDIESTUDIO_DRAWTEXTHELPER_HPP
