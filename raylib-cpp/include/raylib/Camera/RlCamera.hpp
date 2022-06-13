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
             * @brief Construct a new RlCamera object
             * @param position the position of the camera
             * @param target the target of the camera (Camera looking at point)
             * @param up the up of the camera (Camera up vector (rotation towards target))
             * @param fovy the fovy of the camera (Camera field-of-view Y)
             * @param projection the projection of the camera @see CameraProjection
             * @param mode the mode of the camera @see CameraMode
             */
            explicit RlCamera(const Vector3f &position =  { 0, 10, 10 },
                              const Vector3f &target = {0, 0, 0},
                              const Vector3f &up = { 0, 1, 0 },
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

        const CameraMode &getMode() const;

        const Vector3f &getConstructedPosition() const;

        const Vector3f &getConstructedTarget() const;

        const Vector3f &getConstructedUp() const;

        float getConstructedFovy() const;

        CameraProjection getConstructedProjection() const;

        CameraMode getConstructedCameraMode() const;

    private:
        Camera3D _camera; /**< The raylib camera */
        CameraMode _mode; /**< The camera mode */

        Vector3f _position; /**< The position of the camera when constructed */
        Vector3f _target; /**< The target of the camera when constructed */
        Vector3f _up; /**< Camera up vector (rotation over its axis) when constructed */
        float _fovy; /**< The field of view of the camera when constructed */
        CameraProjection _projection; /**< The projection type of the camera when constructed */
        CameraMode _cameraMode; /**< The camera mode when constructed */
    };
}

std::ostream &operator<<(std::ostream &os, const CameraMode &cameraMode);
std::ostream &operator<<(std::ostream &os, const CameraProjection &cameraProjection);
std::ostream &operator<<(std::ostream &os, const raylib::RlCamera &camera);


#endif /* !CAMERA_HPP_ */
