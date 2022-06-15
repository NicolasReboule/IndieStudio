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
        explicit Button(const std::string &name, const std::string &filename);

        ~Button() override = default;

        void update(float delta) override;

        void draw() override;

        Vector2f getPosition() override;

        void setPosition(Vector2f position) override;

        Vector2f getScale() override;

        void setScale(Vector2f scale) override;

        float getRotationDegrees() override;

        void setRotationDegrees(float rotationDegrees) override;

        virtual void pressed() = 0;

        void ready() override;

        void setEnable(bool value);

        bool getIsEnable();

    private:
        raylib::RlTexture _texture;

        bool _isEnable = true;

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
