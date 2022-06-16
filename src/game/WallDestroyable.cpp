/*
** EPITECH PROJECT, 2022
** WallDestroyable.cpp
** File description:
** WallDestroyable.cpp
*/


#include "game/WallDestroyable.hpp"

Indie::WallDestroyable::WallDestroyable(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}
