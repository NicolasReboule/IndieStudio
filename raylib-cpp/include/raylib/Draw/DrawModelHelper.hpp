/*
** EPITECH PROJECT, 2022
** DrawModelHelper.hpp
** File description:
** DrawModelHelper.hpp
*/

#ifndef INDIESTUDIO_DRAWMODELHELPER_HPP
#define INDIESTUDIO_DRAWMODELHELPER_HPP

#include "raylib/Math.hpp"
#include "raylib/Color/RlColor.hpp"
#include "raylib/3DObject/RlMesh.hpp"
#include "raylib/3DObject/RlModel.hpp"
#include "raylib/3DObject/RlMaterial.hpp"
#include "raylib/GlStateManager.hpp"
#include <raylib.h>

namespace raylib::helper::draw {
    /**
     * @brief Helper class for drawing models and meshes
     */
    class DrawModelHelper {
    public:
        /**
         * @brief Draw a 3d mesh with material and transform
         * @param mesh Mesh to draw
         * @param material Material to use
         * @param transform Transform to use
         */
        static void drawMesh(const raylib::model::RlMesh &mesh, const raylib::model::RlMaterial &material, const Matrix &transform);

        /**
         * @brief Draw multiple mesh instances with material and different transforms
         * @param mesh Mesh to draw
         * @param material Material to use
         * @param transforms Transforms to use (not modified through this function)
         */
        static void drawMeshInstanced(const raylib::model::RlMesh &mesh, const raylib::model::RlMaterial &material, std::vector<Matrix> &transforms);

        /**
         * @brief Draw a 3d model
         * @param model the model to draw
         */
        static void drawModel(const raylib::model::RlModel &model);

        /**
         * @brief Draw a model (with texture if set)
         * @param model the model to draw
         * @param position the position to draw the model
         * @param scale the scale to draw the model
         * @param tint the tint to draw the model
         */
        static void drawModel(const raylib::model::RlModel &model, const Vector3f &position, const float &scale, const RlColor &tint);

        /**
         * @brief Draw a model with extended parameters
         * @param model the model to draw
         * @param position the position to draw the model
         * @param rotationAxis the axis to rotate the model around
         * @param rotationAngle the angle to rotate the model around
         * @param scale the scale to draw the model
         * @param tint the tint to draw the model
         */
        static void drawModel(const raylib::model::RlModel &model, const Vector3f &position, const Vector3f &rotationAxis, const float &rotationAngle, const Vector3f &scale, const RlColor &tint);

        /**
         * @brief Draw a model with extended parameters
         * @param model the model to draw
         */
        static void drawModelWires(const raylib::model::RlModel &model);

        /**
         * @brief Draw a model wires (with texture if set)
         * @param model the model to draw
         * @param position the position to draw the model
         * @param scale the scale to draw the model
         * @param tint the tint to draw the model
         */
        static void drawModelWires(const raylib::model::RlModel &model, const Vector3f &position, const float &scale, const RlColor &tint);

        /**
         * @brief Draw a model wires (with texture if set) with extended parameters
         * @param model the model to draw
         * @param position the position to draw the model
         * @param rotationAxis the axis to rotate the model around
         * @param rotationAngle the angle to rotate the model around
         * @param scale the scale to draw the model
         * @param tint the tint to draw the model
         */
        static void drawModelWires(const raylib::model::RlModel &model, const Vector3f &position, const Vector3f &rotationAxis, const float &rotationAngle, const Vector3f &scale, const RlColor &tint);

    };
}

#endif //INDIESTUDIO_DRAWMODELHELPER_HPP
