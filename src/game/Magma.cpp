/*
** EPITECH PROJECT, 2022
** Magma.cpp
** File description:
** Magma.cpp
*/

#include "game/Magma.hpp"
#include "game/Wall.hpp"
#include "game/Player.hpp"
#include "global/GlobalInstance.hpp"
#include "game/WallDestroyable.hpp"

indie::Magma::Magma(const std::string &name, const std::string &objPath, const std::string &playerOwner) : StaticBody(name, objPath, "")
{
    this->_timer = 1;
    this->_collisionEnable = false;
    this->_playerOwner = playerOwner;
}

indie::Magma::Magma(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
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

}

void indie::Magma::checkWallCollision()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &wall = dynamic_cast<indie::Wall &>(*node);
            std::cout << wall->getPosition() << ":::" << this->_position << std::endl;
            if (wall.getPosition() == this->_position) {
                sceneManager->deleteNodeInclude(this->getName());
                break;
            }
        }
        catch (const std::bad_cast &e) {
            try {
                auto &wallDestroyable = dynamic_cast<indie::WallDestroyable &>(*node);
                if (wallDestroyable.getPosition() == this->_position) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

    }
}
