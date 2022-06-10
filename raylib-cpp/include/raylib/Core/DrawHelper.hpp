/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** DrawHelper
*/

#ifndef DRAW_HPP_
#define DRAW_HPP_

#include "raylib.h"
#include "raylib/Math.hpp"

namespace raylib {
    class DrawHelper {
        public:
            // Drawing-related functions
            static void clearBackground(Color color);                                      // Set background color (framebuffer clear color)
            static void beginDrawing();                                                // Setup canvas (framebuffer) to start drawing
            static void endDrawing();                                                  // End canvas drawing and swap buffers (double buffering)
            static void beginMode2D(Camera2D camera);                                      // Begin 2D mode with custom camera (2D)
            static void endMode2D();                                                   // Ends 2D mode with custom camera
            static void beginMode3D(Camera3D camera);                                      // Begin 3D mode with custom camera (3D)
            static void endMode3D();                                                   // Ends 3D mode and returns to default 2D orthographic mode
            static void beginTextureMode(RenderTexture2D target);                          // Begin drawing to render texture
            static void endTextureMode();                                              // Ends drawing to render texture
            static void beginShaderMode(Shader shader);                                    // Begin custom shader drawing
            static void endShaderMode();                                               // End custom shader drawing (use default shader)
            static void beginBlendMode(int mode);                                          // Begin blending mode (alpha, additive, multiplied, subtract, custom)
            static void endBlendMode();                                                // End blending mode (reset to default: alpha blending)
            static void beginScissorMode(int x, int y, int width, int height);             // Begin scissor mode (define screen area for following drawing)
            static void endScissorMode();                                              // End scissor mode
            static void beginVrStereoMode(VrStereoConfig config);                          // Begin stereo rendering (requires VR simulator)
            static void endVrStereoMode();                                             // End stereo rendering (requires VR simulator)

            static void drawBoundingBox(BoundingBox box, Color color);                                                // DrawHelper bounding box (wires)
            static void drawBillboard(Camera camera, Texture2D texture, Vector3f position, float size, Color tint);    // DrawHelper a billboard texture
            static void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector2f size, Color tint); // DrawHelper a billboard texture defined by source
            static void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3f position, Vector3f up, Vector2f size, Vector2f origin, float rotation, Color tint); // DrawHelper a billboard texture defined by source and rotation

    private:
    };
}

#endif /* !DRAW_HPP_ */
