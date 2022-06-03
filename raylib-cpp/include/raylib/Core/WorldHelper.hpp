/*
** EPITECH PROJECT, 2022
** WorldHelper.hpp
** FileHelper description:
** WorldHelper.hpp
*/

#ifndef INDIESTUDIO_WORLDHELPER_HPP
#define INDIESTUDIO_WORLDHELPER_HPP

#include <raylib.h>

namespace raylib {
    class WorldHelper {
    public:
        // Screen-space-related functions         // Get camera 2d transform matrix
        static Vector2 getWorldToScreen(Vector3 position,Camera camera);              // Get the screen space position for a 3d world space position
        static Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height); // Get size position for a 3d world space position
        static Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera);          // Get the screen space position for a 2d camera world space position
        static Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera);          // Get the world space position for a 2d camera screen space position
    private:
    };
}

#endif //INDIESTUDIO_WORLDHELPER_HPP
