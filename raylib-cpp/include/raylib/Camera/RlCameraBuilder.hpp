/*
** EPITECH PROJECT, 2022
** RlCameraBuilder.hpp
** File description:
** RlCameraBuilder.hpp
*/

#ifndef INDIESTUDIO_RLCAMERABUILDER_HPP
#define INDIESTUDIO_RLCAMERABUILDER_HPP

#include "raylib/IBuilder.hpp"
#include "raylib/Camera/RlCamera.hpp"

namespace raylib {
    /**
     * @brief RlCameraBuilder class
     */
    class RlCameraBuilder : public IBuilder<RlCamera> {
    public:
        /**
         * @brief Construct a new CameraBuilder object
         */
        RlCameraBuilder();

        /**
         * @brief Set the camera position
         * @param position the position
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setPosition(const Vector3f &position);

        /**
         * @brief Set the camera target
         * @param target the target
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setTarget(const Vector3f &target);

        /**
         * @brief Set the camera up vector (rotation over its axis)
         * @param up the up vector
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setUp(const Vector3f &up);

        /**
         * @brief Set the camera field of view
         * @param fovy the field of view
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setFovy(float fovy);

        /**
         * @brief Set the camera projection type
         * @param projection the projection type
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setProjection(CameraProjection projection);

        /**
         * @brief Set the camera mode
         * @param cameraMode the camera mode
         * @return the CameraBuilder object
         */
        RlCameraBuilder &setCameraMode(CameraMode cameraMode);

        /**
         * @brief Build the camera
         * @return the camera
         */
        RlCamera build() noexcept override;

    private:
        Vector3f _position; /**< The position of the camera */
        Vector3f _target; /**< The target of the camera */
        Vector3f _up; /**< Camera up vector (rotation over its axis) */
        float _fovy; /**< The field of view of the camera */
        CameraProjection _projection; /**< The projection type of the camera */
        CameraMode _cameraMode; /**< The camera mode */
    };
}

#endif //INDIESTUDIO_RLCAMERABUILDER_HPP
