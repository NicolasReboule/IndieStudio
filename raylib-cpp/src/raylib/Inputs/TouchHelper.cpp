/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** TouchHelper
*/

#include "raylib/Inputs/TouchHelper.hpp"

int raylib::input::TouchHelper::getTouchX()
{
    return GetTouchX();
}

int raylib::input::TouchHelper::getTouchY()
{
    return GetTouchY();
}

Vector2f raylib::input::TouchHelper::getTouchPosition(const int &index)
{
    return raylib::VectorHelper::toVectorf(GetTouchPosition(index));
}

int raylib::input::TouchHelper::getTouchPointId(const int &index)
{
    return GetTouchPointId(index);
}

int raylib::input::TouchHelper::getTouchPointCount()
{
    return GetTouchPointCount();
}

void raylib::input::TouchHelper::setGesturesEnabled(const unsigned int &flags)
{
    SetGesturesEnabled(flags);
}

bool raylib::input::TouchHelper::isGestureDetected(const int &gesture)
{
    return IsGestureDetected(gesture);
}

int raylib::input::TouchHelper::getGestureDetected()
{
    return GetGestureDetected();
}

float raylib::input::TouchHelper::getGestureHoldDuration()
{
    return GetGestureHoldDuration();
}

Vector2f raylib::input::TouchHelper::getGestureDragVector()
{
    return raylib::VectorHelper::toVectorf(GetGestureDragVector());
}

float raylib::input::TouchHelper::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2f raylib::input::TouchHelper::getGesturePinchVector()
{
    return raylib::VectorHelper::toVectorf(GetGesturePinchVector());
}

float raylib::input::TouchHelper::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}