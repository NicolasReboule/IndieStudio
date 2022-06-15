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

#include "mainMenu/ButtonPlay.hpp"
#include "mainMenu/ButtonQuit.hpp"

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
}

void indie::ChooseNumberPlayerScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &button1p = dynamic_cast<indie::Button1p &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::Button2p &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::Button3p &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::Button4p &>(*sceneManager->getNode("button4p"));


    button1p.setPosition({030, 200});
    button2p.setPosition({330, 400});
    button3p.setPosition({630, 200});
    button4p.setPosition({930, 400});

  /*  button1p.setEnable(false);
    button2p.setEnable(false);
    button3p.setEnable(false);
    button4p.setEnable(false);*/
}

void indie::ChooseNumberPlayerScene::updateScene(float delta)
{
   /* auto sceneManager = gameengine::SceneManager::getInstance();

    auto &button1p = dynamic_cast<indie::Button1p &>(*sceneManager->getNode("button1p"));
    auto &button2p = dynamic_cast<indie::Button2p &>(*sceneManager->getNode("button2p"));
    auto &button3p = dynamic_cast<indie::Button3p &>(*sceneManager->getNode("button3p"));
    auto &button4p = dynamic_cast<indie::Button4p &>(*sceneManager->getNode("button4p"));

    this->_timer -= delta;

    if (this->_isStart == false && this->_timer <= 0)  {
        button1p.setEnable(true);
        button2p.setEnable(true);
        button3p.setEnable(true);
        button4p.setEnable(true);
        this->_isStart = true;
    }*/

}
