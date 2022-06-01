/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Draw
*/

#include "raylib/Draw.hpp"

raylib::Draw::Draw()
{
}

raylib::Draw::~Draw()
{
}

// Drawing-related functions

void raylib::Draw::clearBackground(Color color)
{
    ClearBackground(color);
}

void raylib::Draw::beginDrawing()
{
    BeginDrawing();
}

void raylib::Draw::endDrawing()
{
    EndDrawing();
}

void raylib::Draw::beginMode2D(Camera2D camera)
{
    BeginMode2D(camera);
}

void raylib::Draw::endMode2D()
{
    EndMode2D();
}

void raylib::Draw::beginMode3D(Camera3D camera)
{
    BeginMode3D(camera);
}

void raylib::Draw::endMode3D()
{
    EndMode3D();
}

void raylib::Draw::beginTextureMode(RenderTexture2D target)
{
    BeginTextureMode(target);
}

void raylib::Draw::endTextureMode()
{
    EndTextureMode();
}

void raylib::Draw::beginShaderMode(Shader shader)
{
    BeginShaderMode(shader);
}

void raylib::Draw::endShaderMode()
{
    EndShaderMode();
}

void raylib::Draw::beginBlendMode(int mode)
{
    BeginBlendMode(mode);
}

void raylib::Draw::endBlendMode()
{
    EndBlendMode();
}

void raylib::Draw::beginScissorMode(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
}

void raylib::Draw::endScissorMode()
{
    EndScissorMode();
}

void raylib::Draw::beginVrStereoMode(VrStereoConfig config)
{
    BeginVrStereoMode(config);
}

void raylib::Draw::endVrStereoMode()
{
    EndVrStereoMode();
}
