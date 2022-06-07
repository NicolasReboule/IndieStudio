/*
** EPITECH PROJECT, 2022
** ModelAnim.cpp
** FileHelper description:
** ModelAnim.cpp
*/

#include "raylib/3DObject/ModelAnim.hpp"

// Model animations loading/unloading functions

raylib::ModelAnim::ModelAnim(Model model, const std::string &fileName, unsigned int *count)
{
    this->animations = LoadModelAnimations(fileName.c_str(), count);
    this->model = model;
    this->count = count;
}

raylib::ModelAnim::~ModelAnim()
{
    UnloadModelAnimations(this->animations, *this->count);
}

void raylib::ModelAnim::update(unsigned int anim, int frame)
{
    if (anim < *this->count)
        UpdateModelAnimation(this->model, this->animations[anim], frame);
}

void raylib::ModelAnim::unload(unsigned int anim)
{
    if (anim < *this->count) {
        UnloadModelAnimation(this->animations[anim]);
        this->count -= 1;
    }
}

bool raylib::ModelAnim::animationIsValid(unsigned int anim)
{
    if (anim < *this->count)
        return IsModelAnimationValid(this->model, this->animations[anim]);
    else
        return false;
}

/*
ModelAnimation *raylib::ModelAnim::loadModelAnimations(const std::string &fileName, unsigned int *animCount)
{
    return LoadModelAnimations(fileName.c_str(), animCount);
}

void raylib::ModelAnim::updateModelAnimation(Model model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(model, anim, frame);
}

void raylib::ModelAnim::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}

void raylib::ModelAnim::unloadModelAnimations(ModelAnimation *animations, unsigned int count)
{
    UnloadModelAnimations(animations, count);
}

bool raylib::ModelAnim::isModelAnimationValid(Model model, ModelAnimation anim)
{
    return IsModelAnimationValid(model, anim);
}
*/
