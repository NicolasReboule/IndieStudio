/*
** EPITECH PROJECT, 2022
** DrawTextureHelper.hpp
** File description:
** DrawTextureHelper.hpp
*/

#ifndef INDIESTUDIO_DRAWTEXTUREHELPER_HPP
#define INDIESTUDIO_DRAWTEXTUREHELPER_HPP

#include "raylib/Texture/RlTexture.hpp"
#include "raylib/Math.hpp"
#include "raylib/exception/InvalidArgumentException.hpp"
#include <rlgl.h>
#include <vector>

namespace raylib::helper::draw {
    /**
     * @brief Helper class for drawing textures
     */
    class DrawTextureHelper {
    public:
        /**
         * @brief Draw a texture
         * @param texture the texture to Draw
         * @param posX the x position of the texture
         * @param posY the y position of the texture
         * @param tint the color tint of the texture
         */
        static void drawTexture(const texture::RlTexture &texture, int posX, int posY, const RlColor &tint);

        /**
         * @brief Draw a texture with position defined as Vector2f
         * @param texture the texture to Draw
         * @param position the position of the texture
         * @param tint the color tint of the texture
         */
        static void drawTexture(const texture::RlTexture &texture, const Vector2f &position, const RlColor &tint);

        /**
         * @brief Draw a texture with extended parameters
         * @param texture the texture to Draw
         * @param position the position of the texture
         * @param rotation the rotation of the texture
         * @param scale the scale of the texture
         * @param tint the color tint of the texture
         */
        static void drawTexture(const texture::RlTexture &texture, const Vector2f &position, float rotation, float scale, const RlColor &tint);

        /**
         * @brief Draw a part of a texture defined by a rectangle
         * @param texture the texture to Draw
         * @param source the rectangle of the texture to Draw
         * @param position the position of the texture
         * @param tint the color tint of the texture
         */
        static void drawTextureRec(const texture::RlTexture &texture, const Rectangle &source, const Vector2f &position, const RlColor &tint);

        /**
         * @brief Draw a texture quad with tiling and offset parameters
         * @param texture the texture to Draw
         * @param tiling the tiling of the texture
         * @param offset the offset of the texture
         * @param quad the quad of the texture
         * @param tint the color tint of the texture
         */
        static void drawTextureQuad(const texture::RlTexture &texture, const Vector2f &tiling, const Vector2f &offset, const Rectangle &quad, const RlColor &tint);

        /**
         * @brief Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest
         * @param texture the texture to Draw
         * @param source the rectangle of the texture to Draw
         * @param dest the rectangle of the texture to Draw into
         * @param origin the origin of the texture
         * @param rotation the rotation of the texture
         * @param scale the scale of the texture
         * @param tint the color tint of the texture
         */
        static void drawTextureTiled(const texture::RlTexture &texture, const Rectangle &source, const Rectangle &dest, const Vector2f &origin, float rotation, float scale, const RlColor &tint);

        /**
         * @brief Draw a part of a texture defined by a rectangle with 'pro' parameters
         * @param texture the texture to Draw
         * @param source the rectangle of the texture to Draw
         * @param dest the rectangle of the texture to Draw into
         * @param origin the origin of the texture
         * @param rotation the rotation of the texture
         * @param tint the color tint of the texture
         */
        static void drawTexture(const texture::RlTexture &texture, const Rectangle &source, const Rectangle &dest, const Vector2f &origin, float rotation, const RlColor &tint);

        /**
         * @brief Draws a texture (or part of it) that stretches or shrinks nicely
         * @param texture the texture to Draw
         * @param nPatchInfo the rectangle of the texture to Draw
         * @param dest the rectangle of the texture to Draw into
         * @param origin the origin of the texture
         * @param rotation the rotation of the texture
         * @param tint the color tint of the texture
         */
        static void drawTextureNPatch(const texture::RlTexture &texture, const NPatchInfo &nPatchInfo, const Rectangle &dest, const Vector2f &origin, float rotation, const RlColor &tint);

        /**
         * @brief Draw a textured polygon
         * @param texture the texture to Draw
         * @param center the center of the texture
         * @param points the points of the texture
         * @param texcoords the texture coordinates of the texture
         * @param tint the color tint of the texture
         * @attention The points and texcoords must have the same size
         * @throws raylib::ex::InvalidArgumentException if the points and texcoords have different size
         */
        static void drawTexturePoly(const texture::RlTexture &texture, const Vector2f &center, const std::vector<Vector2f> &points, std::vector<Vector2f> &texcoords, const RlColor &tint);
    };
}

#endif //INDIESTUDIO_DRAWTEXTUREHELPER_HPP
