/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Touch
*/

#include "raylib/Touch.hpp"

raylib::Touch::Touch()
{
}

raylib::Touch::~Touch()
{
}

// Input-related functions: touch

int raylib::Touch::getTouchX()
{
    return GetTouchX();
}

int raylib::Touch::getTouchY()
{
    return GetTouchY();
}

Vector2 raylib::Touch::getTouchPosition(int index)
{
    return GetTouchPosition(index);
}

int raylib::Touch::getTouchPointId(int index)
{
    return GetTouchPointId(index);
}

int raylib::Touch::getTouchPointCount()
{
    return GetTouchPointCount();
}

// Gestures and Touch Handling Functions (Module: rgestures)

void raylib::Touch::setGesturesEnabled(unsigned int flags)
{
    SetGesturesEnabled(flags);
}

bool raylib::Touch::isGestureDetected(int gesture)
{
    return IsGestureDetected(gesture);
}

int raylib::Touch::getGestureDetected()
{
    return GetGestureDetected();
}

float raylib::Touch::getGestureHoldDuration()
{
    return GetGestureHoldDuration();
}

Vector2 raylib::Touch::getGestureDragVector()
{
    return GetGestureDragVector();
}

float raylib::Touch::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2 raylib::Touch::getGesturePinchVector()
{
    return GetGesturePinchVector();
}

float raylib::Touch::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}