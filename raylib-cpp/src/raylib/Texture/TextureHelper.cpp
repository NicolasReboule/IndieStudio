/*
** EPITECH PROJECT, 2022
** TextureHelper.cpp
** FileHelper description:
** TextureHelper.cpp
*/

#include "raylib/Texture/TextureHelper.hpp"

// RlTexture drawing functions

void raylib::TextureHelper::drawTexture(Texture2D texture, int posX, int posY, RlColor tint)
{
    DrawTexture(texture, posX, posY, tint.getColor());
}

void raylib::TextureHelper::drawTextureV(Texture2D texture, Vector2f position, RlColor tint)
{
    DrawTextureV(texture, raylib::VectorHelper::toRaylibVector(position), tint.getColor());
}

void raylib::TextureHelper::drawTextureEx(Texture2D texture, Vector2f position, float rotation, float scale, RlColor tint)
{
    DrawTextureEx(texture, raylib::VectorHelper::toRaylibVector(position), rotation, scale, tint.getColor());
}

void raylib::TextureHelper::drawTextureRec(Texture2D texture, Rectangle source, Vector2f position, RlColor tint)
{
    DrawTextureRec(texture, source, raylib::VectorHelper::toRaylibVector(position), tint.getColor());
}

void raylib::TextureHelper::drawTextureQuad(Texture2D texture, Vector2f tiling, Vector2f offset, Rectangle quad, RlColor tint)
{
    DrawTextureQuad(texture, raylib::VectorHelper::toRaylibVector(tiling), raylib::VectorHelper::toRaylibVector(offset), quad, tint.getColor());
}

void raylib::TextureHelper::drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, float scale, RlColor tint)
{
    DrawTextureTiled(texture, source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, scale, tint.getColor());
}

void raylib::TextureHelper::drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2f origin, float rotation, RlColor tint)
{
    DrawTexturePro(texture, source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

void raylib::TextureHelper::drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2f origin, float rotation, RlColor tint)
{
    DrawTextureNPatch(texture, nPatchInfo, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

/*void raylib::TextureHelper::drawTexturePoly(Texture2D texture, Vector2f center, Vector2f *points, Vector2f *texcoords, int pointsCount, RlColor tint)
{
    DrawTexturePoly(texture, raylib::VectorHelper::toRaylibVector(center), raylib::VectorHelper::toRaylibVector(points), raylib::VectorHelper::toRaylibVector(texcoords), pointsCount, tint.getColor());
}*/
