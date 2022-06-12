/*
** EPITECH PROJECT, 2022
** DrawTextureHelper.cpp
** File description:
** DrawTextureHelper.cpp
*/

#include "raylib/render/DrawTextureHelper.hpp"

void raylib::DrawTextureHelper::drawTexture(const raylib::RlTexture &texture, int posX, int posY, const RlColor &tint)
{
    DrawTexture(texture.getTexture(), posX, posY, tint.getColor());
}

void raylib::DrawTextureHelper::drawTexture(const raylib::RlTexture &texture, const Vector2f &position, const RlColor &tint)
{
    DrawTexture(texture.getTexture(), (int) position.x, (int) position.y, tint.getColor());
}

void raylib::DrawTextureHelper::drawTexture(const raylib::RlTexture &texture, const Vector2f &position, float rotation,
                                            float scale, const RlColor &tint)
{
    DrawTextureEx(texture.getTexture(), raylib::VectorHelper::toRaylibVector(position), rotation, scale, tint.getColor());
}

void raylib::DrawTextureHelper::drawTextureRec(const raylib::RlTexture &texture, const Rectangle &source,
                                               const Vector2f &position, const RlColor &tint)
{
    DrawTextureRec(texture.getTexture(), source, raylib::VectorHelper::toRaylibVector(position), tint.getColor());
}

void raylib::DrawTextureHelper::drawTextureQuad(const raylib::RlTexture &texture, const Vector2f &tiling,
                                                const Vector2f &offset, const Rectangle &quad, const RlColor &tint)
{
    DrawTextureQuad(texture.getTexture(), raylib::VectorHelper::toRaylibVector(tiling), raylib::VectorHelper::toRaylibVector(offset), quad, tint.getColor());
}

void raylib::DrawTextureHelper::drawTextureTiled(const raylib::RlTexture &texture, const Rectangle &source,
                                                 const Rectangle &dest, const Vector2f &origin, float rotation,
                                                 float scale, const RlColor &tint)
{
    DrawTextureTiled(texture.getTexture(), source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, scale, tint.getColor());
}

void raylib::DrawTextureHelper::drawTexture(const raylib::RlTexture &texture, const Rectangle &source, const Rectangle &dest,
                                       const Vector2f &origin, float rotation, const RlColor &tint)
{
    DrawTexturePro(texture.getTexture(), source, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

void raylib::DrawTextureHelper::drawTextureNPatch(const raylib::RlTexture &texture, const NPatchInfo &nPatchInfo,
                                                  const Rectangle &dest, const Vector2f &origin, float rotation,
                                                  const RlColor &tint)
{
    DrawTextureNPatch(texture.getTexture(), nPatchInfo, dest, raylib::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

void raylib::DrawTextureHelper::drawTexturePoly(const raylib::RlTexture &texture, const Vector2f &center,
                                                const std::vector<Vector2f> &points, std::vector<Vector2f> &texcoords,
                                                const RlColor &tint)
{
    if (points.size() != texcoords.size())
        throw raylib::ex::InvalidArgumentException("DrawTextureHelper: points and texcoords must have the same size");
    int pointCount = (int) points.size();
    rlCheckRenderBatchLimit((pointCount - 1) * 4);

    rlSetTexture(texture.getTexture().id);

    // Texturing is only supported on QUADs
    rlBegin(RL_QUADS);

    rlColor4ub(tint.getRed(), tint.getGreen(), tint.getBlue(), tint.getAlpha());

    for (int i = 0; i < pointCount - 1; i++) {
        rlTexCoord2f(0.5f, 0.5f);
        rlVertex2f(center.x, center.y);

        rlTexCoord2f(texcoords[i].x, texcoords[i].y);
        rlVertex2f(points[i].x + center.x, points[i].y + center.y);

        rlTexCoord2f(texcoords[i + 1].x, texcoords[i + 1].y);
        rlVertex2f(points[i + 1].x + center.x, points[i + 1].y + center.y);

        rlTexCoord2f(texcoords[i + 1].x, texcoords[i + 1].y);
        rlVertex2f(points[i + 1].x + center.x, points[i + 1].y + center.y);
    }
    rlEnd();
    rlSetTexture(0);
}
