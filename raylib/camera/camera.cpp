/*
** EPITECH PROJECT, 2022
** camera.cpp
** File description:
** camera.cpp
*/

#include "camera.hpp"

raylib::Camera::Camera(Vector3 position, Vector3 target, Vector3 up, float fovy, int projection)
{
    this->_camera.position = position;
    this->_camera.target = target;
    this->_camera.up = up;
    this->_camera.fovy = fovy;
    this->_camera.projection = projection;
}

raylib::Camera::~Camera() {}

Camera3D raylib::Camera::get()
{
    return this->_camera;
}

void raylib::Camera::update()
{
    UpdateCamera(&this->_camera);
}

void raylib::Camera::setMode(int mode)
{
    SetCameraMode(this->_camera, mode);
}

void raylib::Camera::setPosition(Vector3 position)
{
    this->_camera.position = position;
}

void raylib::Camera::setTarget(Vector3 target)
{
    this->_camera.target = target;
}

void raylib::Camera::setFovy(float fovy)
{
    this->_camera.fovy = fovy;
}

void raylib::Camera::setProjection(int projection)
{
    this->_camera.projection = projection;
}

void raylib::Camera::begin()
{
    BeginMode3D(this->_camera);
}

void raylib::Camera::end()
{
    EndMode3D();
}


























