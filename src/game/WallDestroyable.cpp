/*
** EPITECH PROJECT, 2022
** WallDestroyable.cpp
** File description:
** WallDestroyable.cpp
*/

#include "game/WallDestroyable.hpp"
#include "game/Bonus.hpp"

indie::WallDestroyable::WallDestroyable(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, model, texture)
{
}

void indie::WallDestroyable::spawnBonus()
{
    auto &sceneManager = gameengine::SceneManager::getInstance();

    auto random = raylib::Random();
    int rand = random.generate(0, 10);

    //TODO: change this
   if (rand == 0) {
       auto fireModel = std::make_shared<raylib::model::RlModel>("./assets/models/boost/boostFire.obj", "assets/textures/bonus.png");
       auto bonusFire = std::make_shared<indie::Bonus>("bonusFire" + std::to_string(random.generate(0, 99999)), *fireModel, fireModel->getTexture());
       bonusFire->setPosition(this->getPosition());
       bonusFire->setBonusType(indie::Bonus::BonusType::FIRE);
       sceneManager->addNode(bonusFire);
   } else if (rand == 1) {
       auto speedModel = std::make_shared<raylib::model::RlModel>("./assets/models/boost/boostSpeed.obj", "assets/textures/bonus.png");
       auto bonusSpeed = std::make_shared<indie::Bonus>("bonusSpeed" + std::to_string(random.generate(0, 99999)), *speedModel, speedModel->getTexture());
       bonusSpeed->setPosition(this->getPosition());
       bonusSpeed->setBonusType(indie::Bonus::BonusType::SPEED);
       sceneManager->addNode(bonusSpeed);
   } else if (rand == 2) {
       auto bombModel = std::make_shared<raylib::model::RlModel>("./assets/models/boost/boostBomb.obj", "assets/textures/bonus.png");
       auto bonusBomb = std::make_shared<indie::Bonus>("bonusBomb" + std::to_string(random.generate(0, 99999)), *bombModel, bombModel->getTexture());
       bonusBomb->setPosition(this->getPosition());
       bonusBomb->setBonusType(indie::Bonus::BonusType::BOMB);
       sceneManager->addNode(bonusBomb);
   } else if (rand == 3) {
       auto ghostModel = std::make_shared<raylib::model::RlModel>("./assets/models/boost/boostGhost.obj", "assets/textures/bonus.png");
       auto bonusGhost = std::make_shared<indie::Bonus>("bonusGhost" + std::to_string(random.generate(0, 99999)), *ghostModel, ghostModel->getTexture());
       bonusGhost->setPosition(this->getPosition());
       bonusGhost->setBonusType(indie::Bonus::BonusType::GHOST);
       sceneManager->addNode(bonusGhost);
   }

}
