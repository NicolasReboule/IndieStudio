/*
** EPITECH PROJECT, 2022
** Magma.cpp
** File description:
** Magma.cpp
*/

#include "game/Magma.hpp"
#include "game/Player.hpp"
#include "global/GlobalInstance.hpp"

indie::Magma::Magma(const std::string &name, const std::string &objPath) : StaticBody(name, objPath, "")
{
    this->_timer = 1;
    this->_collisionEnable = false;
}

indie::Magma::Magma(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
    this->_timer = 1;
    this->_collisionEnable = false;
}

void indie::Magma::ready()
{

}

void indie::Magma::update(float delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    this->_timer -= delta;
    this->handlePlayerCollision();
    if (this->_timer <= 0)
        sceneManager->deleteNode(this->getName());
}

void indie::Magma::handlePlayerCollision()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstance = indie::GlobalInstance::getInstance();

    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &wallDestroyable = dynamic_cast<indie::Player &>(*node);
            if (wallDestroyable.getIsCollsionEnable() && raylib::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), wallDestroyable.getBoundingBox())) {
                sceneManager->deleteNode(node->getName());
                globalInstance->_playersAlive -= 1;
            }

        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}
