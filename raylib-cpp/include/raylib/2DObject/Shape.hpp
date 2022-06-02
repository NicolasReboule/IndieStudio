/*
** EPITECH PROJECT, 2022
** Shape.hpp
** File description:
** Shape.hpp
*/

#ifndef INDIESTUDIO_SHAPE_HPP
#define INDIESTUDIO_SHAPE_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class Shape {
    public:

        // Set texture and rectangle to be used on shapes drawing
        // NOTE: It can be useful when using basic shapes and one single font,
        // defining a font char white rectangle would allow drawing everything in a single draw call
        void setShapesTexture(Texture2D texture, Rectangle source);

    private:
    };
}

#endif //INDIESTUDIO_SHAPE_HPP
