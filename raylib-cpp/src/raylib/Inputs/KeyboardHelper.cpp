/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** KeyboardHelper
*/

#include "raylib/Inputs/KeyboardHelper.hpp"

bool raylib::helper::input::KeyboardHelper::isKeyPressed(const KeyboardKey &key)
{
    return IsKeyPressed(key);
}

bool raylib::helper::input::KeyboardHelper::isKeyDown(const KeyboardKey &key)
{
    return IsKeyDown(key);
}

bool raylib::helper::input::KeyboardHelper::isKeyReleased(const KeyboardKey &key)
{
    return IsKeyReleased(key);
}

bool raylib::helper::input::KeyboardHelper::isKeyUp(const KeyboardKey &key)
{
    return IsKeyUp(key);
}

void raylib::helper::input::KeyboardHelper::setExitKey(const KeyboardKey &key)
{
    SetExitKey(key);
}

int raylib::helper::input::KeyboardHelper::getKeyPressed()
{
    return GetKeyPressed();
}

int raylib::helper::input::KeyboardHelper::getCharPressed()
{
    return GetCharPressed();
}

std::vector<KeyboardKey> raylib::helper::input::KeyboardHelper::getPressedKeys()
{
    std::vector<KeyboardKey> pressedKeys;
    do {
        pressedKeys.push_back(static_cast<KeyboardKey>(GetKeyPressed()));
    } while (pressedKeys.back() != KEY_NULL);
    return pressedKeys;
}

std::vector<int> raylib::helper::input::KeyboardHelper::getPressedChars()
{
    std::vector<int> pressedChars;
    do {
        pressedChars.push_back(GetCharPressed());
    } while (pressedChars.back() != '\0');
    return pressedChars;
}

std::string raylib::helper::input::KeyboardHelper::getKeyName(const int &key, const int &scancode)
{
    return glfwGetKeyName(key, scancode);
}
