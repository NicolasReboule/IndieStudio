/*
** EPITECH PROJECT, 2022
** Scene.cpp
** File description:
** Scene.cpp
*/

#include "GameEngine/Scene.hpp"
#include "GameEngine/Nodes/Node.hpp"
#include "GameEngine/Nodes/2D/Node2D.hpp"

#include <utility>

GameEngine::Scene::Scene(std::string name, std::string sceneSource)
{
    this->_name = std::move(name);
    this->_sceneSource = std::move(sceneSource);
}

void GameEngine::Scene::addNode(const std::shared_ptr<GameEngine::Base> &node)
{
    this->_nodes.push_back(node);
}

std::string GameEngine::Scene::getName()
{
    return this->_name;
}

std::string GameEngine::Scene::getSceneSource()
{
    return this->_sceneSource;
}

void GameEngine::Scene::ready()
{
    for (std::shared_ptr<GameEngine::Base> &node : this->_nodes)
        node->ready();
}

void GameEngine::Scene::update(float delta)
{
    for (std::shared_ptr<GameEngine::Base> &node : this->_nodes)
        node->update(delta);
}

void GameEngine::Scene::draw()
{
    for (std::shared_ptr<GameEngine::Base> &node : this->_nodes) {

        try {
            auto &item = dynamic_cast<GameEngine::Node &>(*node);
            item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

void GameEngine::Scene::draw2D()
{
    for (std::shared_ptr<GameEngine::Base> &node : this->_nodes) {

        try {
            auto &item = dynamic_cast<GameEngine::Node2D &>(*node);
            item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

std::shared_ptr<GameEngine::Base> GameEngine::Scene::getNode(const std::string &name)
{
    for (const auto &item: this->_nodes)
        if (item->getName() == name) {
            //std::cout << item->getName() << std::endl;
            return item;
        }
    return nullptr;
}
