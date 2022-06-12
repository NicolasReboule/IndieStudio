/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** DrawHelper
*/

#include "raylib/Draw/DrawHelper.hpp"

void raylib::DrawHelper::clearBackground(const RlColor &color)
{
    ClearBackground(color.getColor());
}

void raylib::DrawHelper::beginDrawing()
{
    BeginDrawing();
}

void raylib::DrawHelper::endDrawing()
{
    EndDrawing();
}

void raylib::DrawHelper::beginMode2D(const Camera2D &camera)
{
    BeginMode2D(camera);
}

void raylib::DrawHelper::endMode2D()
{
    EndMode2D();
}

void raylib::DrawHelper::beginMode3D(const RlCamera &camera)
{
    BeginMode3D(camera.get());
}

void raylib::DrawHelper::endMode3D()
{
    EndMode3D();
}

void raylib::DrawHelper::beginTextureMode(const RenderTexture2D &target)
{
    BeginTextureMode(target);
}

void raylib::DrawHelper::endTextureMode()
{
    EndTextureMode();
}

void raylib::DrawHelper::beginShaderMode(const Shader &shader)
{
    BeginShaderMode(shader);
}

void raylib::DrawHelper::endShaderMode()
{
    EndShaderMode();
}

void raylib::DrawHelper::beginBlendMode(int mode)
{
    BeginBlendMode(mode);
}

void raylib::DrawHelper::endBlendMode()
{
    EndBlendMode();
}

void raylib::DrawHelper::beginScissorMode(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
}

void raylib::DrawHelper::endScissorMode()
{
    EndScissorMode();
}

void raylib::DrawHelper::beginVrStereoMode(VrStereoConfig config)
{
    BeginVrStereoMode(config);
}

void raylib::DrawHelper::endVrStereoMode()
{
    EndVrStereoMode();
}

void raylib::DrawHelper::drawBoundingBox(const BoundingBox &box, const RlColor &color)
{
    DrawBoundingBox(box, color.getColor());
}

void raylib::DrawHelper::drawBillboard(const RlCamera &camera, const RlTexture &texture, const Vector3f &position, float size, const RlColor &tint)
{
    Rectangle source = {0.0f, 0.0f, (float) texture.getWidth(), (float) texture.getHeight() };
    drawBillboardRec(camera, texture, source, position, { size, size }, tint);
}

void raylib::DrawHelper::drawBillboardRec(const RlCamera &camera, const RlTexture &texture, const Rectangle &source, const Vector3f &position,
                                          const Vector2f &size, const RlColor &tint)
{
    drawBillboardPro(camera, texture, source, position,  { 0.0f, 1.0f, 0.0f }, size, {0, 0}, 0.0f, tint);
}

void raylib::DrawHelper::drawBillboardPro(const RlCamera &camera, const RlTexture &texture, const Rectangle &source, const Vector3f &position,
                                          const Vector3f &up, const Vector2f &size, const Vector2f &origin, float rotation, const RlColor &tint)
{
    DrawBillboardPro(camera.get(), texture.get(), source,
                     raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(up),
                     raylib::VectorHelper::toRaylibVector(size),
                     raylib::VectorHelper::toRaylibVector(origin), rotation, tint.getColor());
}
