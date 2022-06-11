/*
** EPITECH PROJECT, 2022
** VectorHelper.hpp
** File description:
** VectorHelper.hpp
*/

#ifndef INDIESTUDIO_VECTORHELPER_HPP
#define INDIESTUDIO_VECTORHELPER_HPP

#include "Vector.hpp"
#include <raylib.h>

namespace raylib {
    class VectorHelper {
    public:
        static ::Vector2 toRaylibVector(Vector2f vector);
        static ::Vector3 toRaylibVector(Vector3f vector);
        static ::Vector4 toRaylibVector(Vector4f vector);

        static Vector2f toVectorf(::Vector2 vector);
        static Vector3f toVectorf(::Vector3 vector);
        static Vector4f toVectorf(::Vector4 vector);
    };
}
#endif //INDIESTUDIO_VECTORHELPER_HPP
