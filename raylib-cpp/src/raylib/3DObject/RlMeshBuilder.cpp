/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** FileHelper description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMeshBuilder.hpp"

// Mesh management functions
//
raylib::RlMeshBuilder::RlMeshBuilder() :  _heightmap({}), _vec3fSize(0, 0, 0), _cubicmap({}), _cubeSize(0, 0, 0)
{
    _type = -1;
    _flags = 0;
    _length = 0;
    _width = 0;
    _height = 0;
    _slices = 0;
    _rings = 0;
    _radius = 0;
    _resX = 0;
    _resZ = 0;
    _radSeg = 0;
    _sides = 0;
    _size = 0;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setMeshType(raylib::RlMeshBuilder::MeshType meshType)
{
    _type = meshType;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setRadius(float radius)
{
    _radius = radius;
    _flags |= RlMeshBuilder::Radius;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setWidth(float width)
{
    _width = width;
    _flags |= RlMeshBuilder::Width;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setLength(float length)
{
    _length = length;
    _flags |= RlMeshBuilder::Length;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setHeight(float height)
{
    _height = height;
    _flags |= RlMeshBuilder::Height;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setResX(int resX)
{
    _resX = resX;
    _flags |= RlMeshBuilder::ResX;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setResZ(int resZ)
{
    _resZ = resZ;
    _flags |= RlMeshBuilder::ResZ;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setRings(int rings)
{
    _rings = rings;
    _flags |= RlMeshBuilder::Rings;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setSlices(int slices)
{
    _slices = slices;
    _flags |= RlMeshBuilder::Slices;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setSize(float size)
{
    _size = size;
    _flags |= RlMeshBuilder::Size;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setRadSeg(int radSeg)
{
    _radSeg = radSeg;
    _flags |= RlMeshBuilder::RadSeg;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setSides(int sides)
{
    _sides = sides;
    _flags |= RlMeshBuilder::Sides;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setHeightmap(const RlImage &heightmap)
{
    _heightmap = heightmap;
    _flags |= RlMeshBuilder::Heightmap;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setVec3fSize(Vector3f size)
{
    _vec3fSize = size;
    _flags |= RlMeshBuilder::Size;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setCubicmap(const RlImage &cubicmap)
{
    _cubicmap = cubicmap;
    _flags |= RlMeshBuilder::Cubicmap;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setCubeSize(Vector3f cubeSize)
{
    _cubeSize = cubeSize;
    _flags |= RlMeshBuilder::CubeSize;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setHemisphereRings(int rings)
{
    _rings = rings;
    _flags |= RlMeshBuilder::HemisphereRings;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setConeSlices(int slices)
{
    _slices = slices;
    _flags |= RlMeshBuilder::ConeSlices;
    return *this;
}

raylib::RlMeshBuilder &raylib::RlMeshBuilder::setKnotRadSeg(int radSeg)
{
    _radSeg = radSeg;
    _flags |= RlMeshBuilder::KnotRadSeg;
    return *this;
}

raylib::RlMesh raylib::RlMeshBuilder::build()
{
    Mesh mesh;
    if (_type == -1)
        throw raylib::ex::BuilderException("Mesh type not set");
    if (_flags != _type)
        throw raylib::ex::BuilderException("Invalid arguments");
    switch (_type) {
        case RlMeshBuilder::MeshCube :
            mesh = raylib::MeshGenerator::genMeshCube(_width, _height, _length);
            break;
        case RlMeshBuilder::MeshCylinder :
            mesh = raylib::MeshGenerator::genMeshCylinder(_radius, _height, _slices);
            break;
        case RlMeshBuilder::MeshSphere :
            mesh = raylib::MeshGenerator::genMeshSphere(_radius, _rings, _slices);
            break;
        case RlMeshBuilder::MeshPlane :
            mesh = raylib::MeshGenerator::genMeshPlane(_width, _length, _resX, _resZ);
            break;
        case RlMeshBuilder::MeshTorus :
            mesh = raylib::MeshGenerator::genMeshTorus(_radius, _size, _radSeg, _sides);
            break;
        case RlMeshBuilder::MeshHeightmap :
            mesh = raylib::MeshGenerator::genMeshHeightmap(_heightmap.getImage(), _vec3fSize);
            break;
        case RlMeshBuilder::MeshPoly :
            mesh = raylib::MeshGenerator::genMeshPoly(_sides, _radius);
            break;
        case RlMeshBuilder::MeshCubicmap :
            mesh = raylib::MeshGenerator::genMeshCubicmap(_cubicmap.getImage(), _cubeSize);
            break;
        default:
            throw (raylib::ex::BuilderException("Unknown Mesh pattern"));
    }
    return RlMesh(mesh);
}
