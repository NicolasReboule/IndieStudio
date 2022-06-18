/*
** EPITECH PROJECT, 2022
** Magma.cpp
** File description:
** Magma.cpp
*/

#include "game/Magma.hpp"
#include "game/Wall.hpp"
#include "game/WallDestroyable.hpp"

indie::Magma::Magma(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, model, texture)
{
    this->_timer = 0.5;
    this->_collisionEnable = false;
}

void indie::Magma::init()
{
}

void indie::Magma::update(const float &delta)
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
            if (wall.getPosition() == this->getPosition()) {
                sceneManager->deleteNodeInclude(this->getName());
                break;
            }
        }
        catch (const std::bad_cast &e) {
            try {
                auto &wallDestroyable = dynamic_cast<indie::WallDestroyable &>(*node);
                if (wallDestroyable.getPosition() == this->getPosition()) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

    }
}
