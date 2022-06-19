/*
** EPITECH PROJECT, 2022
** TextureManager.cpp
** File description:
** TextureManager.cpp
*/

#include "GameEngine/TextureManager.hpp"

std::unique_ptr<gameengine::TextureManager> gameengine::TextureManager::_instance;
std::shared_ptr<raylib::texture::RlTexture> gameengine::TextureManager::_defaultTexture;

void gameengine::TextureManager::loadTextures(const std::string &texturesDir)
{
    std::vector<std::string> files = raylib::helper::FileHelper::getDirectoryFiles(texturesDir, true);
    for (const auto &item: files) {
        _textures.push_back(std::make_shared<raylib::texture::RlTexture>(item));
        std::cout << "[GameEngine][TextureManager] Texture loaded: " << item << std::endl;
    }
}

std::shared_ptr<raylib::texture::RlTexture> gameengine::TextureManager::getTexture(const std::string &textureName)
{
    for (auto &texture : _textures)
        if (texture->getPath() == textureName)
            return texture;
    std::cout << "[GameEngine][TextureManager] Texture not found: " << textureName << std::endl;
    return _defaultTexture;
}

std::unique_ptr<gameengine::TextureManager> &gameengine::TextureManager::getInstance()
{
    if (_instance == nullptr) {
        _instance = std::make_unique<TextureManager>();
        _defaultTexture = std::make_shared<raylib::texture::RlTexture>("./assets/missing.png");
    }
    return _instance;
}

const std::vector<std::shared_ptr<raylib::texture::RlTexture>> &gameengine::TextureManager::getTextures() const
{
    return this->_textures;
}

const std::shared_ptr<raylib::texture::RlTexture> &gameengine::TextureManager::getDefaultTexture()
{
    return _defaultTexture;
}
