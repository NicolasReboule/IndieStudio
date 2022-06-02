/*
** EPITECH PROJECT, 2022
** Model.hpp
** File description:
** Model.hpp
*/

#ifndef INDIESTUDIO_RLMODEL_HPP
#define INDIESTUDIO_RLMODEL_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlModel {
    public:
        // Model loading/unloading functions
        static Model loadModel(const std::string &fileName);                                                             // Load model from files (meshes and materials)
        static Model loadModelFromMesh(Mesh mesh);                                                                // Load model from generated mesh (default material)
        static void unloadModel(Model model);                                                                     // Unload model (including meshes) from memory (RAM and/or VRAM)
        static void unloadModelKeepMeshes(Model model);                                                           // Unload model (but not meshes) from memory (RAM and/or VRAM)
        static BoundingBox getModelBoundingBox(Model model);                                                      // Compute model bounding box limits (considers all meshes)
    private:
    };
}

#endif //INDIESTUDIO_RLMODEL_HPP
