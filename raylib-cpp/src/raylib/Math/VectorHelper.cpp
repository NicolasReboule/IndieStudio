/*
** EPITECH PROJECT, 2022
** VectorHelper.cpp
** File description:
** VectorHelper.cpp
*/

#include "raylib/Math/VectorHelper.hpp"

::Vector2 raylib::helper::VectorHelper::toRaylibVector(const Vector2f &vector)
{
    ::Vector2 rlVector;
    rlVector.x = vector.x;
    rlVector.y = vector.y;
    return rlVector;
}

::Vector3 raylib::helper::VectorHelper::toRaylibVector(const Vector3f &vector)
{
    ::Vector3 rlVector;
    rlVector.x = vector.x;
    rlVector.y = vector.y;
    rlVector.z = vector.z;
    return rlVector;
}

::Vector4 raylib::helper::VectorHelper::toRaylibVector(const Vector4f &vector)
{
    ::Vector4 rlVector;
    rlVector.x = vector.x;
    rlVector.y = vector.y;
    rlVector.z = vector.z;
    rlVector.w = vector.w;
    return rlVector;
}

Vector2f raylib::helper::VectorHelper::toVectorf(const ::Vector2 &rlvector)
{
    return {rlvector.x, rlvector.y};
}

Vector3f raylib::helper::VectorHelper::toVectorf(const ::Vector3 &rlvector)
{
    return {rlvector.x, rlvector.y, rlvector.z};
}

Vector4f raylib::helper::VectorHelper::toVectorf(const ::Vector4 &vector)
{
    return {vector.x, vector.y, vector.z, vector.w};
}
