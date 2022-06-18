/*
** EPITECH PROJECT, 2022
** RlModelAnimation.cpp
** FileHelper description:
** RlModelAnimation.cpp
*/

#include "raylib/3DObject/RlModelAnimation.hpp"

raylib::model::RlModelAnimation::RlModelAnimation(const RlModel &model, const std::string &fileName) : _model(model)
{
    this->_count = 0;
    _anims = LoadModelAnimations(fileName.c_str(), &this->_count);
    for (unsigned int i = 0; i < this->_count; i++)
        this->_animations.emplace_back(_anims[i]);
    this->_frameCount = 0;
}

raylib::model::RlModelAnimation::~RlModelAnimation()
{
    UnloadModelAnimations(_anims, this->_count);
}

void raylib::model::RlModelAnimation::update(const unsigned int &animIndex)
{
    if (animIndex >= this->_count)
        return;
    UpdateModelAnimation(this->_model.getModel(), this->_animations[animIndex], this->_frameCount);
    if (this->_frameCount >= this->_animations[animIndex].frameCount)
        this->_frameCount = 0;
}

void raylib::model::RlModelAnimation::unload(const unsigned int &animIndex)
{
    if (animIndex < this->_count) {
        UnloadModelAnimation(this->_animations[animIndex]);
        this->_count -= 1;
    }
}

bool raylib::model::RlModelAnimation::animationIndexIsValid(const unsigned int &animIndex)
{
    if (animIndex < this->_count)
        return IsModelAnimationValid(this->_model.getModel(), this->_animations[animIndex]);
    return false;
}

unsigned int raylib::model::RlModelAnimation::getCount() const
{
    return this->_count;
}

void raylib::model::RlModelAnimation::incrementFrameCount(const int &value)
{
    this->_frameCount += value;
}