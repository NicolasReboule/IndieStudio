/*
** EPITECH PROJECT, 2022
** GlobalScene.cpp
** File description:
** GlobalScene.cpp
*/

#include "global/GlobalScene.hpp"
#include "global/Global.hpp"

indie::GlobalScene::GlobalScene(const std::string &name, const std::string &filename) : gameengine::Scene(name, filename)
{
    auto global = std::make_shared<indie::Global>("global");
    this->addNode(global);
}

void indie::GlobalScene::sceneLauncher()
{
}

void indie::GlobalScene::updateScene(float delta)
{
}

void indie::GlobalScene::initScene()
{
}

