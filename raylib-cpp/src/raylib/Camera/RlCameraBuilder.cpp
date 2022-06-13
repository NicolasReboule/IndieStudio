/*
** EPITECH PROJECT, 2022
** RlCameraBuilder.cpp
** File description:
** RlCameraBuilder.cpp
*/

#include "raylib/Camera/RlCameraBuilder.hpp"

raylib::RlCameraBuilder::RlCameraBuilder() : _position({0, 10, 10}), _target({0, 0, 0}), _up({0, 1, 0})
{
    this->_fovy = 45.0f;
    this->_projection = CAMERA_PERSPECTIVE;
    this->_cameraMode = CAMERA_FREE;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setPosition(const Vector3f &position)
{
    _position = position;
    return *this;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setTarget(const Vector3f &target)
{
    _target = target;
    return *this;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setUp(const Vector3f &up)
{
    _up = up;
    return *this;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setFovy(float fovy)
{
    _fovy = fovy;
    return *this;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setProjection(CameraProjection projection)
{
    _projection = projection;
    return *this;
}

raylib::RlCameraBuilder &raylib::RlCameraBuilder::setCameraMode(CameraMode cameraMode)
{
    _cameraMode = cameraMode;
    return *this;
}

raylib::RlCamera raylib::RlCameraBuilder::build() noexcept
{
    return RlCamera(this->_position, this->_target, this->_up, this->_fovy, this->_projection, this->_cameraMode);
}
