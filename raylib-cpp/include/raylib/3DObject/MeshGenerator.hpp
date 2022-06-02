/*
** EPITECH PROJECT, 2022
** MeshGenerator.hpp
** File description:
** MeshGenerator.hpp
*/

#ifndef INDIESTUDIO_MESHGENERATOR_HPP
#define INDIESTUDIO_MESHGENERATOR_HPP

#include <raylib.h>

namespace raylib {
    class MeshGenerator {
    public:
        // Mesh generation functions
        Mesh genMeshPoly(int sides, float radius);                                                         // Generate polygonal mesh
        Mesh genMeshPlane(float width, float length, int resX, int resZ);                                  // Generate plane mesh (with subdivisions)
        Mesh genMeshCube(float width, float height, float length);                                         // Generate cuboid mesh
        Mesh genMeshSphere(float radius, int rings, int slices);                                           // Generate sphere mesh (standard sphere)
        Mesh genMeshHemiSphere(float radius, int rings, int slices);                                       // Generate half-sphere mesh (no bottom cap)
        Mesh genMeshCylinder(float radius, float height, int slices);                                      // Generate cylinder mesh
        Mesh genMeshCone(float radius, float height, int slices);                                          // Generate cone/pyramid mesh
        Mesh genMeshTorus(float radius, float size, int radSeg, int sides);                                // Generate torus mesh
        Mesh genMeshKnot(float radius, float size, int radSeg, int sides);                                 // Generate trefoil knot mesh
        Mesh genMeshHeightmap(Image heightmap, Vector3 size);                                              // Generate heightmap mesh from image data
        Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);                                            // Generate cubes-based map mesh from image data
    private:
    };
}

#endif //INDIESTUDIO_MESHGENERATOR_HPP
