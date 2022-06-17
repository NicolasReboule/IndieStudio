/*
** EPITECH PROJECT, 2022
** RlMesh.hpp
** File description:
** RlMesh.hpp
*/

#ifndef INDIESTUDIO_RLMESH_HPP
#define INDIESTUDIO_RLMESH_HPP

#include <raylib.h>
#include <string>

namespace raylib {
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
         * @brief Destroys the RlMesh
         */
        ~RlMesh();

        /**
         * @brief Get the mesh
         * @return the mesh
         */
        const Mesh &getMesh() const;


    private:
        Mesh _mesh; /**< The raylib mesh*/
    };
}

#endif //INDIESTUDIO_RLMESH_HPP
