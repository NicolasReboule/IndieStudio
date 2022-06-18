/*
** EPITECH PROJECT, 2022
** RlTexture.cpp
** FileHelper description:
** RlTexture.cpp
*/

#include "raylib/Texture/RlTexture.hpp"

raylib::texture::RlTexture::RlTexture(const std::string &fileName) : _texture(), _textureRec()
{
    this->_texturePath = fileName;
    this->_texture = LoadTexture(fileName.c_str());
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::texture::RlTexture::RlTexture(const raylib::image::RlImage &image) : _texture(), _textureRec()
{
    this->_texturePath = "";
    this->_texture = LoadTextureFromImage(image.getImage());
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::texture::RlTexture::RlTexture(const raylib::image::RlImage &image, const CubemapLayout &layout) : _texture(), _textureRec()
{
    this->_texturePath = "";
    this->_texture = LoadTextureCubemap(image.getImage(), layout);
    this->_textureRec = {0, 0, (float) this->_texture.width, (float) this->_texture.height};
}

raylib::texture::RlTexture::~RlTexture()
{
    UnloadTexture(this->_texture);
}

void raylib::texture::RlTexture::update(const void *pixels)
{
    UpdateTexture(this->_texture, pixels);
}

void raylib::texture::RlTexture::updateRect(const Rectangle &rec, const void *pixels)
{
    UpdateTextureRec(this->_texture, rec, pixels);
}

void raylib::texture::RlTexture::genTextureMipmaps()
{
    GenTextureMipmaps(&this->_texture);
}

void raylib::texture::RlTexture::setFilter(const TextureFilter &filter)
{
    SetTextureFilter(this->_texture, filter);
}

void raylib::texture::RlTexture::setWrap(const TextureWrap &wrap)
{
    SetTextureWrap(this->_texture, wrap);
}

Texture2D &raylib::texture::RlTexture::getTexture()
{
    return this->_texture;
}

const Texture2D &raylib::texture::RlTexture::get() const
{
    return this->_texture;
}

const std::string &raylib::texture::RlTexture::getPath() const
{
    return _texturePath;
}

const Rectangle &raylib::texture::RlTexture::getTextureRec() const
{
    return _textureRec;
}

const unsigned int &raylib::texture::RlTexture::getID() const
{
    return this->_texture.id;
}

const int &raylib::texture::RlTexture::getWidth() const
{
    return this->_texture.width;
}

const int &raylib::texture::RlTexture::getHeight() const
{
    return this->_texture.height;
}

const int &raylib::texture::RlTexture::getMipmaps() const
{
    return this->_texture.mipmaps;
}

const int &raylib::texture::RlTexture::getFormat() const
{
    return this->_texture.format;
}
