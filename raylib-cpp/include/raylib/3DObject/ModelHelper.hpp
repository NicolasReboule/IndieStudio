/*
** EPITECH PROJECT, 2022
** ModelHelper.hpp
** FileHelper description:
** ModelHelper.hpp
*/

#ifndef INDIESTUDIO_MODELHELPER_HPP
#define INDIESTUDIO_MODELHELPER_HPP

#include "RlModel.hpp"
#include <raylib.h>

namespace raylib {
    class ModelHelper {
    public:

        /**
         * @brief Draw a model
         * @param model to draw
         */
        static void drawModel(const RlModel &model);

        /**
         * @brief Draw a model wires
         * @param model to draw
         */
        static void drawModelWires(const RlModel &model); // DrawHelper a model wires (with texture if set) with extended parameters

        /**
         * @brief Unload a model but keep the model's mesh
         * @warning RlModel already unload it's model
         * @param model to unload
         */
        static void unloadModelKeepMeshes(Model model);

        /**
         * @brief Get the BoundingBox of a model
         * @warning The BoundingBox is not updated if the model is updated after the call of this function
         * @param model to get the BoundingBox from
         * @return the BoundingBox of the model
         */
        static BoundingBox getModelBoundingBox(Model model);                                                      // Compute model bounding box limits (considers all meshes)

    private:
    };
}

#endif //INDIESTUDIO_MODELHELPER_HPP
