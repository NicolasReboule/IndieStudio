/*
** EPITECH PROJECT, 2022
** CameraHelper.cpp
** File description:
** CameraHelper.cpp
*/

#include "raylib/Camera/CameraHelper.hpp"

void raylib::CameraHelper::setPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::CameraHelper::setAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::CameraHelper::setSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);
}

void raylib::CameraHelper::setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}
