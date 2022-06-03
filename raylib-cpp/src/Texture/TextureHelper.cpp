/*
** EPITECH PROJECT, 2022
** TextureHelper.cpp
** FileHelper description:
** TextureHelper.cpp
*/

#include "raylib/Texture/TextureHelper.hpp"

// Texture drawing functions

void raylib::TextureHelper::drawTexture(Texture2D texture, int posX, int posY, Color tint)
{
    DrawTexture(texture, posX, posY, tint);
}

void raylib::TextureHelper::drawTextureV(Texture2D texture, Vector2 position, Color tint)
{
    DrawTextureV(texture, position, tint);
}

void raylib::TextureHelper::drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)
{
    DrawTextureEx(texture, position, rotation, scale, tint);
}

void raylib::TextureHelper::drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)
{
    DrawTextureRec(texture, source, position, tint);
}

void raylib::TextureHelper::drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint)
{
    DrawTextureQuad(texture, tiling, offset, quad, tint);
}

void raylib::TextureHelper::drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint)
{
    DrawTextureTiled(texture, source, dest, origin, rotation, scale, tint);
}

void raylib::TextureHelper::drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)
{
    DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

void raylib::TextureHelper::drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)
{
    DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
}

void raylib::TextureHelper::drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint)
{
    DrawTexturePoly(texture, center, points, texcoords, pointsCount, tint);
}
