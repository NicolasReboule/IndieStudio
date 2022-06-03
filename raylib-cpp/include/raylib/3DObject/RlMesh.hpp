/*
** EPITECH PROJECT, 2022
** RlMesh.hpp
** FileHelper description:
** RlMesh.hpp
*/

#ifndef INDIESTUDIO_RLMESH_HPP
#define INDIESTUDIO_RLMESH_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlMesh {
    public:
        // Mesh management functions
        void uploadMesh(Mesh *mesh, bool dynamic);                                                         // Upload mesh vertex data in GPU and provide VAO/VBO ids
        void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);                 // Update mesh vertex data in GPU for a specific buffer index
        void unloadMesh(Mesh mesh);                                                                        // Unload mesh data from CPU and GPU
        void drawMesh(Mesh mesh, Material material, Matrix transform);                                     // DrawHelper a 3d mesh with material and transform
        void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);           // DrawHelper multiple mesh instances with material and different transforms
        bool exportMesh(Mesh mesh, const std::string &fileName);                                                  // Export mesh data to file, returns true on success
        BoundingBox getMeshBoundingBox(Mesh mesh);                                                         // Compute mesh bounding box limits
        void genMeshTangents(Mesh *mesh);                                                                  // Compute mesh tangents
        void genMeshBinormals(Mesh *mesh);                                                                 // Compute mesh binormals
    private:
    };
}

#endif //INDIESTUDIO_RLMESH_HPP
