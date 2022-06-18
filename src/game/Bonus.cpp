/*
** EPITECH PROJECT, 2022
** Bonus.cpp
** File description:
** Bonus.cpp
*/

#include "game/Bonus.hpp"

indie::Bonus::Bonus(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, model, texture), _type()
{
    this->_collisionEnable = false;
}

void indie::Bonus::init()
{
}

void indie::Bonus::update(const float &delta)
{
    this->setRotationDegrees(this->getRotationDegrees() + 100 * delta, {0, 1, 0});
}

const indie::Bonus::BonusType &indie::Bonus::getBonusType() const
{
    return this->_type;
}

void indie::Bonus::setBonusType(const indie::Bonus::BonusType &type)
{
    this->_type = type;
}


