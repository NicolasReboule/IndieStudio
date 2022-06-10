/*
** EPITECH PROJECT, 2022
** RlModelAnim.cpp
** FileHelper description:
** RlModelAnim.cpp
*/

#include "raylib/3DObject/RlModelAnim.hpp"
#include "raylib/3DObject/RlModel.hpp"

// Model animations loading/unloading functions

raylib::RlModelAnim::RlModelAnim(Model model, const std::string &fileName, unsigned int count)
{
    this->animations = LoadModelAnimations(fileName.c_str(), &count);
    this->model = model;
    this->count = count;
    this->frameCount = 0;
}

raylib::RlModelAnim::~RlModelAnim()
{
    UnloadModelAnimations(this->animations, this->count);
}

void raylib::RlModelAnim::update(unsigned int anim)
{
    if (anim < this->count) {
        UpdateModelAnimation(this->model, this->animations[anim],
                             this->frameCount);
        this->frameCount++;
    }
}

void raylib::RlModelAnim::unload(unsigned int anim)
{
    if (anim < this->count) {
        UnloadModelAnimation(this->animations[anim]);
        this->count -= 1;
    }
}

bool raylib::RlModelAnim::animationIsValid(unsigned int anim)
{
    if (anim < this->count)
        return IsModelAnimationValid(this->model, this->animations[anim]);
    else
        return false;
}



/*
ModelAnimation *raylib::RlModelAnim::loadModelAnimations(const std::string &fileName, unsigned int *animCount)
{
    return LoadModelAnimations(fileName.c_str(), animCount);
}

void raylib::RlModelAnim::updateModelAnimation(Model model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(model, anim, frame);
}

void raylib::RlModelAnim::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}

void raylib::RlModelAnim::unloadModelAnimations(ModelAnimation *animations, unsigned int count)
{
    UnloadModelAnimations(animations, count);
}

bool raylib::RlModelAnim::isModelAnimationValid(Model model, ModelAnimation anim)
{
    return IsModelAnimationValid(model, anim);
}
*/
