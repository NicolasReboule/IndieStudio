/*
** EPITECH PROJECT, 2022
** Material.cpp
** File description:
** Material.cpp
*/

#include "raylib/3DObject/RlMaterial.hpp"

// Material loading/unloading functions

Material *raylib::RlMaterial::loadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

Material raylib::RlMaterial::loadMaterialDefault()
{
    return LoadMaterialDefault();
}

void raylib::RlMaterial::unloadMaterial(Material material)
{
    UnloadMaterial(material);
}

void raylib::RlMaterial::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}

void raylib::RlMaterial::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}
