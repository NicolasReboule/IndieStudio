/*
** EPITECH PROJECT, 2022
** GlobalScene.cpp
** File description:
** GlobalScene.cpp
*/

#include "global/GlobalScene.hpp"
#include "global/Global.hpp"

Indie::GlobalScene::GlobalScene(const std::string &name, const std::string &filename) : gameengine::Scene(name, filename)
{
    auto global = std::make_shared<Indie::Global>("global");
    this->addNode(global);
}

void Indie::GlobalScene::sceneLauncher()
{
}

void Indie::GlobalScene::updateScene(float delta)
{
}

void Indie::GlobalScene::readyScene()
{
}

