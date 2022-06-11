/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#include "raylib/Camera/RlCamera.hpp"

raylib::RlCamera::RlCamera(const Vector3f &position, const Vector3f &target, const Vector3f &up, const float &fovy, const CameraProjection &projection) : _camera()
{
    this->_camera.position = raylib::VectorHelper::toRaylibVector(position);
    this->_camera.target = raylib::VectorHelper::toRaylibVector(target);
    this->_camera.up = raylib::VectorHelper::toRaylibVector(up);
    this->_camera.fovy = fovy;
    this->_camera.projection = projection;
}

void raylib::RlCamera::update()
{
    UpdateCamera(&this->_camera);
}

const Camera3D &raylib::RlCamera::get() const
{
    return this->_camera;
}

void raylib::RlCamera::setPosition(const Vector3f &position)
{
    this->_camera.position = raylib::VectorHelper::toRaylibVector(position);
}

void raylib::RlCamera::setTarget(const Vector3f &target)
{
    this->_camera.target = raylib::VectorHelper::toRaylibVector(target);
}

Matrix raylib::RlCamera::geMatrix()
{
    return GetCameraMatrix(this->_camera);
}
