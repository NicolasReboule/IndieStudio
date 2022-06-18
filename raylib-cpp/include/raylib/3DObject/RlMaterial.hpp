/*
** EPITECH PROJECT, 2022
** Material.hpp
** FileHelper description:
** Material.hpp
*/

#ifndef INDIESTUDIO_RLMATERIAL_HPP
#define INDIESTUDIO_RLMATERIAL_HPP

#include "raylib/Core/FileHelper.hpp"
#include <rlgl.h>
#include <external/tinyobj_loader_c.h>
#include <raylib.h>
#include <utils.h>
#include <string>
#include <vector>

namespace raylib::model {
    /**
     * @brief Encapsulation of the raylib Material
     */
    class RlMaterial {
    public:
        /**
         * @brief Construct a new RlMaterial object
         * @param fileName the file name
         */
        explicit RlMaterial(const std::string &fileName);

        /**
         * @brief Construct a new RlMaterial object from the raylib Material
         * @param material the raylib Material
         */
        explicit RlMaterial(Material &material);

        /**
         * @brief Destroy the RlMaterial object
         */
        ~RlMaterial();

        /**
         * @brief Get the raylib immutable Material
         * @return the raylib immutable Material
         */
        const Material &getMaterial() const;

        /**
         * @brief Get the raylib mutable Material
         * @return the raylib mutable Material
         */
        Material &getMaterial();

//REMOVED raylib is bad :/
//        /**
//         * @brief Load multiple materials from a file
//         * @param fileName the file name
//         * @return the vector of materials
//         * @warning Only .mtl is supported
//         */
//        static std::vector<model::RlMaterial> loadMaterials(const std::string &fileName);

    private:
        Material _material; /**< The raylib material */
    };
}
#endif //INDIESTUDIO_RLMATERIAL_HPP
