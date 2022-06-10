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

Vector2f raylib::MouseHelper::getMousePosition()
{
    return raylib::VectorHelper::toVectorf(GetMousePosition());
}

Vector2f raylib::MouseHelper::getMouseDelta()
{
    return raylib::VectorHelper::toVectorf(GetMouseDelta());
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

Ray raylib::MouseHelper::getMouseRay(Vector2f mousePosition, Camera camera)
{
    return GetMouseRay(raylib::VectorHelper::toRaylibVector(mousePosition), camera);
}
