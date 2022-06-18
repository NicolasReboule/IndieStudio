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

namespace raylib::helper {
    /**
     * @brief Helper class for Model
     */
    class ModelHelper {
    public:

        /**
         * @brief Unload a model but keep the model's mesh
         * @warning RlModel already unload it's model
         * @param model to unload
         */
        static void unloadModelKeepMeshes(Model model);

        /**
         * @brief Get the BoundingBox of a model (Compute model bounding box limits (considers all meshes))
         * @warning The BoundingBox is not updated if the model is updated after the call of this function
         * @param model to get the BoundingBox from
         * @return the BoundingBox of the model
         */
        static BoundingBox getModelBoundingBox(Model model);

    };
}

#endif //INDIESTUDIO_MODELHELPER_HPP
