/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Gamepad
*/

#include "raylib/Gamepad.hpp"

raylib::Gamepad::Gamepad()
{
}

raylib::Gamepad::~Gamepad()
{
}

// Input-related functions: gamepads

bool raylib::Gamepad::isGamepadAvailable(int gamepad)
{
    return IsGamepadAvailable(gamepad);
}

const std::string raylib::Gamepad::getGamepadName(int gamepad)
{
    return std::string(GetGamepadName(gamepad));
}

bool raylib::Gamepad::isGamepadButtonPressed(int gamepad, int button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool raylib::Gamepad::isGamepadButtonDown(int gamepad, int button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool raylib::Gamepad::isGamepadButtonReleased(int gamepad, int button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool raylib::Gamepad::isGamepadButtonUp(int gamepad, int button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int raylib::Gamepad::getGamepadButtonPressed()
{
    return getGamepadButtonPressed();
}

int raylib::Gamepad::getGamepadAxisCount(int gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float raylib::Gamepad::getGamepadAxisMovement(int gamepad, int axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib::Gamepad::setGamepadMappings(const std::string &mappings)
{
    return SetGamepadMappings(mappings.c_str());
}
