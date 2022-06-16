/*
** EPITECH PROJECT, 2022
** RlCameraBuilder.cpp
** File description:
** RlCameraBuilder.cpp
*/

#include "raylib/Camera/RlCameraBuilder.hpp"

raylib::builder::RlCameraBuilder::RlCameraBuilder() : _position({0, 10, 10}), _target({0, 0, 0}), _lookingPoint({0, 1, 0})
{
    this->_fovy = 45.0f;
    this->_projection = CAMERA_PERSPECTIVE;
    this->_cameraMode = CAMERA_FREE;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setPosition(const Vector3f &position)
{
    _position = position;
    return *this;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setTarget(const Vector3f &target)
{
    _target = target;
    return *this;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setLookingPoint(const Vector3f &lookingPoint)
{
    _lookingPoint = lookingPoint;
    return *this;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setFovy(float fovy)
{
    _fovy = fovy;
    return *this;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setProjection(CameraProjection projection)
{
    _projection = projection;
    return *this;
}

raylib::builder::RlCameraBuilder &raylib::builder::RlCameraBuilder::setCameraMode(CameraMode cameraMode)
{
    _cameraMode = cameraMode;
    return *this;
}

raylib::RlCamera raylib::builder::RlCameraBuilder::build() noexcept
{
    return RlCamera(this->_position, this->_target, this->_lookingPoint, this->_fovy, this->_projection, this->_cameraMode);
}
