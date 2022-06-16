/*
** EPITECH PROJECT, 2022
** RlRenderTexture.cpp
** File description:
** RlRenderTexture.cpp
*/

#include "raylib/Texture/RlRenderTexture.hpp"

raylib::texture::RlRenderTexture::RlRenderTexture(int width, int height) : _renderTexture()
{
    this->_renderTexture = LoadRenderTexture(width, height);
}

raylib::texture::RlRenderTexture::~RlRenderTexture()
{
    UnloadRenderTexture(this->_renderTexture);
}

const RenderTexture2D &raylib::texture::RlRenderTexture::getRenderTexture() const
{
    return this->_renderTexture;
}

