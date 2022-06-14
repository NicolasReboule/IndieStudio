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

Indie::ChooseNumberPlayerScene::ChooseNumberPlayerScene(const std::string &name, const std::string &sceneSource) : Scene(name, sceneSource)
{
}

void Indie::ChooseNumberPlayerScene::sceneLauncher()
{
    auto button1p = std::make_shared<Indie::Button1p>("button1p", "./assets/gui/button_1p.png");
    this->addNode(button1p);

    auto button2p = std::make_shared<Indie::Button1p>("button2p", "./assets/gui/button_2p.png");
    this->addNode(button2p);

    auto button3p = std::make_shared<Indie::Button1p>("button3p", "./assets/gui/button_3p.png");
    this->addNode(button3p);

    auto button4p = std::make_shared<Indie::Button1p>("button4p", "./assets/gui/button_4p.png");
    this->addNode(button4p);


    button1p->setPosition({000, 100});
    button2p->setPosition({300, 100});
    button3p->setPosition({600, 100});
    button4p->setPosition({900, 100});
}

void Indie::ChooseNumberPlayerScene::updateScene(float delta)
{
}
