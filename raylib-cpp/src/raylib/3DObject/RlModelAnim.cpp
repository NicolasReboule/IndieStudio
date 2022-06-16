/*
** EPITECH PROJECT, 2022
** RlModelAnim.cpp
** FileHelper description:
** RlModelAnim.cpp
*/

#include "raylib/3DObject/RlModelAnim.hpp"

raylib::RlModelAnim::RlModelAnim(const RlModel &model, const std::string &fileName) : _model()
{
    this->_count = 0;
    this->_animations = LoadModelAnimations(fileName.c_str(), &this->_count);
    this->_model = model;
    this->_frameCount = 0;
}

raylib::RlModelAnim::~RlModelAnim()
{
    UnloadModelAnimations(this->_animations, this->_count);
}

void raylib::RlModelAnim::update(unsigned int anim)
{
    if (anim < this->_count) {
        UpdateModelAnimation(this->_model, this->_animations[anim],this->_frameCount);
        this->_frameCount++;
    }
}

void raylib::RlModelAnim::unload(unsigned int anim)
{
    if (anim < this->_count) {
        UnloadModelAnimation(this->_animations[anim]);
        this->_count -= 1;
    }
}

bool raylib::RlModelAnim::animationIsValid(unsigned int anim)
{
    if (anim < this->_count)
        return IsModelAnimationValid(this->_model, this->_animations[anim]);
    else
        return false;
}

unsigned int raylib::RlModelAnim::getCount() const
{
    return _count;
}

/*
ModelAnimation *raylib::RlModelAnim::loadModelAnimations(const std::string &fileName, unsigned int *animCount)
{
    return LoadModelAnimations(fileName.c_str(), animCount);
}

void raylib::RlModelAnim::updateModelAnimation(Model _model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(_model, anim, frame);
}

void raylib::RlModelAnim::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}

void raylib::RlModelAnim::unloadModelAnimations(ModelAnimation *_animations, unsigned int _count)
{
    UnloadModelAnimations(_animations, _count);
}

bool raylib::RlModelAnim::isModelAnimationValid(Model _model, ModelAnimation anim)
{
    return IsModelAnimationValid(_model, anim);
}
*/
