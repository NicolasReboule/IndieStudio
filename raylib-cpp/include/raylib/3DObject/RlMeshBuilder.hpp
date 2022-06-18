/*
** EPITECH PROJECT, 2022
** RlMesh.hpp
** FileHelper description:
** RlMesh.hpp
*/

#ifndef INDIESTUDIO_RLMESHBUILDER_HPP
#define INDIESTUDIO_RLMESHBUILDER_HPP

#include "MeshGenerator.hpp"
#include "raylib/IBuilder.hpp"
#include "raylib/exception/BuilderException.hpp"
#include "raylib/Image/RlImage.hpp"
#include "RlMesh.hpp"
#include <string>
#include <raylib.h>

namespace raylib::builder {
    /**
     * @brief Builder to create a RlMesh easily
     */
    class RlMeshBuilder : public IBuilder<model::RlMesh> {
    private:
        /**
         * @brief Enum for parameters
         */
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

    public:
        /**
         * @brief Type of mesh
         */
        enum MeshType {
            MeshPoly = Sides | Radius, /**< Create a polygonal mesh */
            MeshPlane = Width | Length | ResX | ResZ, /**< Create a plane mesh */
            MeshCube = Width | Height | Length, /**< Create a cube mesh */
            MeshSphere = Radius | Rings | Slices, /**< Create a sphere mesh */
            MeshHemiSphere = Radius | HemisphereRings | Slices, /**< Create a hemisphere mesh */
            MeshCylinder = Radius | Height | Slices, /**< Create a cylinder mesh */
            MeshCone = Radius | Height | ConeSlices, /**< Create a cone mesh */
            MeshTorus = Radius | Size | RadSeg | Sides, /**< Create a torus mesh */
            MeshKnot = Radius | Size | KnotRadSeg | Sides, /**< Create a knot mesh */
            MeshHeightmap = Heightmap | Vec3fSize, /**< Create a heightmap mesh */
            MeshCubicmap = Cubicmap | CubeSize, /**< Create a cubicmap mesh */
        };

        /**
         * @brief Construct a new RlMeshBuilder object
         */
        RlMeshBuilder();

        /**
         * @brief Set the mesh type
         * @param meshType type of mesh
         * @return this
         */
        RlMeshBuilder &setMeshType(const MeshType &meshType);

        /**
         * @brief Set the the radius of the sphere
         * @param radius the radius of the sphere
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setRadius(const float &radius);

        /**
         * @brief Set the the width of the cube
         * @param width the width of the cube
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setWidth(const float &width);

        /**
         * @brief Set the the length
         * @param length the length
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setLength(const float &length);

        /**
         * @brief Set the the height of the cylinder
         * @param height the height of the cylinder
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setHeight(const float &height);

        /**
         * @brief Set the the resolution of the plane
         * @param resX the resolution of the plane on the X axis
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setResX(const int &resX);

        /**
         * @brief Set the the resolution of the plane
         * @param resZ the resolution of the plane on the Z axis
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setResZ(const int &resZ);

        /**
         * @brief Set the number of rings for the sphere
         * @param rings the number of rings for the sphere
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setRings(const int &rings);

        /**
         * @brief Set the number of rings for the hemisphere
         * @param rings the number of rings for the hemisphere
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setHemisphereRings(const int &rings);

        /**
         * @brief Set the number of slices for the sphere/hemisphere
         * @param slices the number of slices for the sphere/hemisphere
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setSlices(const int &slices);

        /**
         * @brief Set the number of slices for the cylinder
         * @param slices the number of slices for the cylinder
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setConeSlices(const int &slices);

        /**
         * @brief Set the number of segments for the torus
         * @param size the number of segments for the torus
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setSize(const float &size);

        /**
         * @brief Set the number of segments for the torus
         * @param radSeg the number of segments for the torus
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setRadSeg(const int &radSeg);

        /**
         * @brief Set the number of segments for the knot
         * @param radSeg the number of segments for the knot
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setKnotRadSeg(const int &radSeg);

        /**
         * @brief Set the sides
         * @param sides the number of sides
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setSides(const int &sides);

        /**
         * @brief Set the heightmap
         * @param heightmap the heightmap
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setHeightmap(const image::RlImage &heightmap);

        /**
         * @brief Set the size
         * @param size the size
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setVec3fSize(const Vector3f &size);

        /**
         * @brief Set the cubicmap
         * @param cubicmap the cubicmap
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setCubicmap(const image::RlImage &cubicmap);

        /**
         * @brief Set the size
         * @param cubeSize the size
         * @return this
         * @see raylib::builder::RlMeshBuilder::MeshType
         */
        RlMeshBuilder &setCubeSize(const Vector3f &cubeSize);

        /**
         * @brief Create a mesh
         * @return the mesh
         */
        model::RlMesh build() override;

    private:
        long _flags; /**< Flags for the mesh type */
        float _radius; /**< Radius of the mesh */
        float _width; /**< Width of the mesh */
        float _height; /**< Height of the mesh */
        float _length; /**< Length of the plane */
        int _slices; /**< Number of slices for the sphere/hemisphere */
        int _rings; /**< Number of rings for the hemisphere */
        int _resX; /**< Resolution of the plane on the X axis */
        int _resZ; /**< Resolution of the plane on the Z axis */
        int _radSeg; /**< Number of segments for the torus */
        int _sides; /**< Number of sides */
        float _size; /**< Size of the torus/knot */
        long _type; /**< Type of the mesh */
        image::RlImage _heightmap; /**< Heightmap */
        Vector3f _vec3fSize; /**< Size of the heightmap */
        image::RlImage _cubicmap; /**< Cubicmap */
        Vector3f _cubeSize; /**< Size of the cubicmap */
    };
}

#endif //INDIESTUDIO_RLMESHBUILDER_HPP
