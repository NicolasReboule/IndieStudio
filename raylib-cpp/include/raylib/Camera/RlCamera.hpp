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
             */
            explicit RlCamera(const Vector3f &position =  { 0, 10, 10 },
                              const Vector3f &target = {0, 0, 0},
                              const Vector3f &up = { 0, 1, 0 },
                              const float &fovy = 45,
                              const CameraProjection &projection = CAMERA_PERSPECTIVE);

            /**
             * @brief Update the camera, needed to move the camera
             */
            void update();

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
             * @brief Get the 3d camera
             * @return the 3d camera
             */
            const Camera3D &get() const;

            /**
             * @brief Get the matrix of the camera
             * @return the matrix of the camera
             */
            Matrix geMatrix();

    private:
        Camera3D _camera;
    };
}

#endif /* !CAMERA_HPP_ */
