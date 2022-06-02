/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** DrawHelper
*/

#include "raylib/Core/DrawHelper.hpp"

// Drawing-related functions

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

void raylib::DrawHelper::beginMode2D(Camera2D camera)
{
    BeginMode2D(camera);
}

void raylib::DrawHelper::endMode2D()
{
    EndMode2D();
}

void raylib::DrawHelper::beginMode3D(Camera3D camera)
{
    BeginMode3D(camera);
}

void raylib::DrawHelper::endMode3D()
{
    EndMode3D();
}

void raylib::DrawHelper::beginTextureMode(RenderTexture2D target)
{
    BeginTextureMode(target);
}

void raylib::DrawHelper::endTextureMode()
{
    EndTextureMode();
}

void raylib::DrawHelper::beginShaderMode(Shader shader)
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
