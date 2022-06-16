/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "raylib/Math.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Camera class
     */
    class RlCamera {
    public:
        /**
         * @brief Empty constructor who doesn't initialize the camera
         */
        RlCamera() : _camera(), _position(), _target(), _lookingPoint(), _mode(), _fovy(0), _projection(), _cameraMode() {}

        /**
         * @brief Construct a new RlCamera object
         * @param position the position of the camera
         * @param target the target of the camera (Camera looking at point)
         * @param lookingPoint the lookingPoint of the camera (rotation towards target)
         * @param fovy the fovy of the camera (Camera field-of-view Y)
         * @param projection the projection of the camera @see CameraProjection
         * @param mode the mode of the camera @see CameraMode
         * @attention Don't use this use the RlCameraBuilder instead (please)
         * @see RlCameraBuilder
         */
        explicit RlCamera(const Vector3f &position,
                          const Vector3f &target,
                          const Vector3f &lookingPoint,
                          const float &fovy = 45,
                          const CameraProjection &projection = CAMERA_PERSPECTIVE,
                          const CameraMode &cameraMode = CAMERA_FREE);

        /**
         * @brief Update the camera, needed to move the camera
         */
        void update();

        /**
         * @brief Reset the camera to the initial state of the constructor
         */
        void reset();

        /**
         * @brief Set the position of the camera
         * @param position the position of the camera
         */
        void setPosition(const Vector3f &position);

        /**
         * @brief Set the target of the camera (Camera looking at point)
         * @param target the target of the camera
         */
        void setTarget(const Vector3f &target);

        /**
         * @brief Set the camera projection type
         * @param projection the projection of the camera @see CameraProjection
         */
        void setProjection(const CameraProjection &projection);

        /**
         * @brief Set the fovy of the camera (Camera field-of-view Y)
         * @param fovy the fovy of the camera
         */
        void setFov(const float &fovy);

        /**
         * @brief Set the camera mode
         * @param mode the mode of the camera @see CameraMode
         */
        void setCameraMode(const CameraMode &mode);

        /**
         * @brief Get the 3d camera
         * @return the 3d camera
         */
        const Camera3D &get() const;

        /**
         * @brief Get the matrix of the camera
         * @return the matrix of the camera
         */
        Matrix geMatrix();

        /**
         * @brief Get the camera mode
         * @return the camera mode
         */
        const CameraMode &getMode() const;

        /**
         * @brief Get the position of the camera when construct
         * @return the position of the camera
         */
        const Vector3f &getConstructedPosition() const;

        /**
         * @brief Get the target of the camera when construct
         * @return the target of the camera
         */
        const Vector3f &getConstructedTarget() const;

        /**
         * @brief Get the looking point of the camera when construct
         * @return the looking point vector of the camera
         */
        const Vector3f &getConstructedLookingPoint() const;

        /**
         * @brief Get the fovy of the camera when construct
         * @return the fovy of the camera
         */
        const float &getConstructedFovy() const;

        /**
         * @brief Get the projection of the camera when construct
         * @return the projection of the camera
         */
        const CameraProjection &getConstructedProjection() const;

        /**
         * @brief Get the camera mode when construct
         * @return the camera mode
         */
        const CameraMode &getConstructedCameraMode() const;

    private:
        Camera3D _camera; /**< The raylib camera */
        CameraMode _mode; /**< The camera mode */

        Vector3f _position; /**< The position of the camera when constructed */
        Vector3f _target; /**< The target of the camera when constructed */
        Vector3f _lookingPoint; /**< Camera up vector (rotation over its axis) when constructed */
        float _fovy; /**< The field of view of the camera when constructed */
        CameraProjection _projection; /**< The projection type of the camera when constructed */
        CameraMode _cameraMode; /**< The camera mode when constructed */
    };
}

std::ostream &operator<<(std::ostream &os, const CameraMode &cameraMode);

std::ostream &operator<<(std::ostream &os, const CameraProjection &cameraProjection);

std::ostream &operator<<(std::ostream &os, const raylib::RlCamera &camera);

#endif /* !CAMERA_HPP_ */
