/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** DrawHelper
*/

#include "raylib/Core/DrawHelper.hpp"

void raylib::DrawHelper::clearBackground(Color color)
{
    ClearBackground(color);
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

void raylib::DrawHelper::beginMode3D(const Camera3D &camera)
{
    BeginMode3D(camera);
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

void raylib::DrawHelper::drawBillboard(Camera camera, Texture2D texture, Vector3f position, float size, Color tint)
{
    DrawBillboard(camera, texture, raylib::VectorHelper::toRaylibVector(position), size, tint);
}

void raylib::DrawHelper::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3f position,
                                          Vector2f size, Color tint)
{
    DrawBillboardRec(camera, texture, source, raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(size), tint);
}

void raylib::DrawHelper::drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3f position,
                                          Vector3f up, Vector2f size, Vector2f origin, float rotation, Color tint)
{
    DrawBillboardPro(camera, texture, source,
                     raylib::VectorHelper::toRaylibVector(position),
                     raylib::VectorHelper::toRaylibVector(up),
                     raylib::VectorHelper::toRaylibVector(size),
                     raylib::VectorHelper::toRaylibVector(origin), rotation, tint);
}
