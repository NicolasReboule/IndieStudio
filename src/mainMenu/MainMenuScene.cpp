/*
** EPITECH PROJECT, 2022
** MainMenuScene.cpp
** File description:
** MainMenuScene.cpp
*/


#include "mainMenu/MainMenuScene.hpp"
#include "mainMenu/ButtonPlay.hpp"
#include "mainMenu/ButtonQuit.hpp"

indie::MainMenuScene::MainMenuScene(std::string name, std::string sceneSource) : Scene(name, sceneSource)
{
}

void indie::MainMenuScene::sceneLauncher()
{
    auto buttonPlay = std::make_shared<indie::ButtonPlay>("buttonPlay", "./assets/gui/button_play.png");
    this->addNode(buttonPlay);

    auto buttonQuit = std::make_shared<indie::ButtonQuit>("buttonQuit", "./assets/gui/button_quit.png");
    this->addNode(buttonQuit);



}

void indie::MainMenuScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &buttonPlay = dynamic_cast<indie::ButtonPlay &>(*sceneManager->getNode("buttonPlay"));
    auto &buttonQuit = dynamic_cast<indie::ButtonQuit &>(*sceneManager->getNode("buttonQuit"));

    buttonPlay.setPosition({100, 100});
    buttonQuit.setPosition({100, 300});
}


void indie::MainMenuScene::updateScene(float delta)
{

}


