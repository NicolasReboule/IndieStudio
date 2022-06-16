/*
** EPITECH PROJECT, 2022
** RlMesh.cpp
** FileHelper description:
** RlMesh.cpp
*/

#include "raylib/3DObject/RlMeshBuilder.hpp"

raylib::builder::RlMeshBuilder::RlMeshBuilder() : _heightmap({}), _vec3fSize(0, 0, 0), _cubicmap({}), _cubeSize(0, 0, 0)
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

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setMeshType(const raylib::builder::RlMeshBuilder::MeshType &meshType)
{
    _type = meshType;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setRadius(const float &radius)
{
    _radius = radius;
    _flags |= RlMeshBuilder::Radius;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setWidth(const float &width)
{
    _width = width;
    _flags |= RlMeshBuilder::Width;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setLength(const float &length)
{
    _length = length;
    _flags |= RlMeshBuilder::Length;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setHeight(const float &height)
{
    _height = height;
    _flags |= RlMeshBuilder::Height;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setResX(const int &resX)
{
    _resX = resX;
    _flags |= RlMeshBuilder::ResX;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setResZ(const int &resZ)
{
    _resZ = resZ;
    _flags |= RlMeshBuilder::ResZ;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setRings(const int &rings)
{
    _rings = rings;
    _flags |= RlMeshBuilder::Rings;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setSlices(const int &slices)
{
    _slices = slices;
    _flags |= RlMeshBuilder::Slices;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setSize(const float &size)
{
    _size = size;
    _flags |= RlMeshBuilder::Size;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setRadSeg(const int &radSeg)
{
    _radSeg = radSeg;
    _flags |= RlMeshBuilder::RadSeg;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setSides(const int &sides)
{
    _sides = sides;
    _flags |= RlMeshBuilder::Sides;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setHeightmap(const raylib::image::RlImage &heightmap)
{
    _heightmap = heightmap;
    _flags |= RlMeshBuilder::Heightmap;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setVec3fSize(const Vector3f &size)
{
    _vec3fSize = size;
    _flags |= RlMeshBuilder::Size;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setCubicmap(const raylib::image::RlImage &cubicmap)
{
    _cubicmap = cubicmap;
    _flags |= RlMeshBuilder::Cubicmap;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setCubeSize(const Vector3f &cubeSize)
{
    _cubeSize = cubeSize;
    _flags |= RlMeshBuilder::CubeSize;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setHemisphereRings(const int &rings)
{
    _rings = rings;
    _flags |= RlMeshBuilder::HemisphereRings;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setConeSlices(const int &slices)
{
    _slices = slices;
    _flags |= RlMeshBuilder::ConeSlices;
    return *this;
}

raylib::builder::RlMeshBuilder &raylib::builder::RlMeshBuilder::setKnotRadSeg(const int &radSeg)
{
    _radSeg = radSeg;
    _flags |= RlMeshBuilder::KnotRadSeg;
    return *this;
}

raylib::RlMesh raylib::builder::RlMeshBuilder::build()
{
    if (_type == -1)
        throw raylib::ex::BuilderException("Mesh type not set");
    if (_flags != _type)
        throw raylib::ex::BuilderException("Invalid arguments");
    switch (_type) {
        case MeshPoly:
            return raylib::MeshGenerator::genMeshPoly(_sides, _radius);
        case MeshPlane:
            return raylib::MeshGenerator::genMeshPlane(_width, _length, _resX, _resZ);
        case MeshCube:
            return raylib::MeshGenerator::genMeshCube(_width, _height, _length);
        case MeshSphere:
            return raylib::MeshGenerator::genMeshSphere(_radius, _rings, _slices);
        case MeshHemiSphere:
            return raylib::MeshGenerator::genMeshHemiSphere(_radius, _rings, _slices);
        case MeshCylinder:
            return raylib::MeshGenerator::genMeshCylinder(_radius, _height, _slices);
        case MeshCone:
            return raylib::MeshGenerator::genMeshCone(_radius, _height, _slices);
        case MeshTorus:
            return raylib::MeshGenerator::genMeshTorus(_radius, _size, _radSeg, _sides);
        case MeshKnot:
            return raylib::MeshGenerator::genMeshKnot(_radius, _size, _radSeg, _sides);
        case MeshHeightmap:
            return raylib::MeshGenerator::genMeshHeightmap(_heightmap.getImage(), _vec3fSize);
        case MeshCubicmap:
            return raylib::MeshGenerator::genMeshCubicmap(_cubicmap.getImage(), _cubeSize);
        default:
            throw (raylib::ex::BuilderException("Unknown Mesh pattern"));
    }
}
