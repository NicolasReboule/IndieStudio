/*
** EPITECH PROJECT, 2022
** wall.cpp
** File description:
** wall.cpp
*/

#include "game/Wall.hpp"

Indie::Wall::Wall(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath) : StaticBody(name, type, texturepath)
{
}
