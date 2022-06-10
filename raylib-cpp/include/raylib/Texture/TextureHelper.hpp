/*
** EPITECH PROJECT, 2022
** TextureHelper.hpp
** FileHelper description:
** TextureHelper.hpp
*/

#ifndef INDIESTUDIO_TEXTUREHELPER_HPP
#define INDIESTUDIO_TEXTUREHELPER_HPP

#include <raylib.h>
#include "raylib/Math/VectorHelper.hpp"
#include "raylib/Math/Vector.hpp"
#include "raylib/Color/RlColor.hpp"

namespace raylib {
    class TextureHelper {
    public:
        // RlTexture drawing functions
        static void drawTexture(Texture2D texture, int posX, int posY, RlColor tint);                               // DrawHelper a Texture2D
        static void drawTextureV(Texture2D texture, Vector2f position, RlColor tint);                                // DrawHelper a Texture2D with position defined as Vector2
        static void drawTextureEx(Texture2D texture, Vector2f position, float rotation, float scale, RlColor tint);  // DrawHelper a Texture2D with extended parameters
        static void drawTextureRec(Texture2D texture, Rectangle source, Vector2f position, RlColor tint);            // DrawHelper a part of a texture defined by a rectangle
        static void drawTextureQuad(Texture2D texture, Vector2f tiling, Vector2f offset, Rectangle quad, RlColor tint);  // DrawHelper texture quad with tiling and offset parameters
        static void drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, float scale, RlColor tint);      // DrawHelper part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
        static void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, RlColor tint);           // DrawHelper a part of a texture defined by a rectangle with 'pro' parameters
        static void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2f origin, float rotation, RlColor tint);   // Draws a texture (or part of it) that stretches or shrinks nicely
        //static void drawTexturePoly(Texture2D texture, Vector2f center, Vector2f *points, Vector2f *texcoords, int pointsCount, RlColor tint);      // DrawHelper a textured polygon
    private:
    };
}

#endif //INDIESTUDIO_TEXTUREHELPER_HPP
