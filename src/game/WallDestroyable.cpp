/*
** EPITECH PROJECT, 2022
** WallDestroyable.cpp
** File description:
** WallDestroyable.cpp
*/


#include "game/WallDestroyable.hpp"
#include "game/BonusRange.hpp"

indie::WallDestroyable::WallDestroyable(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}

void indie::WallDestroyable::spawnBonus()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto random = raylib::Random();
    int rand = random.generate(0, 1);
    if (rand == 0) {
        auto bonusRange = std::make_shared<indie::BonusRange>("bonusRange" + std::to_string(random.generate(0, 99999)), raylib::RlMeshBuilder::MeshType::MeshCube, "assets/tnt.png");
        bonusRange->setPosition(this->_position);
        sceneManager->addNode(bonusRange);
    }
}
