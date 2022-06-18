/*
** EPITECH PROJECT, 2022
** MeshHelper.hpp
** File description:
** MeshHelper.hpp
*/

#ifndef INDIESTUDIO_MESHHELPER_HPP
#define INDIESTUDIO_MESHHELPER_HPP

#include "raylib/3DObject/RlMesh.hpp"
#include <raylib.h>
#include <string>

namespace raylib::helper {
    /**
     * @brief Helper class for Mesh
     */
    class MeshHelper {
    public:

        /**
         * @brief Draw a 3d mesh with material and transform
         * @param mesh Mesh to draw
         * @param material Material to use
         * @param transform Transform to use
         */
        static void drawMesh(Mesh mesh, Material material, Matrix transform);

        /**
         * @brief Draw multiple mesh instances with material and different transforms
         * @param mesh Mesh to draw
         * @param material Material to use
         * @param transforms Transforms to use
         * @param instances Number of instances
         */
        static void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);

    };
}

#endif //INDIESTUDIO_MESHHELPER_HPP
