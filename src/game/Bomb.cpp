/*
** EPITECH PROJECT, 2022
** Bomb.cpp
** File description:
** Bomb.cpp
*/

#include "game/Bomb.hpp"

Indie::Bomb::Bomb(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath) : StaticBody(name, type, texturepath)
{
    this->_timer = 1;
}

void Indie::Bomb::update(float delta)
{
    auto &sceneManager = GameEngine::SceneManager::getInstance();
    this->_timer -= delta;
    //std::cout << this->_timer << std::endl;


    if (this->_timer <= 0) {
        sceneManager->deleteNode("bomb");
        std::cout << "toto" << std::endl;
    }
}
