/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** DrawHelper
*/

#include "raylib/Draw/DrawHelper.hpp"

void raylib::helper::draw::DrawHelper::clearBackground(const RlColor &color)
{
    ClearBackground(color.getColor());
}

void raylib::helper::draw::DrawHelper::beginDrawing()
{
    BeginDrawing();
}

void raylib::helper::draw::DrawHelper::endDrawing()
{
    EndDrawing();
}

void raylib::helper::draw::DrawHelper::beginMode2D(const Camera2D &camera)
{
    BeginMode2D(camera);
}

void raylib::helper::draw::DrawHelper::endMode2D()
{
    EndMode2D();
}

void raylib::helper::draw::DrawHelper::beginMode3D(const RlCamera &camera)
{
    BeginMode3D(camera.get());
}

void raylib::helper::draw::DrawHelper::endMode3D()
{
    EndMode3D();
}

void raylib::helper::draw::DrawHelper::beginTextureMode(const RenderTexture2D &target)
{
    BeginTextureMode(target);
}

void raylib::helper::draw::DrawHelper::endTextureMode()
{
    EndTextureMode();
}

void raylib::helper::draw::DrawHelper::beginShaderMode(const Shader &shader)
{
    BeginShaderMode(shader);
}

void raylib::helper::draw::DrawHelper::endShaderMode()
{
    EndShaderMode();
}

void raylib::helper::draw::DrawHelper::beginBlendMode(int mode)
{
    BeginBlendMode(mode);
}

void raylib::helper::draw::DrawHelper::endBlendMode()
{
    EndBlendMode();
}

void raylib::helper::draw::DrawHelper::beginScissorMode(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
}

void raylib::helper::draw::DrawHelper::endScissorMode()
{
    EndScissorMode();
}

void raylib::helper::draw::DrawHelper::beginVrStereoMode(const VrStereoConfig &config)
{
    BeginVrStereoMode(config);
}

void raylib::helper::draw::DrawHelper::endVrStereoMode()
{
    EndVrStereoMode();
}

void raylib::helper::draw::DrawHelper::drawBoundingBox(const BoundingBox &box, const RlColor &color)
{
    DrawBoundingBox(box, color.getColor());
}

void raylib::helper::draw::DrawHelper::drawBillboard(const RlCamera &camera, const texture::RlTexture &texture, const Vector3f &position, float size, const RlColor &tint)
{
    Rectangle source = {0.0f, 0.0f, (float) texture.getWidth(), (float) texture.getHeight() };
    drawBillboardRec(camera, texture, source, position, { size, size }, tint);
}

void raylib::helper::draw::DrawHelper::drawBillboardRec(const RlCamera &camera, const texture::RlTexture &texture, const Rectangle &source, const Vector3f &position,
                                          const Vector2f &size, const RlColor &tint)
{
    drawBillboardPro(camera, texture, source, position,  { 0.0f, 1.0f, 0.0f }, size, {0, 0}, 0.0f, tint);
}

void raylib::helper::draw::DrawHelper::drawBillboardPro(const RlCamera &camera, const texture::RlTexture &texture, const Rectangle &source, const Vector3f &position,
                                          const Vector3f &up, const Vector2f &size, const Vector2f &origin, float rotation, const RlColor &tint)
{
    DrawBillboardPro(camera.get(), texture.get(), source,
                     raylib::helper::VectorHelper::toRaylibVector(position),
                     raylib::helper::VectorHelper::toRaylibVector(up),
                     raylib::helper::VectorHelper::toRaylibVector(size),
                     raylib::helper::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}
