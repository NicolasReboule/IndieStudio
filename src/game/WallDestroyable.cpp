/*
** EPITECH PROJECT, 2022
** WallDestroyable.cpp
** File description:
** WallDestroyable.cpp
*/


#include "game/WallDestroyable.hpp"
#include "game/Bonus.hpp"

indie::WallDestroyable::WallDestroyable(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath) : StaticBody(name, type, texturePath)
{
}

void indie::WallDestroyable::spawnBonus()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto random = raylib::Random();
    int rand = random.generate(0, 10);
    //int rand = 3;


   if (rand == 0) {
       auto bonusFire = std::make_shared<indie::Bonus>("bonusFire" + std::to_string(random.generate(0, 99999)), "./assets/boostFire.obj");
       bonusFire->setPosition(this->_position);
       bonusFire->setBonusType(indie::Bonus::BonusType::FIRE);
       sceneManager->addNode(bonusFire);
   } else if (rand == 1) {
       auto bonusSpeed = std::make_shared<indie::Bonus>("bonusSpeed" + std::to_string(random.generate(0, 99999)), "./assets/boostSpeed.obj");
       bonusSpeed->setPosition(this->_position);
       bonusSpeed->setBonusType(indie::Bonus::BonusType::SPEED);
       sceneManager->addNode(bonusSpeed);
   } else if (rand == 2) {
       auto bonusSpeed = std::make_shared<indie::Bonus>("bonusBomb" + std::to_string(random.generate(0, 99999)), "./assets/boostBomb.obj");
       bonusSpeed->setPosition(this->_position);
       bonusSpeed->setBonusType(indie::Bonus::BonusType::BOMB);
       sceneManager->addNode(bonusSpeed);
   } else if (rand == 3) {
       auto bonusGhost = std::make_shared<indie::Bonus>("bonusGhost" + std::to_string(random.generate(0, 99999)), "./assets/boostWall.obj");
       bonusGhost->setPosition(this->_position);
       bonusGhost->setBonusType(indie::Bonus::BonusType::GHOST);
       sceneManager->addNode(bonusGhost);
   }


}
