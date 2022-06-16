/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** KeyboardHelper
*/

#include "raylib/Inputs/KeyboardHelper.hpp"

bool raylib::input::KeyboardHelper::isKeyPressed(const KeyboardKey &key)
{
    return IsKeyPressed(key);
}

bool raylib::input::KeyboardHelper::isKeyDown(const KeyboardKey &key)
{
    return IsKeyDown(key);
}

bool raylib::input::KeyboardHelper::isKeyReleased(const KeyboardKey &key)
{
    return IsKeyReleased(key);
}

bool raylib::input::KeyboardHelper::isKeyUp(const KeyboardKey &key)
{
    return IsKeyUp(key);
}

void raylib::input::KeyboardHelper::setExitKey(const KeyboardKey &key)
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

std::vector<KeyboardKey> raylib::input::KeyboardHelper::getPressedKeys()
{
    std::vector<KeyboardKey> pressedKeys;
    do {
        pressedKeys.push_back(static_cast<KeyboardKey>(GetKeyPressed()));
    } while (pressedKeys.back() != KEY_NULL);
    return pressedKeys;
}

std::vector<int> raylib::input::KeyboardHelper::getPressedChars()
{
    std::vector<int> pressedChars;
    do {
        pressedChars.push_back(GetCharPressed());
    } while (pressedChars.back() != '\0');
    return pressedChars;
}

std::string raylib::input::KeyboardHelper::getKeyName(const int &key, const int &scancode)
{
    return glfwGetKeyName(key, scancode);
}
