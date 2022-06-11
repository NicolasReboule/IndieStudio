/*
** EPITECH PROJECT, 2022
** WorldHelper.cpp
** FileHelper description:
** WorldHelper.cpp
*/

#include "raylib/Core/WorldHelper.hpp"

Vector2f raylib::WorldHelper::getWorldToScreen(Vector3f position, const RlCamera &camera)
{
    return raylib::VectorHelper::toVectorf(GetWorldToScreen(raylib::VectorHelper::toRaylibVector(position), camera.get()));
}

Vector2f raylib::WorldHelper::getWorldToScreenEx(Vector3f position, const RlCamera &camera, int width, int height)
{
    return raylib::VectorHelper::toVectorf(GetWorldToScreenEx(raylib::VectorHelper::toRaylibVector(position), camera.get(), width, height));
}

Vector2f raylib::WorldHelper::getWorldToScreen2D(Vector2f position, Camera2D camera)
{
    return raylib::VectorHelper::toVectorf(GetWorldToScreen2D(raylib::VectorHelper::toRaylibVector(position), camera));
}

Vector2f raylib::WorldHelper::getScreenToWorld2D(Vector2f position, Camera2D camera)
{
    return raylib::VectorHelper::toVectorf(GetScreenToWorld2D(raylib::VectorHelper::toRaylibVector(position), camera));
}
