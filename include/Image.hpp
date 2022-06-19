/*
** EPITECH PROJECT, 2022
** Image.hpp
** File description:
** Image.hpp
*/

#ifndef INDIESTUDIO_IMAGE_HPP
#define INDIESTUDIO_IMAGE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {
    /**
     * @brief Class for the logo of the game
     */
    class Image : public gameengine::node::_2D::TextureRect {
    public:
        /**
         * @brief Construct a new Image object
         * @param name the name of the logo
         * @param texture the texture of the logo
         */
        explicit Image(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        /**
         * @brief Destruct the Image object
         */
        ~Image() override = default;

        /**
         * @brief Initialize the logo
         */
        void init() override;

        /**
         * @brief Update the logo
         * @param delta the delta time
         */
        void update(const float &delta) override;
    };
}

#endif //INDIESTUDIO_IMAGE_HPP
