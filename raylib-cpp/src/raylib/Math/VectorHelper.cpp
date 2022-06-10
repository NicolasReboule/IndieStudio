/*
** EPITECH PROJECT, 2022
** VectorHelper.cpp
** File description:
** VectorHelper.cpp
*/

#include "raylib/Math/VectorHelper.hpp"

::Vector2 raylib::VectorHelper::toRaylibVector(Vector2f vector)
{
    ::Vector2 rlVector;
    rlVector.x = vector.x;
    rlVector.y = vector.y;
    return rlVector;
}

::Vector3 raylib::VectorHelper::toRaylibVector(Vector3f vector)
{
    ::Vector3 rlVector;
    rlVector.x = vector.x;
    rlVector.y = vector.y;
    rlVector.z = vector.z;
    return rlVector;
}

Vector2f raylib::VectorHelper::toVectorf(::Vector2 rlvector)
{
    return {rlvector.x, rlvector.y};
}

Vector3f raylib::VectorHelper::toVectorf(::Vector3 rlvector)
{
    return {rlvector.x, rlvector.y, rlvector.z};
}
