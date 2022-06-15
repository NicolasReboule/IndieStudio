/*
** EPITECH PROJECT, 2022
** Bomb.cpp
** File description:
** Bomb.cpp
*/

#include "game/Bomb.hpp"
#include "game/Player.hpp"
#include "game/WallDestroyable.hpp"

Indie::Bomb::Bomb(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturepath) : StaticBody(name, type, texturepath)
{
    this->_timer = 1;

}

Indie::Bomb::Bomb(const std::string &name, const std::string &objPath) : StaticBody(name, objPath, "")
{
    this->_timer = 1;
}

void Indie::Bomb::ready()
{
    this->_collisionEnable = false;
}

void Indie::Bomb::update(float delta)
{
    std::cout << this->_collisionEnable << std::endl;

    auto &sceneManager = GameEngine::SceneManager::getInstance();
    this->_timer -= delta;

    if (this->_collisionEnable == false) {
        bool temp = true;
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &player = dynamic_cast<Indie::Player &>(*node);
                if (player.getIsCollsionEnable() &&
                    raylib::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), player.getBoundingBox())) {
                    temp = false;
                    break;
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        this->_collisionEnable = temp;
    }

    /*BoundingBox temp = {{
                            this->getBoundingBox().min.x,
                            this->getBoundingBox().min.y,
                            this->getBoundingBox().min.z,
                        }, {
                            this->getBoundingBox().max.x,
                            this->getBoundingBox().max.y,
                            this->getBoundingBox().max.z,
                        }};*/

    BoundingBox temp = this->getBoundingBox();

    if (this->_timer <= 0) {
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
                if (wallDestroyable.getIsCollsionEnable() && raylib::Collision3dHelper::checkCollisionBoxes(temp, wallDestroyable.getBoundingBox())) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        temp.min.x += 1.0f;
        temp.max.x += 1.0f;

        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
                if (wallDestroyable.getIsCollsionEnable() && raylib::Collision3dHelper::checkCollisionBoxes(temp, wallDestroyable.getBoundingBox())) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        temp.min.x -= 2.0f;
        temp.max.x -= 2.0f;

        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
                if (wallDestroyable.getIsCollsionEnable() && raylib::Collision3dHelper::checkCollisionBoxes(temp, wallDestroyable.getBoundingBox())) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        temp.min.x += 1.0f;
        temp.max.x += 1.0f;
        temp.min.z += 1.0f;
        temp.max.z += 1.0f;

        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
                if (wallDestroyable.getIsCollsionEnable() &&
                    raylib::Collision3dHelper::checkCollisionBoxes(temp, wallDestroyable.getBoundingBox())) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        temp.min.z -= 2.0f;
        temp.max.z -= 2.0f;

        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wallDestroyable = dynamic_cast<Indie::WallDestroyable &>(*node);
                if (wallDestroyable.getIsCollsionEnable() &&
                    raylib::Collision3dHelper::checkCollisionBoxes(temp, wallDestroyable.getBoundingBox())) {
                    sceneManager->deleteNode(node->getName());
                }
            }
            catch (const std::bad_cast &e) {
                continue;
            }
        }

        sceneManager->deleteNode(this->getName());
    }

}


