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
