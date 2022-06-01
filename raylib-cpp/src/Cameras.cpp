/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Camera
*/

#include "raylib/Cameras.hpp"

raylib::Cameras::Cameras()
{
}

raylib::Cameras::~Cameras()
{
}

// Camera System Functions (Module: rcamera)

void raylib::Cameras::setCameraMode(Camera camera, int mode)
{
    SetCameraMode(camera, mode);
}

void raylib::Cameras::updateCamera(Camera *camera)
{
    UpdateCamera(camera);
}

void raylib::Cameras::setCameraPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::Cameras::setCameraAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::Cameras::setCameraSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);

}

void raylib::Cameras::setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}
