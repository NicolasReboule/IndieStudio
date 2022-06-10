/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include <IndieStudio.hpp>

Indie::StartScene::StartScene(std::string name, std::string sceneSource) : Scene(std::move(name), std::move(sceneSource))
{

}

void Indie::StartScene::sceneLauncher()
{
    auto screen = std::make_shared<Indie::Logo>("logo", "./assets/gui/logo.png");
    this->addNode(screen);
}
