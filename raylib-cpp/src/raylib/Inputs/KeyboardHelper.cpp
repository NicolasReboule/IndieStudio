/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** KeyboardHelper
*/

#include "raylib/Inputs/KeyboardHelper.hpp"

bool raylib::input::KeyboardHelper::isKeyPressed(const int &key)
{
    return IsKeyPressed(key);
}

bool raylib::input::KeyboardHelper::isKeyDown(const int &key)
{
    return IsKeyDown(key);
}

bool raylib::input::KeyboardHelper::isKeyReleased(const int &key)
{
    return IsKeyReleased(key);
}

bool raylib::input::KeyboardHelper::isKeyUp(const int &key)
{
    return IsKeyUp(key);
}

void raylib::input::KeyboardHelper::setExitKey(const int &key)
{
    SetExitKey(key);
}

int raylib::input::KeyboardHelper::getKeyPressed()
{
    return GetKeyPressed();
}

int raylib::input::KeyboardHelper::getCharPressed()
{
    return GetCharPressed();
}

std::string raylib::input::KeyboardHelper::getKeyName(const int &key, const int &scancode)
{
    return glfwGetKeyName(key, scancode);
}
