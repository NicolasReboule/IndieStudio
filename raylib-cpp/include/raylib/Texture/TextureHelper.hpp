/*
** EPITECH PROJECT, 2022
** TextureHelper.hpp
** FileHelper description:
** TextureHelper.hpp
*/

#ifndef INDIESTUDIO_TEXTUREHELPER_HPP
#define INDIESTUDIO_TEXTUREHELPER_HPP

#include <raylib.h>

namespace raylib {
    class TextureHelper {
    public:
        // Texture drawing functions
        static void drawTexture(Texture2D texture, int posX, int posY, Color tint);                               // DrawHelper a Texture2D
        static void drawTextureV(Texture2D texture, Vector2 position, Color tint);                                // DrawHelper a Texture2D with position defined as Vector2
        static void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint);  // DrawHelper a Texture2D with extended parameters
        static void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);            // DrawHelper a part of a texture defined by a rectangle
        static void drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint);  // DrawHelper texture quad with tiling and offset parameters
        static void drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint);      // DrawHelper part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
        static void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint);           // DrawHelper a part of a texture defined by a rectangle with 'pro' parameters
        static void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint);   // Draws a texture (or part of it) that stretches or shrinks nicely
        static void drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint);      // DrawHelper a textured polygon
    private:
    };
}

#endif //INDIESTUDIO_TEXTUREHELPER_HPP
