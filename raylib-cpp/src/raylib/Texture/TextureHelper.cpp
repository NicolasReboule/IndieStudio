/*
** EPITECH PROJECT, 2022
** TextureHelper.cpp
** FileHelper description:
** TextureHelper.cpp
*/

#include "raylib/Texture/TextureHelper.hpp"

// RlTexture drawing functions

void raylib::TextureHelper::drawTexture(Texture2D texture, int posX, int posY, Color tint)
{
    DrawTexture(texture, posX, posY, tint);
}

void raylib::TextureHelper::drawTextureV(Texture2D texture, Vector2f position, Color tint)
{
    DrawTextureV(texture, raylib::VectorHelper::toRaylibVector(position), tint);
}

void raylib::TextureHelper::drawTextureEx(Texture2D texture, Vector2f position, float rotation, float scale, Color tint)
{
    DrawTextureEx(texture, raylib::VectorHelper::toRaylibVector(position), rotation, scale, tint);
}

void raylib::TextureHelper::drawTextureRec(Texture2D texture, Rectangle source, Vector2f position, Color tint)
{
    DrawTextureRec(texture, source, raylib::VectorHelper::toRaylibVector(position), tint);
}

void raylib::TextureHelper::drawTextureQuad(Texture2D texture, Vector2f tiling, Vector2f offset, Rectangle quad, Color tint)
{
    DrawTextureQuad(texture, raylib::VectorHelper::toRaylibVector(tiling), raylib::VectorHelper::toRaylibVector(offset), quad, tint);
}

void raylib::TextureHelper::drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, float scale, Color tint)
{
    DrawTextureTiled(texture, source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, scale, tint);
}

void raylib::TextureHelper::drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, Color tint)
{
    DrawTexturePro(texture, source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint);
}

void raylib::TextureHelper::drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2f origin, float rotation, Color tint)
{
    DrawTextureNPatch(texture, nPatchInfo, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint);
}

/*void raylib::TextureHelper::drawTexturePoly(Texture2D texture, Vector2f center, Vector2f *points, Vector2f *texcoords, int pointsCount, Color tint)
{
    DrawTexturePoly(texture, raylib::VectorHelper::toRaylibVector(center), raylib::VectorHelper::toRaylibVector(points), raylib::VectorHelper::toRaylibVector(texcoords), pointsCount, tint);
}*/
