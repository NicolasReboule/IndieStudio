/*
** EPITECH PROJECT, 2022
** RlTexture.cpp
** FileHelper description:
** RlTexture.cpp
*/

#include "raylib/Texture/RlTexture.hpp"

raylib::RlTexture::RlTexture(const std::string &fileName)
{
    _texturePath = fileName;
    this->_texture = LoadTexture(fileName.c_str());
}

raylib::RlTexture::RlTexture(Image image)
{
    _texturePath = "";
    this->_texture = LoadTextureFromImage(image);
}

raylib::RlTexture::~RlTexture()
{
    UnloadTexture(this->_texture);
}

raylib::RlTexture::RlTexture(const raylib::RlTexture &texture)
{
    *this = texture;
}

// RlTexture loading functions

TextureCubemap raylib::RlTexture::loadTextureCubemap(Image image, int layout)
{
    this->_textureCubemap = LoadTextureCubemap(image, layout);
    return this->_textureCubemap;
}

RenderTexture2D raylib::RlTexture::loadRenderTexture(int width, int height)
{
    this->_renderTexture = LoadRenderTexture(width, height);
    return this->_renderTexture;
}

void raylib::RlTexture::unloadRenderTexture(RenderTexture2D target)
{
    UnloadRenderTexture(target);
}

void raylib::RlTexture::updateTexture(Texture2D texture, const void *pixels)
{
    UpdateTexture(texture, pixels);
}

void raylib::RlTexture::updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
{
    this->_textureRec = rec;
    UpdateTextureRec(texture, rec, pixels);
}

// RlTexture configuration functions

void raylib::RlTexture::genTextureMipmaps(Texture2D *texture)
{
    GenTextureMipmaps(texture);
}

void raylib::RlTexture::setTextureFilter(Texture2D texture, int filter)
{
    SetTextureFilter(texture, filter);
}

void raylib::RlTexture::setTextureWrap(Texture2D texture, int wrap)
{
    SetTextureWrap(texture, wrap);
}

raylib::RlTexture &raylib::RlTexture::operator=(const raylib::RlTexture &texture)
{
    this->_texture = texture._texture;
    this->_textureRec = texture._textureRec;
    this->_textureCubemap = texture._textureCubemap;
    this->_renderTexture = texture._renderTexture;
    this->_texturePath = texture._texturePath;
    return *this;
}

Texture2D raylib::RlTexture::getTexture() const
{
    return this->_texture;
}

std::string raylib::RlTexture::getTexturePath() const
{
    return _texturePath;
}

Rectangle raylib::RlTexture::getTextureRec() const
{
    return _textureRec;
}

TextureCubemap raylib::RlTexture::getTextureCubemap() const
{
    return _textureCubemap;
}

RenderTexture2D raylib::RlTexture::getRenderTexture() const
{
    return _renderTexture;
}
