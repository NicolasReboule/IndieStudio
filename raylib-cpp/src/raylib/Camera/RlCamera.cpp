/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#include "raylib/Camera/RlCamera.hpp"

// Camera System Functions (Module: r_camera)

raylib::RlCamera::RlCamera() : _camera()
{
    this->_camera.position = { 10.0f, 10.0f, 10.0f }; // Camera position
    this->_camera.target = { 0.0f, 0.0f, 0.0f };      // Camera looking at point
    this->_camera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    this->_camera.fovy = 45.0f;                                // Camera field-of-view Y
    this->_camera.projection = CAMERA_PERSPECTIVE;
}

raylib::RlCamera::RlCamera(Vector3f position, Vector3f target, Vector3f up, float fovy, int projection) : _camera()
{
    this->_camera.position = raylib::VectorHelper::toRaylibVector(position); // Camera position
    this->_camera.target = raylib::VectorHelper::toRaylibVector(target);      // Camera looking at point
    this->_camera.up = raylib::VectorHelper::toRaylibVector(up);          // Camera up vector (rotation towards target)
    this->_camera.fovy = fovy;                                // Camera field-of-view Y
    this->_camera.projection = projection;
}

void raylib::RlCamera::update()
{
    UpdateCamera(&this->_camera);
}

Camera3D raylib::RlCamera::get()
{
    return this->_camera;
}

void raylib::RlCamera::setPosition(Vector3f position)
{
    this->_camera.position = raylib::VectorHelper::toRaylibVector(position);
}

void raylib::RlCamera::setTarget(Vector3f target)
{
    this->_camera.target = raylib::VectorHelper::toRaylibVector(target);
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
    return GetCameraMatrix(this->_camera);
}
