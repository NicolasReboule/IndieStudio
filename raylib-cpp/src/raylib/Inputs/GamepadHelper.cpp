/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** GamepadHelper
*/

#include "raylib/Inputs/GamepadHelper.hpp"

//TODO: change this, for the event, need to save gamepad id, and register a gamepad handler
bool raylib::helper::input::GamepadHelper::isGamepadAvailable(const int &gamepad)
{
    return IsGamepadAvailable(gamepad);
}

std::string raylib::helper::input::GamepadHelper::getGamepadName(const int &gamepad)
{
    const char *name = GetGamepadName(gamepad);
    if (name == nullptr)
        return "Unknown";
    return name;
}

bool raylib::helper::input::GamepadHelper::isGamepadButtonPressed(const int &gamepad, const GamepadButton &button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool raylib::helper::input::GamepadHelper::isGamepadButtonDown(const int &gamepad, const GamepadButton &button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool raylib::helper::input::GamepadHelper::isGamepadButtonReleased(const int &gamepad, const GamepadButton &button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool raylib::helper::input::GamepadHelper::isGamepadButtonUp(const int &gamepad, const GamepadButton &button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int raylib::helper::input::GamepadHelper::getGamepadButtonPressed()
{
    return GetGamepadButtonPressed();
}

int raylib::helper::input::GamepadHelper::getGamepadAxisCount(const int &gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float raylib::helper::input::GamepadHelper::getGamepadAxisMovement(const int &gamepad, const GamepadAxis &axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib::helper::input::GamepadHelper::setGamepadMappings(const std::string &mappings)
{
    return SetGamepadMappings(mappings.c_str());
}
