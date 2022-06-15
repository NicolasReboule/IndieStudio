/*
** EPITECH PROJECT, 2022
** MainMenuScene.cpp
** File description:
** MainMenuScene.cpp
*/


#include "mainMenu/MainMenuScene.hpp"
#include "mainMenu/ButtonPlay.hpp"
#include "mainMenu/ButtonQuit.hpp"

Indie::MainMenuScene::MainMenuScene(std::string name, std::string sceneSource) : Scene(name, sceneSource)
{
}

void Indie::MainMenuScene::sceneLauncher()
{
    auto buttonPlay = std::make_shared<Indie::ButtonPlay>("buttonPlay", "./assets/gui/button_play.png");
    this->addNode(buttonPlay);

    auto buttonQuit = std::make_shared<Indie::ButtonQuit>("buttonQuit", "./assets/gui/button_quit.png");
    this->addNode(buttonQuit);



}

void Indie::MainMenuScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonPlay = dynamic_cast<Indie::ButtonPlay &>(*sceneManager->getNode("buttonPlay"));
    auto &buttonQuit = dynamic_cast<Indie::ButtonQuit &>(*sceneManager->getNode("buttonQuit"));

    buttonPlay.setPosition({100, 100});
    buttonQuit.setPosition({100, 300});
}


void Indie::MainMenuScene::updateScene(float delta)
{

}


