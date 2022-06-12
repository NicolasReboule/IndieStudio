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
         * @param posX the x position
         * @param posY the y position
         */
        static void drawFps(int posX, int posY);

        /**
         * @brief Draw the current fps
         * @param pos the position
         */
        static void drawFps(const Vector2f &pos);

        /**
         * @brief Draw a text (using default font)
         * @param text the text to draw
         * @param posX the x position
         * @param posY the y position
         * @param fontSize the font size
         * @param color the color
         */
        static void drawText(const std::string &text, int posX, int posY, int fontSize, const RlColor &color);

        /**
         * @brief Draw text using font and additional parameters
         * @param font the font
         * @param text the text to draw
         * @param position the position
         * @param fontSize the font size
         * @param spacing the spacing
         * @param tint the color
         */
        static void drawText(const RlFont &font, const std::string &text, const Vector2f &position, float fontSize, float spacing, const RlColor &tint);

        /**
         * @brief Draw text using font and additional parameters
         * @param font the font
         * @param text the text to draw
         * @param position the position
         * @param color the color
         */
        static void drawText(const RlFont &font, const std::string &text, const Vector2f &position, const RlColor &color = RlColor::Black);

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
        static void drawText(const RlFont &font, const std::string &text, const Vector2f &position, const Vector2f &origin, float rotation, float fontSize, float spacing, const RlColor &tint);

        /**
         * @brief Draw one character (codepoint)
         * @param font the font
         * @param codepoint the codepoint
         * @param position the position
         * @param fontSize the font size
         * @param tint the color
         */
        static void drawText(const RlFont &font, int codepoint, const Vector2f &position, float fontSize, const RlColor &tint);

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
        static void drawText(const RlText &text, float posX, float posY, const RlColor &color = RlColor::Black);

        /**
         * @brief Draw text using RlText values
         * @param text the text to draw
         */
        static void drawText(const RlText &text);
    };
}

#endif //INDIESTUDIO_DRAWTEXTHELPER_HPP
