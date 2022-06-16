/*
** EPITECH PROJECT, 2022
** RlTextBuilder.h
** File description:
** RlTextBuilder.h
*/

#ifndef INDIESTUDIO_RLTEXTBUILDER_HPP
#define INDIESTUDIO_RLTEXTBUILDER_HPP

#include "raylib/Text/RlText.hpp"
#include "raylib/IBuilder.hpp"
#include "raylib/exception/BuilderException.hpp"

namespace raylib::builder {
    /**
     * @brief Builder to create a RlText easily
     */
    class RlTextBuilder : public IBuilder<raylib::text::RlText> {
    public:
        /**
        * @brief Construct a new TextBuilder object
        */
        RlTextBuilder();

        /**
         * @brief Build the RlText
         * @return the RlText
         */
        raylib::text::RlText build() override;

        /**
         * @brief Set the text
         * @param text the text
         * @return the TextBuilder object
         */
        RlTextBuilder &setText(const std::string &text);

        /**
         * @brief Set the posisition
         * @param position the position vector
         * @return the TextBuilder object
         */
        RlTextBuilder &setPosition(const Vector2f &position);

        /**
         * @brief Set the font
         * @param font the font
         * @return the TextBuilder object
         */
        RlTextBuilder &setFont(const std::shared_ptr<raylib::text::RlFont> &font);

        /**
         * @brief Set the color
         * @param color the color
         * @return the TextBuilder object
         */
        RlTextBuilder &setColor(const RlColor &color);

        /**
         * @brief Set the font size
         * @param fontSize the font size
         * @return the TextBuilder object
         */
        RlTextBuilder &setFontSize(const float &fontSize);

        /**
         * @brief Set the text spacing
         * @param spacing the text spacing
         * @return the TextBuilder object
         */
        RlTextBuilder &setSpacing(const float &spacing);

        /**
         * @brief Set the rotation
         * @param rotation the rotation
         * @return the TextBuilder object
         */
        RlTextBuilder &setRotation(const float &rotation);

        /**
         * @brief Set the origin
         * @param origin the origin vector
         * @return the TextBuilder object
         */
        RlTextBuilder &setOrigin(const Vector2f &origin);

        /**
         * @brief Set the font path
         * @param fontPath the font path
         * @return the TextBuilder object
         */
        RlTextBuilder &setFontPath(const std::string &fontPath);

    private:
        bool _isTextSet = false; /**< If the text has been set */
        bool _isFontSet = false; /**< If the font has been set */
        bool _isFontPathSet = false; /**< If the font path has been set */
        bool _isFontSizeSet = false; /**< If the font size has been set */
        std::string _text; /**< The text */
        std::string _fontPath; /**< The font path */
        Vector2f _position; /**< The position */
        std::shared_ptr<raylib::text::RlFont> _font; /**< The font */
        RlColor _color; /**< The color */
        float _fontSize; /**< The font size */
        float _textSpacing; /**< The text spacing */
        float _rotation; /**< The rotation */
        Vector2f _origin; /**< The origin */
    };
}
#endif //INDIESTUDIO_RLTEXTBUILDER_HPP
