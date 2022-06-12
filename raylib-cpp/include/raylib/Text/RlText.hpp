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
#include <raylib.h>
#include <string>

namespace raylib {

    class RlText {
    public:
        explicit RlText(const std::string &text, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);
        explicit RlText(const std::string &text, const RlFont &font, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);
        explicit RlText(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, const Vector2f &postion = {0, 0}, const RlColor &color = RlColor::Black);
        explicit RlText(const std::string &text, const RlImage &image, const RlColor &key, int firstChar, const Vector2f &position = {0, 0}, const RlColor &color = RlColor::Black);
        explicit RlText(const std::string &text, const std::string &fileType, const unsigned char *fileDate, int dataSize, int fontSize, int *fontChars, int , const Vector2f &postion = {0, 0}, const RlColor &color = RlColor::Black); //TODO: check for missing parameters
        ~RlText() = default;

        void setText(const std::string &text);
        void setFont(const RlFont &font);
        void setPosition(float x, float y);
        void setPosition(const Vector2f &pos);
        void setColor(const RlColor &color);

        const std::string &getText() const;
        const RlFont &getFont() const;
        const Vector2f &getPosition() const;
        const RlColor &getColor() const;
        float getHeight() const;
        float getWidth() const;

        RlFont *operator->();
    private:
        RlColor _color;
        Vector2f _position;
        std::string _text;
        RlFont _font;
    };
}
#endif //INDIESTUDIO_RLTEXT_HPP
