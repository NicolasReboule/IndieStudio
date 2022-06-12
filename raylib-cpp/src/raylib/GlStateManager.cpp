/*
** EPITECH PROJECT, 2022
** GlStateManager.cpp
** File description:
** GlStateManager.cpp
*/

#include "raylib/GlStateManager.hpp"

void raylib::GlStateManager::pushMatrix()
{
    rlPushMatrix();
}

void raylib::GlStateManager::popMatrix()
{
    rlPopMatrix();
}

void raylib::GlStateManager::translate(const Vector3f &translation)
{
    rlTranslatef(translation.x, translation.y, translation.z);
}

void raylib::GlStateManager::rotate(const Vector3f &rotation)
{
    rlRotatef(rotation.x, 1.0f, 0.0f, 0.0f);
}
