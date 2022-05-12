/*
** EPITECH PROJECT, 2022
** camera.cpp
** File description:
** camera.cpp
*/

#include "camera.hpp"

raylib::Camera::Camera()
{
    Vector3 zero = {0, 0, 0};
    this->_position = zero;
    this->_target = zero;
    this->_up = zero;
    this->_fovy = 25.0f;
    this->_projection = CAMERA_ORTHOGRAPHIC;
    this->setMode(CAMERA_FREE);
}

raylib::Camera::Camera(Vector3 position, Vector3 target, Vector3 up, float fovy, int projection)
{
    this->_position = position;
    this->_target = target;
    this->_up = up;
    this->_fovy = fovy;
    this->_projection = projection;
    this->setMode(projection);
}

raylib::Camera::~Camera() {}

void raylib::Camera::update()
{
    Camera3D camera;
    camera.position = this->_position;
    camera.target = this->_target;
    camera.fovy = this->_fovy;
    camera.up = this->_up;
    camera.projection = this->_projection;
    UpdateCamera(&camera);
    this->_position = camera.position;
    this->_target = camera.target;
    this->_fovy = camera.fovy;
    this->_up = camera.up;
    this->_projection = camera.projection;
}

void raylib::Camera::setMode(int mode)
{
    Camera3D camera;
    camera.position = this->_position;
    camera.target = this->_target;
    camera.fovy = this->_fovy;
    camera.up = this->_up;
    camera.projection = this->_projection;
    SetCameraMode(camera, mode);
    this->_position = camera.position;
    this->_target = camera.target;
    this->_fovy = camera.fovy;
    this->_up = camera.up;
    this->_projection = camera.projection;
}

void raylib::Camera::setPosition(Vector3 position)
{
    this->_position = position;
}

void raylib::Camera::setTarget(Vector3 target)
{
    this->_target = target;
}

void raylib::Camera::setUp(Vector3 up)
{
    this->_up = up;
}

void raylib::Camera::setFovy(float fovy)
{
    this->_fovy = fovy;
}

void raylib::Camera::setProjection(int projection)
{
    this->_projection = projection;
}

void raylib::Camera::begin()
{
    Camera3D camera;
    camera.position = this->_position;
    camera.target = this->_target;
    camera.fovy = this->_fovy;
    camera.up = this->_up;
    camera.projection = this->_projection;
    BeginMode3D(camera);
    this->_position = camera.position;
    this->_target = camera.target;
    this->_fovy = camera.fovy;
    this->_up = camera.up;
    this->_projection = camera.projection;
}

void raylib::Camera::end()
{
    EndMode3D();
}




























