/*
** EPITECH PROJECT, 2022
** DrawTextureHelper.cpp
** File description:
** DrawTextureHelper.cpp
*/

#include "raylib/Draw/DrawTextureHelper.hpp"

void raylib::helper::draw::DrawTextureHelper::drawTexture(const raylib::texture::RlTexture &texture, int posX, int posY, const RlColor &tint)
{
    DrawTexture(texture.get(), posX, posY, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTexture(const raylib::texture::RlTexture &texture, const Vector2f &position, const RlColor &tint)
{
    DrawTexture(texture.get(), (int) position.x, (int) position.y, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTexture(const raylib::texture::RlTexture &texture, const Vector2f &position, float rotation, float scale, const RlColor &tint)
{
    DrawTextureEx(texture.get(), raylib::helper::VectorHelper::toRaylibVector(position), rotation, scale, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTextureRec(const raylib::texture::RlTexture &texture, const Rectangle &source,
                                               const Vector2f &position, const RlColor &tint)
{
    DrawTextureRec(texture.get(), source, raylib::helper::VectorHelper::toRaylibVector(position), tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTextureQuad(const raylib::texture::RlTexture &texture, const Vector2f &tiling,
                                                const Vector2f &offset, const Rectangle &quad, const RlColor &tint)
{
    DrawTextureQuad(texture.get(), raylib::helper::VectorHelper::toRaylibVector(tiling),
                    raylib::helper::VectorHelper::toRaylibVector(offset), quad, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTextureTiled(const raylib::texture::RlTexture &texture, const Rectangle &source,
                                                 const Rectangle &dest, const Vector2f &origin, float rotation,
                                                 float scale, const RlColor &tint)
{
    DrawTextureTiled(texture.get(), source, dest, raylib::helper::VectorHelper::toRaylibVector(origin), rotation, scale, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTexture(const raylib::texture::RlTexture &texture, const Rectangle &source, const Rectangle &dest,
                                       const Vector2f &origin, float rotation, const RlColor &tint)
{
    DrawTexturePro(texture.get(), source, dest, raylib::helper::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTextureNPatch(const raylib::texture::RlTexture &texture, const NPatchInfo &nPatchInfo,
                                                  const Rectangle &dest, const Vector2f &origin, float rotation, const RlColor &tint)
{
    DrawTextureNPatch(texture.get(), nPatchInfo, dest, raylib::helper::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}

void raylib::helper::draw::DrawTextureHelper::drawTexturePoly(const raylib::texture::RlTexture &texture, const Vector2f &center,
                                                const std::vector<Vector2f> &points, std::vector<Vector2f> &texcoords, const RlColor &tint)
{
    if (points.size() != texcoords.size())
        throw raylib::ex::InvalidArgumentException("DrawTextureHelper: points and texcoords must have the same size");
    int pointCount = (int) points.size();
    rlCheckRenderBatchLimit((pointCount - 1) * 4);

    rlSetTexture(texture.get().id);

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
