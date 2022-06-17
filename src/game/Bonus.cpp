/*
** EPITECH PROJECT, 2022
** Bonus.cpp
** File description:
** Bonus.cpp
*/


#include "game/Bonus.hpp"

indie::Bonus::Bonus(const std::string &name, const std::string &objPath)
    : StaticBody(name, objPath, "")
{
    this->_collisionEnable = false;
    this->setScale({0.8, 0.8, 0.8});
}

indie::Bonus::Bonus(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
    this->_collisionEnable = false;
}

void indie::Bonus::ready()
{
}

void indie::Bonus::update(float delta)
{
    this->setRotationDegrees(this->getRotationDegrees() + 100 * delta,{0, 1, 0});
}

indie::Bonus::BonusType indie::Bonus::getBonusType()
{
    return this->_type;
}

void indie::Bonus::setBonusType(indie::Bonus::BonusType type)
{
    this->_type = type;
}


