/*
** EPITECH PROJECT, 2022
** Bomb.cpp
** File description:
** Bomb.cpp
*/

#include "game/Bomb.hpp"
#include "game/Magma.hpp"
#include "game/Wall.hpp"
#include "game/Player.hpp"
#include "game/WallDestroyable.hpp"

indie::Bomb::Bomb(const std::string &name, const raylib::model::RlModel &model, \
const std::shared_ptr<raylib::texture::RlTexture> &texture, const int &range, const std::string &playerOwner)
    : StaticBody(name, model, texture)
{
    this->_range = range;
    this->_timer = 2;
    this->_playerOwner = playerOwner;
}

void indie::Bomb::init()
{
    this->_collisionEnable = false;
}

void indie::Bomb::update(const float &delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    this->_timer -= delta;

    if (!this->_collisionEnable)
        this->enableCollision();

    if (this->_timer <= 0) {
        this->spawnMagma();
        auto &player = dynamic_cast<indie::Player &>(*sceneManager->getNode(this->_playerOwner));
        player.incrementBombStock(1);
        sceneManager->deleteNode(this->getName());
    }
}

void indie::Bomb::enableCollision()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    bool temp = true;
    for (const auto &node: sceneManager->getAllNodes()) {
        try {
            auto &player = dynamic_cast<indie::Player &>(*node);
            if (player.isCollisionEnabled() && raylib::helper::Collision3dHelper::checkCollisionBoxes(this->getBoundingBox(), player.getBoundingBox())) {
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

void indie::Bomb::spawnMagma()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto random = raylib::Random();
    const Vector3f &bombPos = this->getPosition();

    Vector3f position = this->getPosition();
    Vector3f addI = {0, 0, 0};
    this->addMagma(position, addI);
    position = {bombPos.x + 1, bombPos.y, bombPos.z};
    addI = {1, 0, 0};
    this->addMagma(position, addI);
    position = {bombPos.x - 1, bombPos.y, bombPos.z};
    addI = {-1, 0, 0};
    this->addMagma(position, addI);
    position = {bombPos.x, bombPos.y, bombPos.z + 1};
    addI = {0, 0, 1};
    this->addMagma(position, addI);
    position = {bombPos.x, bombPos.y, bombPos.z - 1};
    addI = {0, 0, -1};
    this->addMagma(position, addI);
}

void indie::Bomb::addMagma(const Vector3f &position, const Vector3f &addI)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    for (int i = 0; i < this->_range; i++) {
        bool loop = true;
        Vector3f pos = {position.x + addI.x * (float) i, position.y + addI.y * (float) i, position.z + addI.z * (float) i};
        for (const auto &node: sceneManager->getAllNodes()) {
            try {
                auto &wall = dynamic_cast<indie::Wall &>(*node);
                if (wall.getPosition() == pos) {
                    loop = false;
                    break;
                }
            }
            catch (const std::bad_cast &e) {
                try {
                    auto &wallDestroyable = dynamic_cast<indie::WallDestroyable &>(*node);
                    if (wallDestroyable.getPosition() == pos) {
                        wallDestroyable.spawnBonus();
                        sceneManager->deleteNode(node->getName());
                        this->instanceMagma(pos);
                        return;
                    }
                }
                catch (const std::bad_cast &e) {
                    continue;
                }
            }
        }
        if (loop) {
            this->instanceMagma(pos);
        } else
            break;
    }
}

void indie::Bomb::instanceMagma(const Vector3f &pos)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto random = raylib::Random();

    auto magma = std::make_shared<indie::Magma>("magma" + std::to_string(random.generate(0, 99999)), raylib::builder::RlMeshBuilder::MeshType::MeshCube, "assets/magma.png");
    magma->setPosition(pos);
    sceneManager->addNode(magma);
}

void indie::Bomb::setPlayerOwner(const std::string &playerOwner)
{
    this->_playerOwner = playerOwner;
}
