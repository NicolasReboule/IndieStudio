/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#include "raylib/Camera/RlCamera.hpp"

// Camera System Functions (Module: rcamera)

raylib::RlCamera::RlCamera()
{
    this->camera.position = (Vector3){ 10.0f, 10.0f, 10.0f }; // Camera position
    this->camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    this->camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    this->camera.fovy = 45.0f;                                // Camera field-of-view Y
    this->camera.projection = CAMERA_PERSPECTIVE;
}

raylib::RlCamera::RlCamera(Vector3 position, Vector3 target, Vector3 up, float fovy, int projection)
{
    this->camera.position = position; // Camera position
    this->camera.target = target;      // Camera looking at point
    this->camera.up = up;          // Camera up vector (rotation towards target)
    this->camera.fovy = fovy;                                // Camera field-of-view Y
    this->camera.projection = projection;
}

void raylib::RlCamera::update()
{
    UpdateCamera(&this->camera);
}

Camera3D raylib::RlCamera::get()
{
    return this->camera;
}

void raylib::RlCamera::setPosition(Vector3 position)
{
    this->camera.position = position;
}

void raylib::RlCamera::setTarget(Vector3 target)
{
    this->camera.target = target;
}

void raylib::RlCamera::setPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::RlCamera::setAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::RlCamera::setSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);

}

void raylib::RlCamera::setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}

Matrix raylib::RlCamera::geMatrix()
{
    return GetCameraMatrix(this->camera);
}
