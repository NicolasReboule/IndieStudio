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
        RlMesh() = default;
        ~RlMesh() = default;
        // Mesh management functions
        void uploadMesh(Mesh *mesh, bool dynamic);                                                         // Upload mesh vertex data in GPU and provide VAO/VBO ids
        void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);                 // Update mesh vertex data in GPU for a specific buffer index
        void unloadMesh(Mesh mesh);                                                                        // Unload mesh data from CPU and GPU         // Compute mesh binormals
    private:
    };
}

#endif //INDIESTUDIO_RLMESH_HPP
