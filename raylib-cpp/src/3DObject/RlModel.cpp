/*
** EPITECH PROJECT, 2022
** Model.cpp
** File description:
** Model.cpp
*/

#include "raylib/3DObject/RlModel.hpp"

// Model loading/unloading functions

Model raylib::RlModel::loadModel(const std::string &fileName)
{
    return LoadModel(fileName.c_str());
}

Model raylib::RlModel::loadModelFromMesh(Mesh mesh)
{
    return LoadModelFromMesh(mesh);
}

void raylib::RlModel::unloadModel(Model model)
{
    UnloadModel(model);
}

void raylib::RlModel::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}

BoundingBox raylib::RlModel::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}
