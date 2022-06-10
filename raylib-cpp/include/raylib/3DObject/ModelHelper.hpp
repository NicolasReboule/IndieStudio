/*
** EPITECH PROJECT, 2022
** ModelHelper.hpp
** FileHelper description:
** ModelHelper.hpp
*/

#ifndef INDIESTUDIO_MODELHELPER_HPP
#define INDIESTUDIO_MODELHELPER_HPP

#include "raylib.h"
#include "RlModel.hpp"

namespace raylib {
    class ModelHelper {
    public:
        // Model drawing functions
        static void drawModel(const RlModel &model);                            // DrawHelper a model (with texture if set)
        static void drawModelWires(const RlModel &model); // DrawHelper a model wires (with texture if set) with extended parameters

        static void unloadModelKeepMeshes(Model model);                                                           // Unload model (but not meshes) from memory (RAM and/or VRAM)

        static BoundingBox getModelBoundingBox(Model model);                                                      // Compute model bounding box limits (considers all meshes)

    private:
    };
}

#endif //INDIESTUDIO_MODELHELPER_HPP
