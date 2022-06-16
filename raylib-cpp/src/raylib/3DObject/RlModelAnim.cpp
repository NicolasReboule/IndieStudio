/*
** EPITECH PROJECT, 2022
** RlModelAnim.cpp
** FileHelper description:
** RlModelAnim.cpp
*/

#include "raylib/3DObject/RlModelAnim.hpp"

raylib::RlModelAnim::RlModelAnim(const RlModel &model, const std::string &fileName) : _model(model)
{
    this->_count = 0;
    _anims = LoadModelAnimations(fileName.c_str(), &this->_count);
    for (unsigned int i = 0; i < this->_count; i++)
        this->_animations.emplace_back(_anims[i]);
    this->_frameCount = 0;
}

raylib::RlModelAnim::~RlModelAnim()
{
    UnloadModelAnimations(_anims, this->_count);
}

void raylib::RlModelAnim::update(const unsigned int &animIndex)
{
    if (animIndex >= this->_count)
        return;
    this->_frameCount++;
    UpdateModelAnimation(this->_model.getModel(), this->_animations[animIndex], this->_frameCount);
    if (this->_frameCount >= this->_animations[animIndex].frameCount)
        this->_frameCount = 0;
}

void raylib::RlModelAnim::unload(const unsigned int &animIndex)
{
    if (animIndex < this->_count) {
        UnloadModelAnimation(this->_animations[animIndex]);
        this->_count -= 1;
    }
}

bool raylib::RlModelAnim::animationIndexIsValid(const unsigned int &animIndex)
{
    if (animIndex < this->_count)
        return IsModelAnimationValid(this->_model.getModel(), this->_animations[animIndex]);
    return false;
}

unsigned int raylib::RlModelAnim::getCount() const
{
    return _count;
}
