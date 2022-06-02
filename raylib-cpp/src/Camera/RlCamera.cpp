/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Camera
*/

#include "raylib/Camera/RlCamera.hpp"

// Camera System Functions (Module: rcamera)

void raylib::RlCamera::setCameraMode(Camera camera, int mode)
{
    SetCameraMode(camera, mode);
}

void raylib::RlCamera::updateCamera(Camera *camera)
{
    UpdateCamera(camera);
}

void raylib::RlCamera::setCameraPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::RlCamera::setCameraAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::RlCamera::setCameraSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);

}

void raylib::RlCamera::setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}

Matrix raylib::RlCamera::getCameraMatrix(Camera camera)
{
    return GetCameraMatrix(camera);
}

Matrix raylib::RlCamera::getCameraMatrix2D(Camera2D camera)
{
    return GetCameraMatrix2D(camera);
}

