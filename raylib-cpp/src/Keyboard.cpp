/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Keyboard
*/

#include "raylib/Keyboard.hpp"

raylib::Keyboard::Keyboard()
{
}

raylib::Keyboard::~Keyboard()
{
}

// Input-related functions: keyboard

bool raylib::Keyboard::isKeyPressed(int key)
{
    return IsKeyPressed(key);
}

bool raylib::Keyboard::isKeyDown(int key)
{
    return IsKeyDown(key);
}

bool raylib::Keyboard::isKeyReleased(int key)
{
    return IsKeyReleased(key);
}

bool raylib::Keyboard::isKeyUp(int key)
{
    return IsKeyUp(key);
}

void raylib::Keyboard::setExitKey(int key)
{
    SetExitKey(key);
}

int raylib::Keyboard::getKeyPressed()
{
    return GetKeyPressed();
}

int raylib::Keyboard::getCharPressed()
{
    return GetCharPressed();
}

