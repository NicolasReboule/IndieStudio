/*
** EPITECH PROJECT, 2022
** TextureManager.hpp
** File description:
** TextureManager.hpp
*/

#ifndef INDIESTUDIO_TEXTUREMANAGER_HPP
#define INDIESTUDIO_TEXTUREMANAGER_HPP

#include <raylib/Raylib.hpp>

namespace gameengine {
    class TextureManager {
    public:
        /**
         * @brief Will load all textures in the directory and subdirectories
         * @param texturesDir the directory where the textures are
         */
        void loadTextures(const std::string &texturesDir = "./assets/textures/");

        /**
         * @brief Get a texture by its name
         * @param textureName the name of the texture
         * @return the texture
         */
        std::shared_ptr<raylib::texture::RlTexture> getTexture(const std::string &textureName);

        /**
         * @brief Get all textures loaded
         * @return the textures loaded
         */
        const std::vector<std::shared_ptr<raylib::texture::RlTexture>> &getTextures() const;

        /**
         * @brief Get the singleton instance
         * @return the singleton instance
         */
        static std::unique_ptr<TextureManager> &getInstance();

        /**
         * @brief Get the default texture
         * @return the default texture
         */
        static const std::shared_ptr<raylib::texture::RlTexture> &getDefaultTexture();

    private:
        static std::unique_ptr<TextureManager> _instance; /**< The unique instance of the AudioManager */
        static std::shared_ptr<raylib::texture::RlTexture> _defaultTexture; /**< The default texture if no texture is found */

        std::vector<std::shared_ptr<raylib::texture::RlTexture>> _textures; /**< All textures loaded */
    };
}

#endif //INDIESTUDIO_TEXTUREMANAGER_HPP
