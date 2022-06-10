/*
** EPITECH PROJECT, 2022
** Button.hpp
** File description:
** Button.hpp
*/

#ifndef INDIESTUDIO_BUTTON_HPP
#define INDIESTUDIO_BUTTON_HPP

#include "Node2D.hpp"

namespace GameEngine {

    class Button : public Node2D {
    public:
        explicit Button(const std::string& filename);

        ~Button() = default;

        void ready() override;

        void update() override;

        void draw() override;


        Vector2f getPosition() override;

        void setPosition(Vector2f position) override;

        Vector2f getScale() override;

        void setScale(Vector2f scale) override;

        float getRotationDegrees() override;

        void setRotationDegrees(float rotationDegrees) override;

        virtual void pressed() = 0;

    private:
        raylib::RlTexture _texture;

        Vector2f _position;
        Vector2f _scale;
        float _rotationDegrees;

        int _frameNum;
        float _frameHeight;
        Rectangle _bounds;
        Rectangle _rectangle;
        int _state;
        bool _action;
    };
}


#endif //INDIESTUDIO_BUTTON_HPP
