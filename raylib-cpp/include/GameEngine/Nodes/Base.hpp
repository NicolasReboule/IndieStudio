/*
** EPITECH PROJECT, 2022
** Base.hpp
** File description:
** Base.hpp
*/

#ifndef INDIESTUDIO_BASE_HPP
#define INDIESTUDIO_BASE_HPP

#include "raylib/Raylib.hpp"

namespace GameEngine {

    class Base {
    public:
        Base() = default;

        Base(const Base &) = default;

        virtual ~Base() = default;

        virtual void ready() = 0;

        virtual void update() = 0;

        virtual void draw() = 0;

        virtual float getRotationDegrees() = 0;

        virtual void setRotationDegrees(float degrees) = 0;
    };
}

#endif //INDIESTUDIO_BASE_HPP
