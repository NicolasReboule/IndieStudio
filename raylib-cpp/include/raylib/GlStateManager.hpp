/*
** EPITECH PROJECT, 2022
** GlStateManager.hpp
** File description:
** GlStateManager.hpp
*/

#ifndef INDIESTUDIO_GLSTATEMANAGER_HPP
#define INDIESTUDIO_GLSTATEMANAGER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
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

        /**
         * @brief Set the color
         * @param color the color to set
         */
        static void color(const RlColor &color);

        /**
         * @brief Set the color
         * @param r the red value
         * @param g the green value
         * @param b the blue value
         * @param a the alpha value
         */
        static void color(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

        /**
         * @brief Set the color
         * @param r the red value
         * @param g the green value
         * @param b the blue value
         * @param a the alpha value
         */
        static void color(float r, float g, float b, float a);

        /**
         * @brief Set the color
         * @param r the red value
         * @param g the green value
         * @param b the blue value
         */
        static void color(unsigned char r, unsigned char g, unsigned char b);

        /**
         * @brief Enable the color blending
         */
        static void enableColorBlend();

        /**
         * @brief Disable the color blending
         */
        static void disableColorBlend();

        /**
         * @brief Enable the depth test
         */
        static void enableDepthTest();

        /**
         * @brief Disable the depth test
         */
        static void disableDepthTest();

        /**
         * @brief Enable the depth mask
         */
        static void enableDepthMask();

        /**
         * @brief Disable the depth mask
         */
        static void disableDepthMask();

        /**
         * @brief Enable the cull face
         */
        static void enableBackfaceCulling();

        /**
         * @brief Disable the cull face
         */
        static void disableBackfaceCulling();

        /**
         * @brief Enable the scissor test
         */
        static void enableScissorTest();

        /**
         * @brief Disable the scissor test
         */
        static void disableScissorTest();

        /**
         * @brief Set the scissor test
         * @param x the x position
         * @param y the y position
         * @param width the width
         * @param height the height
         */
        static void scissor(int x, int y, int width, int height);

        /**
         * @brief Set the scissor test
         * @param rect the rectangle to use
         */
        static void scissor(const Rectangle &rect);

        /**
         * @brief Enable the wire mode
         */
        static void enableWireMode();

        /**
         * @brief Disable the wire mode
         */
        static void disableWireMode();

        /**
         * @brief Enable the smooth lines
         */
        static void enableSmoothLines();

        /**
         * @brief Disable the smooth lines
         */
        static void disableSmoothLines();

    };
}

#endif //INDIESTUDIO_GLSTATEMANAGER_HPP
