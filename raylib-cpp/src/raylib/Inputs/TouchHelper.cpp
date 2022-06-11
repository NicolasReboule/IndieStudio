/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** TouchHelper
*/

#include "raylib/Inputs/TouchHelper.hpp"

int raylib::TouchHelper::getTouchX()
{
    return GetTouchX();
}

int raylib::TouchHelper::getTouchY()
{
    return GetTouchY();
}

Vector2f raylib::TouchHelper::getTouchPosition(int index)
{
    return raylib::VectorHelper::toVectorf(GetTouchPosition(index));
}

int raylib::TouchHelper::getTouchPointId(int index)
{
    return GetTouchPointId(index);
}

int raylib::TouchHelper::getTouchPointCount()
{
    return GetTouchPointCount();
}

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

Vector2f raylib::TouchHelper::getGestureDragVector()
{
    return raylib::VectorHelper::toVectorf(GetGestureDragVector());
}

float raylib::TouchHelper::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2f raylib::TouchHelper::getGesturePinchVector()
{
    return raylib::VectorHelper::toVectorf(GetGesturePinchVector());
}

float raylib::TouchHelper::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}