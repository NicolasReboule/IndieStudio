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

namespace raylib {
    /**
     * @brief RlTextBuilder class
     */
    class RlTextBuilder : public IBuilder<RlText> {
        public:

             /**
             * @brief Construct a new TextBuilder object
             */
            RlTextBuilder();

            /**
             * @brief Build the RlText
             * @return the RlText
             */
            RlText build() override;

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
            RlTextBuilder &setFont(const std::shared_ptr<RlFont> &font);

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
            RlTextBuilder &setFontSize(float fontSize);

            /**
             * @brief Set the text spacing
             * @param spacing the text spacing
             * @return the TextBuilder object
             */
            RlTextBuilder &setSpacing(float spacing);

            /**
             * @brief Set the rotation
             * @param rotation the rotation
             * @return the TextBuilder object
             */
            RlTextBuilder &setRotation(float rotation);

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
            bool _isTextSet = false;
            bool _isFontSet = false;
            bool _isFontSizeSet = false;
            std::string _text;
            std::string _fontPath;
            Vector2f _position;
            std::shared_ptr<RlFont> _font;
            RlColor _color;
            float _fontSize;
            float _textSpacing;
            float _rotation;
            Vector2f _origin;
    };
}
#endif //INDIESTUDIO_RLTEXTBUILDER_HPP
