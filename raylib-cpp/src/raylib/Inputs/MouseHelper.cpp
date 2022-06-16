/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** MouseHelper
*/

#include "raylib/Inputs/MouseHelper.hpp"

bool raylib::helper::input::MouseHelper::isMouseButtonPressed(const MouseButton &button)
{
    return IsMouseButtonPressed(button);
}

bool raylib::helper::input::MouseHelper::isMouseButtonDown(const MouseButton &button)
{
    return IsMouseButtonDown(button);
}

bool raylib::helper::input::MouseHelper::isMouseButtonReleased(const MouseButton &button)
{
    return IsMouseButtonReleased(button);
}

bool raylib::helper::input::MouseHelper::isMouseButtonUp(const MouseButton &button)
{
    return IsMouseButtonUp(button);
}

int raylib::helper::input::MouseHelper::getMouseX()
{
    return GetMouseX();
}

int raylib::helper::input::MouseHelper::getMouseY()
{
    return GetMouseY();
}

Vector2f raylib::helper::input::MouseHelper::getMousePosition()
{
    return raylib::helper::VectorHelper::toVectorf(GetMousePosition());
}

Vector2f raylib::helper::input::MouseHelper::getMouseDelta()
{
    return raylib::helper::VectorHelper::toVectorf(GetMouseDelta());
}

void raylib::helper::input::MouseHelper::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

void raylib::helper::input::MouseHelper::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void raylib::helper::input::MouseHelper::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float raylib::helper::input::MouseHelper::getMouseWheelMove()
{
    return GetMouseWheelMove();
}

void raylib::helper::input::MouseHelper::setMouseCursor(const MouseCursor &cursor)
{
    SetMouseCursor(cursor);
}

Ray raylib::helper::input::MouseHelper::getMouseRay(const Vector2f &mousePosition, const RlCamera &camera)
{
    return GetMouseRay(raylib::helper::VectorHelper::toRaylibVector(mousePosition), camera.get());
}
