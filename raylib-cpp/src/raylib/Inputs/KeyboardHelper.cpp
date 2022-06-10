/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** KeyboardHelper
*/

#include "raylib/Inputs/KeyboardHelper.hpp"

// Input-related functions: keyboard

bool raylib::KeyboardHelper::isKeyPressed(int key)
{
    return IsKeyPressed(key);
}

bool raylib::KeyboardHelper::isKeyDown(int key)
{
    return IsKeyDown(key);
}

bool raylib::KeyboardHelper::isKeyReleased(int key)
{
    return IsKeyReleased(key);
}

bool raylib::KeyboardHelper::isKeyUp(int key)
{
    return IsKeyUp(key);
}

void raylib::KeyboardHelper::setExitKey(int key)
{
    SetExitKey(key);
}

int raylib::KeyboardHelper::getKeyPressed()
{
    return GetKeyPressed();
}

int raylib::KeyboardHelper::getCharPressed()
{
    return GetCharPressed();
}

