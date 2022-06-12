/*
** EPITECH PROJECT, 2022
** RlTexture.cpp
** FileHelper description:
** RlTexture.cpp
*/

#include "raylib/Texture/RlTexture.hpp"

raylib::RlTexture::RlTexture(const std::string &fileName) : _texture(), _textureRec()
{
    this->_texturePath = fileName;
    this->_texture = LoadTexture(fileName.c_str());
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::RlTexture::RlTexture(const RlImage &image) : _texture(), _textureRec()
{
    this->_texturePath = "";
    this->_texture = LoadTextureFromImage(image.getImage());
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::RlTexture::RlTexture(const raylib::RlImage &image, const CubemapLayout &layout) : _texture(), _textureRec()
{
    this->_texturePath = "";
    this->_texture = LoadTextureCubemap(image.getImage(), layout);
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::RlTexture::~RlTexture()
{
    UnloadTexture(this->_texture);
}

void raylib::RlTexture::update(const void *pixels)
{
    UpdateTexture(this->_texture, pixels);
}

void raylib::RlTexture::updateRec(const Rectangle &rec, const void *pixels)
{
    UpdateTextureRec(this->_texture, rec, pixels);
}

void raylib::RlTexture::genTextureMipmaps()
{
    GenTextureMipmaps(&this->_texture);
}

void raylib::RlTexture::setTextureFilter(const TextureFilter &filter)
{
    SetTextureFilter(this->_texture, filter);
}

void raylib::RlTexture::setTextureWrap(const TextureWrap &wrap)
{
    SetTextureWrap(this->_texture, wrap);
}

Texture2D &raylib::RlTexture::getTexture()
{
    return this->_texture;
}

const Texture2D &raylib::RlTexture::getTexture() const
{
    return this->_texture;
}

const std::string &raylib::RlTexture::getTexturePath() const
{
    return _texturePath;
}

const Rectangle &raylib::RlTexture::getTextureRec() const
{
    return _textureRec;
}
