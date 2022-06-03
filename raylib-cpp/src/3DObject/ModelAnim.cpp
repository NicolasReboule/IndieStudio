/*
** EPITECH PROJECT, 2022
** ModelAnim.cpp
** FileHelper description:
** ModelAnim.cpp
*/

#include "raylib/3DObject/ModelAnim.hpp"

// Model animations loading/unloading functions

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
