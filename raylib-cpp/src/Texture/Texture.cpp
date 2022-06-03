/*
** EPITECH PROJECT, 2022
** Texture.cpp
** FileHelper description:
** Texture.cpp
*/

#include "raylib/Texture/Texture.hpp"

// Texture loading functions

Texture2D raylib::Texture::loadTexture(const std::string &fileName)
{
    return LoadTexture(fileName.c_str());
}

Texture2D raylib::Texture::loadTextureFromImage(Image image)
{
    return LoadTextureFromImage(image);
}

TextureCubemap raylib::Texture::loadTextureCubemap(Image image, int layout)
{
    return LoadTextureCubemap(image, layout);
}

RenderTexture2D raylib::Texture::loadRenderTexture(int width, int height)
{
    return LoadRenderTexture(width, height);
}

void raylib::Texture::unloadTexture(Texture2D texture)
{
    UnloadTexture(texture);
}

void raylib::Texture::unloadRenderTexture(RenderTexture2D target)
{
    UnloadRenderTexture(target);
}

void raylib::Texture::updateTexture(Texture2D texture, const void *pixels)
{
    UpdateTexture(texture, pixels);
}

void raylib::Texture::updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
{
    UpdateTextureRec(texture, rec, pixels);
}

// Texture configuration functions

void raylib::Texture::genTextureMipmaps(Texture2D *texture)
{
    GenTextureMipmaps(texture);
}

void raylib::Texture::setTextureFilter(Texture2D texture, int filter)
{
    SetTextureFilter(texture, filter);
}

void raylib::Texture::setTextureWrap(Texture2D texture, int wrap)
{
    SetTextureWrap(texture, wrap);
}
