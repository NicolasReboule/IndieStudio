/*
** EPITECH PROJECT, 2022
** Material.hpp
** FileHelper description:
** Material.hpp
*/

#ifndef INDIESTUDIO_RLMATERIAL_HPP
#define INDIESTUDIO_RLMATERIAL_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlMaterial {
    public:
        RlMaterial();
        ~RlMaterial();
        // Material loading/unloading functions
        Material *loadMaterials(const std::string &fileName, int *materialCount);                                 // Load materials from model file
        void setMaterialTexture(Material *material, int mapType, Texture2D texture);                       // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
        void setModelMeshMaterial(Model *model, int meshId, int materialId);                               // Set material for a mesh

        const Material &getMaterial() const;
        const int &getMaterialCount() const;
    private:
        Material _material;
        int _materialCount;
    };
}
#endif //INDIESTUDIO_RLMATERIAL_HPP
