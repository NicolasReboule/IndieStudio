/*
** EPITECH PROJECT, 2022
** CameraHelper.cpp
** File description:
** CameraHelper.cpp
*/

#include "raylib/Camera/CameraHelper.hpp"

void raylib::helper::CameraHelper::setPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::helper::CameraHelper::setAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::helper::CameraHelper::setSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);
}

void raylib::helper::CameraHelper::setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}

void raylib::helper::CameraHelper::setCameraMode(const raylib::RlCamera &camera, const CameraMode &mode)
{
    SetCameraMode(camera.get(), mode);
}
