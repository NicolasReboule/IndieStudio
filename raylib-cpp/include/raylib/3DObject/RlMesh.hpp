/*
** EPITECH PROJECT, 2022
** RlMesh.hpp
** File description:
** RlMesh.hpp
*/

#ifndef INDIESTUDIO_RLMESH_HPP
#define INDIESTUDIO_RLMESH_HPP

#include <raylib.h>
#include <iostream>
#include <memory>

namespace raylib::model {
    /**
     * @brief Encapsulation of the raylib Mesh
     */
    class RlMesh {
    public:
        /**
         * @brief Creates a new RlMesh
         * @param mesh the mesh to use
         * @attention Don't use this, use the RlMeshBuilder instead
         */
        explicit RlMesh(const Mesh &mesh);

        /**
         * @brief Copy constructor (create a copy of the raylib Mesh)
         * @param mesh the mesh
         */
        RlMesh(const RlMesh &mesh);

        /**
         * @brief Assignment operator (Create a copy of the raylib Mesh)
         * @param mesh the Mesh
         * @return the RlMesh
         */
        RlMesh &operator=(const RlMesh &mesh);

        /**
         * @brief Destroys the RlMesh
         */
        ~RlMesh();

        /**
         * @brief Upload mesh vertex data in GPU and provide VAO/VBO ids
         * @param dynamic true if the mesh is dynamic
         */
        void uploadInGPU(const bool &dynamic);

        /**
         * @brief Update mesh vertex data in GPU for a specific buffer index
         * @param index the buffer index to update
         * @param data the new data to upload
         * @param dataSize the size of the data to upload
         * @param offset the offset to update
         */
        void updateBuffer(const int &index, void *data, const int &dataSize, const int &offset);

        /**
         * @brief Export mesh data to file, returns true on success
         * @param fileName the file name to export the mesh in
         * @return true on success
         */
        bool exportMesh(const std::string &fileName);

        /**
         * @brief Compute mesh bounding box limits
         * @param mesh the mesh to compute the bounding box from
         * @return the bounding box of the mesh
         */
        BoundingBox getBoundingBox();

        /**
         * @brief Compute mesh tangents
         */
        void genTangents();

        /**
         * @brief Compute mesh binormals
         */
        void genBinormals();

        /**
         * @brief Get the mesh
         * @return the mesh
         */
        const Mesh &getMesh() const;

        /**
         * @brief Get the mesh shared ptr
         * @return the mesh shared ptr
         */
        const std::shared_ptr<Mesh> &getMeshSharedPtr() const;

    private:
        std::shared_ptr<Mesh> _mesh; /**< The raylib mesh */
    };
}

#endif //INDIESTUDIO_RLMESH_HPP
