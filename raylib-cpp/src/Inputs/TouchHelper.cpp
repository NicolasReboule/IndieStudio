/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** TouchHelper
*/

#include "raylib/Inputs/TouchHelper.hpp"

// Input-related functions: touch

int raylib::TouchHelper::getTouchX()
{
    return GetTouchX();
}

int raylib::TouchHelper::getTouchY()
{
    return GetTouchY();
}

Vector2 raylib::TouchHelper::getTouchPosition(int index)
{
    return GetTouchPosition(index);
}

int raylib::TouchHelper::getTouchPointId(int index)
{
    return GetTouchPointId(index);
}

int raylib::TouchHelper::getTouchPointCount()
{
    return GetTouchPointCount();
}

// Gestures and TouchHelper Handling Functions (Module: rgestures)

void raylib::TouchHelper::setGesturesEnabled(unsigned int flags)
{
    SetGesturesEnabled(flags);
}

bool raylib::TouchHelper::isGestureDetected(int gesture)
{
    return IsGestureDetected(gesture);
}

int raylib::TouchHelper::getGestureDetected()
{
    return GetGestureDetected();
}

float raylib::TouchHelper::getGestureHoldDuration()
{
    return GetGestureHoldDuration();
}

Vector2 raylib::TouchHelper::getGestureDragVector()
{
    return GetGestureDragVector();
}

float raylib::TouchHelper::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2 raylib::TouchHelper::getGesturePinchVector()
{
    return GetGesturePinchVector();
}

float raylib::TouchHelper::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}