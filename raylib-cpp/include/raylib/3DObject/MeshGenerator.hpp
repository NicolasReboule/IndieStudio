/*
** EPITECH PROJECT, 2022
** MeshGenerator.hpp
** FileHelper description:
** MeshGenerator.hpp
*/

#ifndef INDIESTUDIO_MESHGENERATOR_HPP
#define INDIESTUDIO_MESHGENERATOR_HPP

#include <raylib.h>

namespace raylib {
    class MeshGenerator {
    public:
        // Mesh generation functions
        static Mesh genMeshPoly(int sides, float radius);                                                         // Generate polygonal mesh
        static Mesh genMeshPlane(float width, float length, int resX, int resZ);                                  // Generate plane mesh (with subdivisions)
        static Mesh genMeshCube(float width, float height, float length);                                         // Generate cuboid mesh
        static Mesh genMeshSphere(float radius, int rings, int slices);                                           // Generate sphere mesh (standard sphere)
        static Mesh genMeshHemiSphere(float radius, int rings, int slices);                                       // Generate half-sphere mesh (no bottom cap)
        static Mesh genMeshCylinder(float radius, float height, int slices);                                      // Generate cylinder mesh
        static Mesh genMeshCone(float radius, float height, int slices);                                          // Generate cone/pyramid mesh
        static Mesh genMeshTorus(float radius, float size, int radSeg, int sides);                                // Generate torus mesh
        static Mesh genMeshKnot(float radius, float size, int radSeg, int sides);                                 // Generate trefoil knot mesh
        static Mesh genMeshHeightmap(Image heightmap, Vector3 size);                                              // Generate heightmap mesh from image data
        static Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);                                            // Generate cubes-based map mesh from image data
    private:
    };
}

#endif //INDIESTUDIO_MESHGENERATOR_HPP
