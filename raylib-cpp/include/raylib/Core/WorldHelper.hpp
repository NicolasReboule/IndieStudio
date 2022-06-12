/*
** EPITECH PROJECT, 2022
** WorldHelper.hpp
** FileHelper description:
** WorldHelper.hpp
*/

#ifndef INDIESTUDIO_WORLDHELPER_HPP
#define INDIESTUDIO_WORLDHELPER_HPP

#include "raylib/Camera/RlCamera.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Helper class for world-related functions.
     */
    class WorldHelper {
    public:
        /**
         * @brief Get the screen space position for a 3d world space position
         * @param position the 3d world space position
         * @param camera the camera
         * @return the screen space position
         */
        static Vector2f getWorldToScreen(const Vector3f &position, const RlCamera &camera);

        /**
         * @brief Get size position for a 3d world space position
         * @param position the 3d world space position
         * @param camera the camera
         * @param width the screen width
         * @param height the screen height
         * @return the screen space position
         */
        static Vector2f getWorldToScreenEx(const Vector3f &position, const RlCamera &camera, int width, int height);

        /**
         * @brief Get the screen space position for a 2d camera world space position
         * @param position the 2d camera world space position
         * @param camera the camera
         * @return the screen space position
         */
        static Vector2f getWorldToScreen2D(const Vector2f &position, const Camera2D &camera);

        /**
         * @brief Get the world space position for a 2d camera screen space position
         * @param position the 2d camera screen space position
         * @param camera the camera
         * @return the world space position
         */
        static Vector2f getScreenToWorld2D(const Vector2f &position, const Camera2D &camera);
    };
}

#endif //INDIESTUDIO_WORLDHELPER_HPP
