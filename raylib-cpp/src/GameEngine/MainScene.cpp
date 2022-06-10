/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include "GameEngine/MainScene.hpp"
#include "GameEngine/myStaticBody.hpp"
#include "GameEngine/myButton.hpp"

GameEngine::MainScene::MainScene(std::string name, std::string sceneSource) : Scene(std::move(name), std::move(sceneSource))
{
}

void GameEngine::MainScene::sceneLauncher()
{
    std::shared_ptr<GameEngine::myStaticBody> body = std::make_shared<GameEngine::myStaticBody>("./assets/player.iqm", "./assets/blue.png");
    this->addNode(body);

    std::shared_ptr<GameEngine::myButton> button = std::make_shared<GameEngine::myButton>("./assets/gui/button.png");
    this->addNode(button);

}
