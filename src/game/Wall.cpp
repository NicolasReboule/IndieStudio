/*
** EPITECH PROJECT, 2022
** wall.cpp
** File description:
** wall.cpp
*/

#include "game/Wall.hpp"

indie::Wall::Wall(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, model, texture)
{
}
