/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** TouchHelper
*/

#include "raylib/Inputs/TouchHelper.hpp"

int raylib::helper::input::TouchHelper::getTouchX()
{
    return GetTouchX();
}

int raylib::helper::input::TouchHelper::getTouchY()
{
    return GetTouchY();
}

Vector2f raylib::helper::input::TouchHelper::getTouchPosition(const int &index)
{
    return raylib::helper::VectorHelper::toVectorf(GetTouchPosition(index));
}

int raylib::helper::input::TouchHelper::getTouchPointId(const int &index)
{
    return GetTouchPointId(index);
}

int raylib::helper::input::TouchHelper::getTouchPointCount()
{
    return GetTouchPointCount();
}

void raylib::helper::input::TouchHelper::setGesturesEnabled(const unsigned int &flags)
{
    SetGesturesEnabled(flags);
}

bool raylib::helper::input::TouchHelper::isGestureDetected(const int &gesture)
{
    return IsGestureDetected(gesture);
}

int raylib::helper::input::TouchHelper::getGestureDetected()
{
    return GetGestureDetected();
}

float raylib::helper::input::TouchHelper::getGestureHoldDuration()
{
    return GetGestureHoldDuration();
}

Vector2f raylib::helper::input::TouchHelper::getGestureDragVector()
{
    return raylib::helper::VectorHelper::toVectorf(GetGestureDragVector());
}

float raylib::helper::input::TouchHelper::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2f raylib::helper::input::TouchHelper::getGesturePinchVector()
{
    return raylib::helper::VectorHelper::toVectorf(GetGesturePinchVector());
}

float raylib::helper::input::TouchHelper::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}