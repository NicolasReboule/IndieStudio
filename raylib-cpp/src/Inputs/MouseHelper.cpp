/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** MouseHelper
*/

#include "raylib/Inputs/MouseHelper.hpp"

// Input-related functions: mouse

bool raylib::MouseHelper::isMouseButtonPressed(int button)
{
    return IsMouseButtonPressed(button);
}

bool raylib::MouseHelper::isMouseButtonDown(int button)
{
    return IsMouseButtonDown(button);
}

bool raylib::MouseHelper::isMouseButtonReleased(int button)
{
    return IsMouseButtonReleased(button);
}

bool raylib::MouseHelper::isMouseButtonUp(int button)
{
    return IsMouseButtonUp(button);
}

int raylib::MouseHelper::getMouseX()
{
    return GetMouseX();
}

int raylib::MouseHelper::getMouseY()
{
    return GetMouseY();
}

Vector2 raylib::MouseHelper::getMousePosition()
{
    return GetMousePosition();
}

Vector2 raylib::MouseHelper::getMouseDelta()
{
    return GetMouseDelta();
}

void raylib::MouseHelper::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

void raylib::MouseHelper::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void raylib::MouseHelper::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float raylib::MouseHelper::getMouseWheelMove()
{
    return GetMouseWheelMove();
}

void raylib::MouseHelper::setMouseCursor(int cursor)
{
    SetMouseCursor(cursor);
}

Ray raylib::MouseHelper::getMouseRay(Vector2 mousePosition, Camera camera)
{
    return GetMouseRay(mousePosition, camera);
}
