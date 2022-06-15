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

gameengine::Scene::Scene(std::string name, std::string sceneSource)
{
    this->_name = std::move(name);
    this->_sceneSource = std::move(sceneSource);
}

void gameengine::Scene::addNode(const std::shared_ptr<gameengine::Base> &node)
{
    this->_nodes.push_back(node);
}

std::string gameengine::Scene::getName()
{
    return this->_name;
}

std::string gameengine::Scene::getSceneSource()
{
    return this->_sceneSource;
}

void gameengine::Scene::ready()
{
    for (std::shared_ptr<gameengine::Base> &node : this->_nodes)
        node->ready();
}

void gameengine::Scene::update(float delta)
{
   for (std::shared_ptr<gameengine::Base> &node : this->_nodes)
       if (node->isHiding() == false)
           node->update(delta);
}

void gameengine::Scene::draw()
{
    for (std::shared_ptr<gameengine::Base> &node : this->_nodes) {

        try {
            auto &item = dynamic_cast<gameengine::Node &>(*node);
            if (item.isHiding() == false)
                item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

void gameengine::Scene::draw2D()
{
    for (std::shared_ptr<gameengine::Base> &node : this->_nodes) {

        try {
            auto &item = dynamic_cast<gameengine::Node2D &>(*node);
            if (item.isHiding() == false)
                item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

std::shared_ptr<gameengine::Base> gameengine::Scene::getNode(const std::string &name)
{
    for (const auto &item: this->_nodes)
        if (item->getName() == name)
            return item;
    return nullptr;
}

std::vector<std::shared_ptr<gameengine::Base>> gameengine::Scene::getAllNode()
{
    return this->_nodes;
}

void gameengine::Scene::deleteNode(const std::string &name)
{
    auto erased = std::erase_if(this->_nodes, [&name](const auto &node) {
        if (node->getName() == name) {
            std::cout << node->getName() << " : was deleted." << std::endl;
            return true;
        };
        return false;
    });
    std::cout << "Erased: " << erased  << std::endl;
}

bool &gameengine::Scene::isLaunched()
{
    return this->_isLaunched;
}

void gameengine::Scene::setLaunched()
{
    this->_isLaunched = true;
}

void gameengine::Scene::destroy()
{
    this->_nodes.clear();
}
