/*
** EPITECH PROJECT, 2022
** WallDestroyable.cpp
** File description:
** WallDestroyable.cpp
*/


#include "game/WallDestroyable.hpp"

indie::WallDestroyable::WallDestroyable(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}
