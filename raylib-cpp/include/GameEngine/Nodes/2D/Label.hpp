/*
** EPITECH PROJECT, 2022
** Label.hpp
** File description:
** Label.hpp
*/

#ifndef INDIESTUDIO_LABEL_HPP
#define INDIESTUDIO_LABEL_HPP

#include "Node2D.hpp"

namespace gameengine {

    class Label : public Node2D {
    public:
        explicit Label(const std::string &name, Vector2f position = {0, 0}, Vector2f scale = {1, 1}, float degrees = 0,
                       const raylib::RlColor &color = RlColor::White);

        ~Label() override = default;

        void ready() override;

        void update(float delta) override;

        void draw() override;

        Vector2f getPosition() override;

        void setPosition(Vector2f position) override;

        Vector2f getScale() override;

        void setScale(Vector2f scale) override;

        float getRotationDegrees() override;

        void setRotationDegrees(float rotationDegrees) override;

        void setColor(unsigned int r, unsigned int g, unsigned int b, unsigned int a);

        void setColor(raylib::RlColor color);

        /**
         * @brief Get the mutable color
         * @return the mutable color
         */
        raylib::RlColor &getColor();

        /**
         * @brief Get the immutable color
         * @return the immutable color
         */
        const raylib::RlColor &getColor() const;

        void setText(const std::string &text);

    private:
        std::string _text;
        raylib::text::RlText _textComponent;
        raylib::RlColor _color;

        Vector2f _position;
        Vector2f _scale;
        float _rotationDegrees;
    };
}

#endif //INDIESTUDIO_LABEL_HPP
