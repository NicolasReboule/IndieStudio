/*
** EPITECH PROJECT, 2022
** Image.cpp
** File description:
** Image.cpp
*/

#include "start/Image.hpp"

indie::Image::Image(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture) : gameengine::node::_2D::TextureRect(name, texture)
{

}

void indie::Image::init()
{
}

void indie::Image::update(const float &delta)
{
}
