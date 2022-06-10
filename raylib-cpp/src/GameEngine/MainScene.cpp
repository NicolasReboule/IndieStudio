/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include "GameEngine/MainScene.hpp"

GameEngine::MainScene::MainScene(std::string name, std::string sceneSource) : Scene(std::move(name), std::move(sceneSource))
{
}

void GameEngine::MainScene::sceneLauncher()
{
    /*auto body = std::make_shared<GameEngine::myStaticBody>("./assets/player.iqm", "./assets/blue.png");
    this->addNode(body);

    auto button = std::make_shared<GameEngine::myButton>("./assets/gui/button.png");
    this->addNode(button);
    */
}
