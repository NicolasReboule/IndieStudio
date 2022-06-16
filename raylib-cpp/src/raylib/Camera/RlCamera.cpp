/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#include "raylib/Camera/RlCamera.hpp"
#include "raylib/Camera/CameraHelper.hpp"
#include "raylib/Window/RlWindow.hpp"

raylib::RlCamera::RlCamera(const Vector3f &position, const Vector3f &target, const Vector3f &lookingPoint,
const float &fovy, const CameraProjection &projection, const CameraMode &mode)
    : _camera(), _position(position), _target(target), _lookingPoint(lookingPoint), _fovy(fovy), _projection(projection), _cameraMode(mode)
{
    this->_camera.position = {position.x, position.y, position.z};
    this->_camera.target = {target.x, target.y, target.z};
    this->_camera.up = {lookingPoint.x, lookingPoint.y, lookingPoint.z};
    this->_camera.fovy = fovy;
    this->_camera.projection = projection;
    this->_mode = mode;
    auto &window = raylib::window::RlWindow::getInstance();
    if (!window->isIsCreated())
        throw ex::CameraException("The window has not been created yet, can't set the camera mode. Please create the window first.");
    raylib::helper::CameraHelper::setCameraMode(*this, this->_mode);
}

void raylib::RlCamera::update()
{
    UpdateCamera(&this->_camera);
    //TODO: handle custom movement keys
}

void raylib::RlCamera::reset()
{
    this->_camera.position = raylib::helper::VectorHelper::toRaylibVector(this->_position);
    this->_camera.target = raylib::helper::VectorHelper::toRaylibVector(this->_target);
    this->_camera.up = raylib::helper::VectorHelper::toRaylibVector(this->_lookingPoint);
    this->_camera.fovy = this->_fovy;
    this->_camera.projection = this->_projection;
    this->_mode = this->_cameraMode;
    raylib::helper::CameraHelper::setCameraMode(*this, this->_mode);
}

void raylib::RlCamera::setPosition(const Vector3f &position)
{
    this->_camera.position = {position.x, position.y, position.z};
}

void raylib::RlCamera::setTarget(const Vector3f &target)
{
    this->_camera.target = {target.x, target.y, target.z};
}

void raylib::RlCamera::setProjection(const CameraProjection &projection)
{
    this->_camera.projection = projection;
}

void raylib::RlCamera::setFov(const float &fovy)
{
    this->_camera.fovy = fovy;
}

void raylib::RlCamera::setCameraMode(const CameraMode &mode)
{
    this->_mode = mode;
    raylib::helper::CameraHelper::setCameraMode(*this, this->_mode);
}

const Camera3D &raylib::RlCamera::get() const
{
    return this->_camera;
}

Matrix raylib::RlCamera::geMatrix()
{
    return GetCameraMatrix(this->_camera);
}

const CameraMode &raylib::RlCamera::getMode() const
{
    return _mode;
}

const Vector3f &raylib::RlCamera::getConstructedPosition() const
{
    return _position;
}

const Vector3f &raylib::RlCamera::getConstructedTarget() const
{
    return _target;
}

const Vector3f &raylib::RlCamera::getConstructedLookingPoint() const
{
    return _lookingPoint;
}

const float &raylib::RlCamera::getConstructedFovy() const
{
    return _fovy;
}

const CameraProjection &raylib::RlCamera::getConstructedProjection() const
{
    return _projection;
}

const CameraMode &raylib::RlCamera::getConstructedCameraMode() const
{
    return _cameraMode;
}

std::ostream &operator<<(std::ostream &os, const CameraMode &cameraMode)
{
    switch (cameraMode) {
        case CAMERA_CUSTOM: os << "Custom"; break;
        case CAMERA_FREE: os << "Free"; break;
        case CAMERA_ORBITAL: os << "Orbital"; break;
        case CAMERA_FIRST_PERSON: os << "TPS"; break;
        case CAMERA_THIRD_PERSON: os << "FPS";break;
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const CameraProjection &cameraProjection)
{
    switch (cameraProjection)
    {
        case CAMERA_ORTHOGRAPHIC: os << "Orthographic"; break;
        case CAMERA_PERSPECTIVE: os << "Perspective"; break;
        default: os << "Unknown"; break;
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const raylib::RlCamera &camera)
{
    /*const Vector3f &pos = camera.getConstructedPosition();
    const Vector3f &target = camera.getConstructedTarget();
    const Vector3f &up = camera.getConstructedLookingPoint();

    os << "Camera3D Constructed: "
        << "Position: (" << pos.x << ", " << pos.y << ", " << pos.z << ") "
        << "Target: (" << target.x << ", " << target.y << ", " << target.z << ") "
        << "Up: (" << up.x << ", " << up.y << ", " << up.z << ") "
        << "Fov: " << camera.getConstructedFovy() << " "
        << "Projection: " << camera.getConstructedProjection() << " "
        << "Mode: " << camera.getConstructedCameraMode() << std::endl;
*/
    const Camera3D &camera3D = camera.get();
    os << "Camera3d "
        << "Position: (" << camera3D.position.x << ", " << camera3D.position.y << ", " << camera3D.position.z << ") "
        << "Target: (" << camera3D.target.x << ", " << camera3D.target.y << ", " << camera3D.target.z << ") "  << " "
        << "LookingPoint : (" << camera3D.up.x << ", " << camera3D.up.y << ", " << camera3D.up.z << ") "  << " "
        << "Fov: " << camera3D.fovy << " "
        << "Projection: " << (const CameraProjection &) camera3D.projection << " "
        << "Mode: " << camera.getMode();
    return os;
}
