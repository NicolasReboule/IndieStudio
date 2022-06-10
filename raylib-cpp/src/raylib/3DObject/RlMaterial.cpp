/*
** EPITECH PROJECT, 2022
** Material.cpp
** FileHelper description:
** Material.cpp
*/

#include "raylib/3DObject/RlMaterial.hpp"

raylib::RlMaterial::RlMaterial() : _material(LoadMaterialDefault())
{
    _materialCount = 1;
}

raylib::RlMaterial::~RlMaterial()
{
    UnloadMaterial(this->_material);
}

// Material loading/unloading functions

Material *raylib::RlMaterial::loadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

void raylib::RlMaterial::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}

void raylib::RlMaterial::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}

const Material &raylib::RlMaterial::getMaterial() const
{
    return _material;
}

const int &raylib::RlMaterial::getMaterialCount() const
{
    return _materialCount;
}
