/*
** EPITECH PROJECT, 2022
** Material.cpp
** FileHelper description:
** Material.cpp
*/

#include "raylib/3DObject/RlMaterial.hpp"

raylib::models::RlMaterial::RlMaterial() : _material(LoadMaterialDefault())
{
    _materialCount = 1;
}

raylib::models::RlMaterial::~RlMaterial()
{
    UnloadMaterial(this->_material);
}

// Material loading/unloading functions

Material *raylib::models::RlMaterial::loadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

void raylib::models::RlMaterial::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}

void raylib::models::RlMaterial::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}

const Material &raylib::models::RlMaterial::getMaterial() const
{
    return _material;
}

const int &raylib::models::RlMaterial::getMaterialCount() const
{
    return _materialCount;
}
