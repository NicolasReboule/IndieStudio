/*
** EPITECH PROJECT, 2022
** WorldHelper.cpp
** FileHelper description:
** WorldHelper.cpp
*/

#include "raylib/Core/WorldHelper.hpp"

// Screen-space-related functions

Vector2 raylib::WorldHelper::getWorldToScreen(Vector3 position, Camera camera)
{
    return GetWorldToScreen(position, camera);
}

Vector2 raylib::WorldHelper::getWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
{
    return GetWorldToScreenEx(position, camera, width, height);
}

Vector2 raylib::WorldHelper::getWorldToScreen2D(Vector2 position, Camera2D camera)
{
    return GetWorldToScreen2D(position, camera);
}

Vector2 raylib::WorldHelper::getScreenToWorld2D(Vector2 position, Camera2D camera)
{
    return GetScreenToWorld2D(position, camera);
}