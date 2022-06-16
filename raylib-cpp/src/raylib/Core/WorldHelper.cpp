/*
** EPITECH PROJECT, 2022
** WorldHelper.cpp
** FileHelper description:
** WorldHelper.cpp
*/

#include "raylib/Core/WorldHelper.hpp"

Vector2f raylib::helper::WorldHelper::getWorldToScreen(const Vector3f &position, const RlCamera &camera)
{
    return raylib::helper::VectorHelper::toVectorf(GetWorldToScreen(raylib::helper::VectorHelper::toRaylibVector(position), camera.get()));
}

Vector2f raylib::helper::WorldHelper::getWorldToScreenEx(const Vector3f &position, const RlCamera &camera, int width, int height)
{
    return raylib::helper::VectorHelper::toVectorf(GetWorldToScreenEx(raylib::helper::VectorHelper::toRaylibVector(position), camera.get(), width, height));
}

Vector2f raylib::helper::WorldHelper::getWorldToScreen2D(const Vector2f &position, const Camera2D &camera)
{
    return raylib::helper::VectorHelper::toVectorf(GetWorldToScreen2D(raylib::helper::VectorHelper::toRaylibVector(position), camera));
}

Vector2f raylib::helper::WorldHelper::getScreenToWorld2D(const Vector2f &position, const Camera2D &camera)
{
    return raylib::helper::VectorHelper::toVectorf(GetScreenToWorld2D(raylib::helper::VectorHelper::toRaylibVector(position), camera));
}
