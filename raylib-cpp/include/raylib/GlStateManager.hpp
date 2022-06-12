/*
** EPITECH PROJECT, 2022
** GlStateManager.hpp
** File description:
** GlStateManager.hpp
*/

#ifndef INDIESTUDIO_GLSTATEMANAGER_HPP
#define INDIESTUDIO_GLSTATEMANAGER_HPP

#include "raylib/Math.hpp"
#include <raylib.h>
#include <rlgl.h>
#include <GLFW/glfw3.h>

namespace raylib {
    /**
     * @brief Class containing the OpenGL state manager
     */
    class GlStateManager {
    public:
        /**
         * @brief Push the opengl matrix
         */
        static void pushMatrix();

        /**
         * @brief Pop the opengl matrix
         */
        static void popMatrix();

        /**
         * @brief Translate the opengl matrix
         * @param translation the translation to apply
         */
        static void translate(const Vector3f &translation);

        /**
         * @brief Rotate the opengl matrix
         * @param rotation the rotation to apply
         */
        static void rotate(const Vector3f &rotation);
    };
}

#endif //INDIESTUDIO_GLSTATEMANAGER_HPP
