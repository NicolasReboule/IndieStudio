/*
** EPITECH PROJECT, 2022
** MeshHelper.hpp
** File description:
** MeshHelper.hpp
*/

#ifndef INDIESTUDIO_MESHHELPER_HPP
#define INDIESTUDIO_MESHHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class MeshHelper {
    public:
        static void drawMesh(Mesh mesh, Material material, Matrix transform);                                     // DrawHelper a 3d mesh with material and transform
        static void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);           // DrawHelper multiple mesh instances with material and different transforms
        static bool exportMesh(Mesh mesh, const std::string &fileName);                                                  // Export mesh data to file, returns true on success
        static BoundingBox getMeshBoundingBox(Mesh mesh);                                                         // Compute mesh bounding box limits
        static void genMeshTangents(Mesh *mesh);                                                                  // Compute mesh tangents
        static void genMeshBinormals(Mesh *mesh);
    private:
    };
}

#endif //INDIESTUDIO_MESHHELPER_HPP
