/*
** EPITECH PROJECT, 2022
** ChooseNumberPlayerScene.cpp
** File description:
** ChooseNumberPlayerScene.cpp
*/

#include "chooseNumberPlayer/ChooseNumberPlayerScene.hpp"
#include "chooseNumberPlayer/Button1p.hpp"
#include "chooseNumberPlayer/Button2p.hpp"
#include "chooseNumberPlayer/Button3p.hpp"
#include "chooseNumberPlayer/Button4p.hpp"

#include "chooseNumberPlayer/ButtonLeft.hpp"
#include "chooseNumberPlayer/ButtonRight.hpp"

#include "global/GlobalInstance.hpp"

#include "start/Logo.hpp"

indie::ChooseNumberPlayerScene::ChooseNumberPlayerScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
}

void indie::ChooseNumberPlayerScene::sceneLauncher()
{
    auto button1p = std::make_shared<indie::Button1p>("button1p", "./assets/gui/button_1p.png");
    this->addNode(button1p);

    auto button2p = std::make_shared<indie::Button2p>("button2p", "./assets/gui/button_2p.png");
    this->addNode(button2p);

    auto button3p = std::make_shared<indie::Button3p>("button3p", "./assets/gui/button_3p.png");
    this->addNode(button3p);

    auto button4p = std::make_shared<indie::Button4p>("button4p", "./assets/gui/button_4p.png");
    this->addNode(button4p);

    auto buttonLeft = std::make_shared<indie::ButtonLeft>("buttonLeft", "./assets/gui/button_left.png");
    this->addNode(buttonLeft);

    auto buttonRight = std::make_shared<indie::ButtonRight>("buttonRight", "./assets/gui/button_right.png");
    this->addNode(buttonRight);

    auto mapDefault = std::make_shared<indie::Logo>("mapDefault", "./assets/gui/map/default.png");
    this->addNode(mapDefault);

    auto mapEmpty = std::make_shared<indie::Logo>("mapEmpty", "./assets/gui/map/empty.png");
    this->addNode(mapEmpty);

    auto mapCool = std::make_shared<indie::Logo>("mapCool", "./assets/gui/map/cool.png");
    this->addNode(mapCool);
}

void indie::ChooseNumberPlayerScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();

    globalInstnace->_indexMap = 0;

    auto &button1p = dynamic_cast<indie::Button1p &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::Button2p &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::Button3p &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::Button4p &>(*sceneManager->getNode("button4p"));

    auto &buttonLeft = dynamic_cast<indie::ButtonLeft &>(*sceneManager->getNode("buttonLeft"));
    auto &buttonRight = dynamic_cast<indie::ButtonRight &>(*sceneManager->getNode("buttonRight"));

    auto &mapDefault = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapDefault"));
    auto &mapEmpty = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapEmpty"));
    auto &mapCool = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapCool"));


    button1p.setPosition({000, 500});
    button2p.setPosition({320, 500});
    button3p.setPosition({640, 500});
    button4p.setPosition({960, 500});

    buttonLeft.setPosition({50, 200});
    buttonRight.setPosition({1150, 200});

    mapDefault.setPosition({420, 10});
    mapEmpty.setPosition({420, 10});
    mapCool.setPosition({420, 10});
}

void indie::ChooseNumberPlayerScene::updateScene(float delta)
{
    auto &sceneManager = gameengine::SceneManager::getInstance();
    auto &globalInstnace = indie::GlobalInstance::getInstance();

    auto &mapDefault = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapDefault"));
    auto &mapEmpty = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapEmpty"));
    auto &mapCool = dynamic_cast<indie::Logo &>(*sceneManager->getNode("mapCool"));

    switch (globalInstnace->_indexMap) {
        case 0:
            mapDefault.setHiding(false);
            mapEmpty.setHiding(true);
            mapCool.setHiding(true);
            break;
        case 1:
            mapDefault.setHiding(true);
            mapEmpty.setHiding(false);
            mapCool.setHiding(true);
            break;
        case 2:
            mapDefault.setHiding(true);
            mapEmpty.setHiding(true);
            mapCool.setHiding(false);
            break;
        default:
            break;
    }
}
