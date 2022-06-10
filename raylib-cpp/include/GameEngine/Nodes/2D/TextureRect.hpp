/*
** EPITECH PROJECT, 2022
** TextureRect.hpp
** File description:
** TextureRect.hpp
*/

#ifndef INDIESTUDIO_TEXTURERECT_HPP
#define INDIESTUDIO_TEXTURERECT_HPP

#include "Node2D.hpp"

namespace GameEngine {

    class TextureRect : public Node2D {
    public:
        explicit TextureRect(std::string name, const std::string& filename, Vector2f position = {0, 0}, Vector2f scale = {1, 1}, float = 0, raylib::RlColor color = {255, 255, 255, 255});

        ~TextureRect() override = default;

        void ready() override;

        void update() override;

        void draw() override;

        Vector2f getPosition() override;

        void setPosition(Vector2f position) override;

        Vector2f getScale() override;

        void setScale(Vector2f scale) override;

        float getRotationDegrees() override;

        void setRotationDegrees(float rotationDegrees) override;

        void setColor(unsigned int r,unsigned int g, unsigned int b, unsigned int a);

        raylib::RlColor getcolor();

    private:
        raylib::RlTexture _texture;
        raylib::RlColor _color;

        Vector2f _position;
        Vector2f _scale;
        float _rotationDegrees;
    };
}

#endif //INDIESTUDIO_TEXTURERECT_HPP
