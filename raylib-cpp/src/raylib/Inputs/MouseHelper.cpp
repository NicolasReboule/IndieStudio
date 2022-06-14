/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** MouseHelper
*/

#include "raylib/Inputs/MouseHelper.hpp"

bool raylib::input::MouseHelper::isMouseButtonPressed(const MouseButton &button)
{
    return IsMouseButtonPressed(button);
}

bool raylib::input::MouseHelper::isMouseButtonDown(const MouseButton &button)
{
    return IsMouseButtonDown(button);
}

bool raylib::input::MouseHelper::isMouseButtonReleased(const MouseButton &button)
{
    return IsMouseButtonReleased(button);
}

bool raylib::input::MouseHelper::isMouseButtonUp(const MouseButton &button)
{
    return IsMouseButtonUp(button);
}

int raylib::input::MouseHelper::getMouseX()
{
    return GetMouseX();
}

int raylib::input::MouseHelper::getMouseY()
{
    return GetMouseY();
}

Vector2f raylib::input::MouseHelper::getMousePosition()
{
    return raylib::VectorHelper::toVectorf(GetMousePosition());
}

Vector2f raylib::input::MouseHelper::getMouseDelta()
{
    return raylib::VectorHelper::toVectorf(GetMouseDelta());
}

void raylib::input::MouseHelper::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

void raylib::input::MouseHelper::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void raylib::input::MouseHelper::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float raylib::input::MouseHelper::getMouseWheelMove()
{
    return GetMouseWheelMove();
}

void raylib::input::MouseHelper::setMouseCursor(const MouseCursor &cursor)
{
    SetMouseCursor(cursor);
}

Ray raylib::input::MouseHelper::getMouseRay(const Vector2f &mousePosition, const RlCamera &camera)
{
    return GetMouseRay(raylib::VectorHelper::toRaylibVector(mousePosition), camera.get());
}
