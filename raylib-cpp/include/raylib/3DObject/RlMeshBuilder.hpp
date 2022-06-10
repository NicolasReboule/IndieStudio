/*
** EPITECH PROJECT, 2022
** RlMesh.hpp
** FileHelper description:
** RlMesh.hpp
*/

#ifndef INDIESTUDIO_RLMESHBUILDER_HPP
#define INDIESTUDIO_RLMESHBUILDER_HPP

#include <string>
#include <raylib.h>
#include "MeshGenerator.hpp"
#include "raylib/IBuilder.hpp"
#include "raylib/exception/BuilderException.hpp"
#include "RlMesh.hpp"

namespace raylib {

    class RlMeshBuilder : public IBuilder<RlMesh> {
    public:
        enum ParameterName {
            Sides = 1,
            Radius = 2,
            Width = 4,
            Length = 8,
            Height = 16,
            ResX = 32,
            ResZ = 64,
            Rings = 128,
            Slices = 256,
            Size = 512,
            RadSeg = 1024,
            Heightmap = 2048,
            Vec3fSize = 4096,
            Cubicmap = 8192,
            CubeSize = 16384,
            ConeSlices = 32768,
            HemisphereRings = 65536,
            KnotRadSeg = 131072
        };
        enum MeshType {
            MeshPoly = Sides | Radius,
            MeshPlane = Width | Length | ResX | ResZ,
            MeshCube = Width | Height | Length,
            MeshSphere = Radius | Rings | Slices,
            MeshHemiSphere = Radius | HemisphereRings | Slices,
            MeshCylinder = Radius | Height | Slices,
            MeshCone = Radius | Height | ConeSlices,
            MeshTorus = Radius | Size | RadSeg | Sides,
            MeshKnot = Radius | Size | KnotRadSeg | Sides,
            MeshHeightmap = Heightmap | Vec3fSize,
            MeshCubicmap = Cubicmap | CubeSize,
        };

        RlMeshBuilder();

        RlMeshBuilder &setMeshType(MeshType meshType);
        RlMeshBuilder &setRadius(float radius);
        RlMeshBuilder &setWidth(float width);
        RlMeshBuilder &setLength(float length);
        RlMeshBuilder &setHeight(float height);
        RlMeshBuilder &setResX(int resX);
        RlMeshBuilder &setResZ(int resZ);
        RlMeshBuilder &setRings(int rings);
        RlMeshBuilder &setHemisphereRings(int rings);
        RlMeshBuilder &setSlices(int slices);
        RlMeshBuilder &setConeSlices(int slices);
        RlMeshBuilder &setSize(float size);
        RlMeshBuilder &setRadSeg(int radSeg);
        RlMeshBuilder &setKnotRadSeg(int radSeg);
        RlMeshBuilder &setSides(int sides);
        RlMeshBuilder &setHeightmap(Image heightmap);
        RlMeshBuilder &setVec3fSize(Vector3f size);
        RlMeshBuilder &setCubicmap(Image cubicmap);
        RlMeshBuilder &setCubeSize(Vector3f cubeSize);

        RlMesh build() override;
    private:
        Mesh _mesh;
        long _flags;
        float _radius;
        float _width;
        float _height;
        float _length;
        int _slices;
        int _rings;
        int _resX;
        int _resZ;
        int _radSeg;
        int _sides;
        float _size;
        long _type;
        Image _heightmap;
        Vector3f _vec3fSize;
        Image _cubicmap;
        Vector3f _cubeSize;
    };
}

#endif //INDIESTUDIO_RLMESHBUILDER_HPP
