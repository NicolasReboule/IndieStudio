/*
** EPITECH PROJECT, 2022
** MultiCube.hpp
** File description:
** MultiCube.hpp
*/

#ifndef INDIESTUDIO_MULTICUBE_HPP
#define INDIESTUDIO_MULTICUBE_HPP

#include <raylib/Raylib.hpp>
#include "StaticBody.hpp"

namespace gameengine::node::_3D {
    class MultiCube : public StaticBody {
    public:
        /**
         * @brief Create a new MultiCube (cube with multiple faces textures)
         * @param name the name of the node
         * @param size the size of the cube
         * @param texture the texture of the cube
         */
        explicit MultiCube(const std::string &name, const Vector3f &size, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        /**
         * @brief Draw the cube
         */
        void draw() override;

    private:
        std::shared_ptr<raylib::texture::RlTexture> _texture; /** Linked texture */
        Vector3f _size; /** Size of the cube */
    };
}

#endif //INDIESTUDIO_MULTICUBE_HPP
