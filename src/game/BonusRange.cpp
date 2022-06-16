/*
** EPITECH PROJECT, 2022
** BonusRange.cpp
** File description:
** BonusRange.cpp
*/


#include "game/BonusRange.hpp"

indie::BonusRange::BonusRange(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
    this->_collisionEnable = false;
}

void indie::BonusRange::ready()
{
}

void indie::BonusRange::update(float delta)
{
}
