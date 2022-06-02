/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Mouse
*/

#include "raylib/Inputs/Mouse.hpp"

// Input-related functions: mouse

bool raylib::Mouse::isMouseButtonPressed(int button)
{
    return IsMouseButtonPressed(button);
}

bool raylib::Mouse::isMouseButtonDown(int button)
{
    return IsMouseButtonDown(button);
}

bool raylib::Mouse::isMouseButtonReleased(int button)
{
    return IsMouseButtonReleased(button);
}

bool raylib::Mouse::isMouseButtonUp(int button)
{
    return IsMouseButtonUp(button);
}

int raylib::Mouse::getMouseX()
{
    return GetMouseX();
}

int raylib::Mouse::getMouseY()
{
    return GetMouseY();
}

Vector2 raylib::Mouse::getMousePosition()
{
    return GetMousePosition();
}

Vector2 raylib::Mouse::getMouseDelta()
{
    return GetMouseDelta();
}

void raylib::Mouse::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

void raylib::Mouse::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void raylib::Mouse::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float raylib::Mouse::getMouseWheelMove()
{
    return GetMouseWheelMove();
}

void raylib::Mouse::setMouseCursor(int cursor)
{
    SetMouseCursor(cursor);
}

Ray raylib::Mouse::getMouseRay(Vector2 mousePosition, Camera camera)
{
    return GetMouseRay(mousePosition, camera);
}
