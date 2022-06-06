/*
** EPITECH PROJECT, 2022
** Text.hpp
** FileHelper description:
** Text.hpp
*/

#ifndef INDIESTUDIO_TEXT_HPP
#define INDIESTUDIO_TEXT_HPP

#include "raylib.h"
#include <string>
#include "raylib/Text/RlFont.hpp"

namespace raylib {

    #define DEFAULT_COLOR BLACK
    #define DEFAYLT_POSITION {0, 0}

    class Text {
    public:
        explicit Text(const std::string &text, Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);
        Text(const std::string &text, Font font, Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);
        Text(const std::string &text, const RlFont &font, Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);
        Text(const Text &text);
        Text(const std::string &text, const std::string &fontPath, int fontSize, int *fontChars, int glyphCount, Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);
        Text(const std::string &text, Image image, Color key, int firstChar, Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);
        Text(const std::string &text, const std::string &fileType, const unsigned char *fileDate, int dataSize, int fontSize, int *fontChars, int , Vector2 postion = DEFAYLT_POSITION, Color color = DEFAULT_COLOR);

        Text &operator=(const Text& text);

        void setText(const std::string &text);
        void setFont(const RlFont &font);
        void setPosition(float x, float y);
        void setPosition(Vector2 pos);
        void setColor(Color color);

        inline std::string getText() const {return _text;};
        RlFont getFont() const;
        inline Vector2 getPosition() const {return _position;};
        inline Color getColor() const {return _color;};
    private:
        Color _color;
        Vector2 _position;
        std::string _text;
        RlFont _font;
    };
}
#endif //INDIESTUDIO_TEXT_HPP
