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
   // for (std::shared_ptr<GameEngine::Base> &node : this->_nodes)
   for (auto it = this->_nodes.begin(); it != this->_nodes.end(); it++)
       (*it)->update(delta);
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

std::vector<std::shared_ptr<GameEngine::Base>> GameEngine::Scene::getAllNode()
{
    return this->_nodes;
}

void GameEngine::Scene::deleteNode(const std::string &name)
{
    /*this->_nodes.clear();
    return;*/
    /*for (auto it = this->_nodes.begin(); it != this->_nodes.end(); it++)
        if ((*it)->getName() == name) {
            std::cout << (*it)->getName() << " : was deleted." << std::endl;
            this->_nodes.erase(it);
            return;
        }*/

    auto erased = std::erase_if(this->_nodes, [&name](const auto &node) {
        return node->getName() == name;
    });
    std::cout << "Erased: " << erased  << std::endl;

}
