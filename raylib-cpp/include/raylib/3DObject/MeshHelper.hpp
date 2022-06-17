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

        /**
         * @brief Export mesh data to file
         * @param mesh Mesh to export
         * @param fileName File name to export the mesh in
         * @return True on sucess
         */
        static bool exportMesh(Mesh mesh, const std::string &fileName);

        /**
         * @brief Get a mesh bounding box
         * @param mesh Mesh to get the bounding box from
         * @return Bounding box of the mesh
         */
        static BoundingBox getMeshBoundingBox(Mesh mesh);

        /**
         * @brief Get mesh tangents
         * @param mesh Mesh to get the tangents from
         */
        static void genMeshTangents(Mesh *mesh); //TODO: Remove pointers

        /**
         * @brief Get mesh binormals
         * @param mesh Mesh to get the binormals from
         */
        static void genMeshBinormals(Mesh *mesh);

        /**
         * @brief Upload mesh vertex data in GPU and provide VAO/VBO ids
         * @param mesh Mesh to upload
         * @param dynamic Dynamic to use
         */
        static void uploadMesh(Mesh *mesh, bool dynamic);

        /**
         * @brief Update mesh vertex data in GPU for a specific buffer index
         * @param mesh Mesh to update
         * @param index Index of the buffer to update
         * @param data Data to update
         * @param dataSize Data size
         * @param offset Offset to update
         */
        static void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);
    };
}

#endif //INDIESTUDIO_MESHHELPER_HPP
