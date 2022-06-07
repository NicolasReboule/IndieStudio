/*
** EPITECH PROJECT, 2022
** Texture.cpp
** FileHelper description:
** Texture.cpp
*/

#include "raylib/Texture/Texture.hpp"

raylib::Texture::Texture(const std::string &fileName)
{
    _texturePath = fileName;
    this->_texture = LoadTexture(fileName.c_str());
}

raylib::Texture::Texture(Image image)
{
    _texturePath = "";
    this->_texture = LoadTextureFromImage(image);
}

raylib::Texture::~Texture()
{
    UnloadTexture(this->_texture);
}

raylib::Texture::Texture(const raylib::Texture &texture)
{
    *this = texture;
}

// Texture loading functions

TextureCubemap raylib::Texture::loadTextureCubemap(Image image, int layout)
{
    this->_textureCubemap = LoadTextureCubemap(image, layout);
    return this->_textureCubemap;
}

RenderTexture2D raylib::Texture::loadRenderTexture(int width, int height)
{
    this->_renderTexture = LoadRenderTexture(width, height);
    return this->_renderTexture;
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
    this->_textureRec = rec;
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

raylib::Texture &raylib::Texture::operator=(const raylib::Texture &texture)
{
    this->_texture = texture._texture;
    this->_textureRec = texture._textureRec;
    this->_textureCubemap = texture._textureCubemap;
    this->_renderTexture = texture._renderTexture;
    this->_texturePath = texture._texturePath;
    return *this;
}

Texture2D raylib::Texture::getTexture() const
{
    return _texture;
}

std::string raylib::Texture::getTexturePath() const
{
    return _texturePath;
}

Rectangle raylib::Texture::getTextureRec() const
{
    return _textureRec;
}

TextureCubemap raylib::Texture::getTextureCubemap() const
{
    return _textureCubemap;
}

RenderTexture2D raylib::Texture::getRenderTexture() const
{
    return _renderTexture;
}
