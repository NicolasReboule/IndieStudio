/*
** EPITECH PROJECT, 2022
** Material.cpp
** FileHelper description:
** Material.cpp
*/

#include "raylib/3DObject/RlMaterial.hpp"

raylib::model::RlMaterial::RlMaterial() : _material(LoadMaterialDefault())
{
    _materialCount = 1;
}

raylib::model::RlMaterial::~RlMaterial()
{
    UnloadMaterial(this->_material);
}

// Material loading/unloading functions

Material *raylib::model::RlMaterial::loadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

void raylib::model::RlMaterial::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}

void raylib::model::RlMaterial::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}

const Material &raylib::model::RlMaterial::getMaterial() const
{
    return _material;
}

const int &raylib::model::RlMaterial::getMaterialCount() const
{
    return _materialCount;
}
