/*
** EPITECH PROJECT, 2022
** DrawHelper.hpp
** File description:
** DrawHelper.hpp
*/

#ifndef INDIESTUDIO_DRAWHELPER_HPP
#define INDIESTUDIO_DRAWHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/Camera/RlCamera.hpp"
#include "raylib/Texture/RlTexture.hpp"
#include <raylib.h>

namespace raylib::helper::draw {
    /**
     * @brief Helper class for drawing
     */
    class DrawHelper {
    public:
        /**
         * @brief Set background color (framebuffer clear color)
         * @param color
         */
        static void clearBackground(const RlColor &color);

        /**
         * @brief Setup canvas (framebuffer) to start drawing
         */
        static void beginDrawing();

        /**
         * @brief End canvas drawing and swap buffers (double buffering)
         */
        static void endDrawing();

        /**
         * @brief Begin 2D mode with custom camera (2D)
         * @param camera to use
         */
        static void beginMode2D(const Camera2D &camera);

        /**
         * @brief Ends 2D mode with custom camera (2D)
         */
        static void endMode2D();

        /**
         * @brief Begin 3D mode with custom camera (3D)
         * @param camera to use
         */
        static void beginMode3D(const RlCamera &camera);

        /**
         * @brief Ends 3D mode and returns to default 2D orthographic mode
         */
        static void endMode3D();

        /**
         * @brief Begin drawing to Draw texture
         * @param target to Draw to
         */
        static void beginTextureMode(const RenderTexture2D &target);

        /**
         * @brief Ends drawing to Draw texture
         */
        static void endTextureMode();

        /**
         * @brief Begin custom shader drawing
         * @param shader to use
         */
        static void beginShaderMode(const Shader &shader); //TODO: change this to RlShader

        /**
         * @brief End custom shader drawing (use default shader)
         */
        static void endShaderMode();

        /**
         * @brief Begin blending mode (alpha, additive, multiplied, subtract, custom)
         * @param mode to use
         */
        static void beginBlendMode(int mode);

        /**
         * @brief End blending mode (reset to default: alpha blending)
         */
        static void endBlendMode();

        /**
         * @brief Begin scissor mode (define screen area for following drawing)
         * @param x to use
         * @param y to use
         * @param width to use
         * @param height to use
         */
        static void beginScissorMode(int x, int y, int width, int height);

        /**
         * @brief End scissor mode
         */
        static void endScissorMode();

        /**
         * @brief Begin stereo rendering (requires VR simulator)
         * @param config to use
         */
        static void beginVrStereoMode(const VrStereoConfig &config);

        /**
         * @brief End stereo rendering (requires VR simulator)
         */
        static void endVrStereoMode();

    };
}

#endif //INDIESTUDIO_DRAWHELPER_HPP
