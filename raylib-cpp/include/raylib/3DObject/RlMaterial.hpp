/*
** EPITECH PROJECT, 2022
** Material.hpp
** File description:
** Material.hpp
*/

#ifndef INDIESTUDIO_RLMATERIAL_HPP
#define INDIESTUDIO_RLMATERIAL_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlMaterial {
    public:
        // Material loading/unloading functions
        static Material *loadMaterials(const std::string &fileName, int *materialCount);                                 // Load materials from model file
        static Material loadMaterialDefault();                                                                // Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
        static void unloadMaterial(Material material);                                                            // Unload material from GPU memory (VRAM)
        static void setMaterialTexture(Material *material, int mapType, Texture2D texture);                       // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
        static void setModelMeshMaterial(Model *model, int meshId, int materialId);                               // Set material for a mesh

    private:
    };
}
#endif //INDIESTUDIO_RLMATERIAL_HPP
