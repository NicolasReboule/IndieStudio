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
#include <memory>

namespace raylib::text {
    /**
     * @brief Encapsulation of the raylib text
     */
    class RlText {
    public:
        /**
         * @brief RlText constructor (default font used)
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
        explicit RlText(const std::string &text, std::shared_ptr<RlFont> &font, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief RlText constructor
         * @param text the text to use
         * @param fontPath the path to the font to use
         * @param fontSize the size of the font to use
         * @param position the position of the text
         * @param color the color of the text
         */
        explicit RlText(const std::string &text, const std::string &fontPath, float fontSize = 20, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);

        /**
         * @brief Set the text to use
         * @param text the text to use
         */
        void setText(const std::string &text);

        /**
         * @brief Set the font to use
         * @param font the font to use
         */
        void setFont(const std::shared_ptr<RlFont> &font);

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
        const std::shared_ptr<RlFont> &getFont() const;

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
         * @brief Get the width of the text with the loaded font
         * @return the width of the text
         * @deprecated Use RlText#getSize() instead
         */
        float getWidth() const;

        /**
         * @brief Get the text spacing
         */
        float getTextSpacing() const;

        /**
         * @brief Get the size of the text with the loaded font
         * @return the size of the text
         */
        Vector2f getSize() const;

        /**
         * @brief Set the text spacing
         * @param textSpacing
         */
        void setTextSpacing(float textSpacing);

        /**
         * @brief Get the height of the text with the loaded font
         * @return the height of the text
         */
        float getFontSize() const;

        /**
         * @brief Set the font size
         * @param fontSize the font size
         * @attention Use this only if you know what you are doing (aka using the default font)
         */
        void setFontSize(float fontSize);

        /**
         * @brief Set the text rotation
         * @param rotation the text rotation
         */
        void setRotation(float rotation);

        /**
         * @brief Get the text rotation
         * @return the text rotation
         */
        float getRotation() const;

        /**
         * @brief Get the text origin
         * @return the text origin
         */
        const Vector2f &getOrigin() const;

        /**
         * @brief Set the text origin
         * @param origin the text origin
         */
        void setOrigin(const Vector2f &origin);

    private:
        RlColor _color; /**< The text color */
        Vector2f _position; /**< The text position */
        std::string _text; /**< The text */
        std::shared_ptr<RlFont> _font; /**< The text font */
        float _textSpacing; /**< The text spacing */
        float _fontSize; /**< The text font size */
        float _rotation; /**< The text rotation */
        Vector2f _origin; /**< The text origin */
    };
}
#endif //INDIESTUDIO_RLTEXT_HPP
