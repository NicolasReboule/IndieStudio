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
#include "raylib.h"

namespace raylib {
    /**
     * @brief Helper class for drawing.
     */
    class DrawHelper {
    public:
        /**
         * @brief Set background color (framebuffer clear color)
         * @param color
         */
        static void clearBackground(Color color);

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
        static void beginMode3D(const Camera3D &camera);

        /**
         * @brief Ends 3D mode and returns to default 2D orthographic mode
         */
        static void endMode3D();

        /**
         * @brief Begin drawing to render texture
         * @param target to draw to
         */
        static void beginTextureMode(const RenderTexture2D &target);

        /**
         * @brief Ends drawing to render texture
         */
        static void endTextureMode();

        /**
         * @brief Begin custom shader drawing
         * @param shader to use
         */
        static void beginShaderMode(const Shader &shader);

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
        static void beginVrStereoMode(VrStereoConfig config);

        /**
         * @brief End stereo rendering (requires VR simulator)
         */
        static void endVrStereoMode();

        /**
         * @brief Draw bounding box (wires)
         * @param box to use
         * @param color to use
         */
        static void drawBoundingBox(const BoundingBox &box, const RlColor &color);

        /**
         * @brief Draw a billboard texture
         * @param camera to use
         * @param texture to use
         * @param position to use
         * @param size to use
         * @param tint to use
         */
        static void drawBillboard(Camera camera, Texture2D texture, Vector3f position, float size, Color tint);

        /**
         * @brief Draw a billboard texture defined by source
         * @param camera to use
         * @param texture to use
         * @param source to use
         * @param position to use
         * @param size to use
         * @param tint to use
         */
        static void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector2f size, Color tint);

        /**
         * @brief Draw a billboard texture defined by source and rotation
         * @param camera to use
         * @param texture to use
         * @param source to use
         * @param position to use
         * @param up to use
         * @param size to use
         * @param origin to use
         * @param rotation to use
         * @param tint to use
         */
        static void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector3f up, Vector2f size, Vector2f origin, float rotation, Color tint);

    };
}

#endif //INDIESTUDIO_DRAWHELPER_HPP
