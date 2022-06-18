/*
** EPITECH PROJECT, 2022
** Scene.cpp
** File description:
** Scene.cpp
*/

#include "GameEngine/Scene.hpp"
#include "GameEngine/Nodes/3D/Node3D.hpp"
#include "GameEngine/Nodes/2D/Node2D.hpp"

gameengine::Scene::Scene(const std::string &name, const std::string &sceneSource)
{
    this->_name = name;
    this->_sceneSource = sceneSource;
}

void gameengine::Scene::addNode(const std::shared_ptr<gameengine::node::AbstractBase> &node)
{
    this->_nodes.push_back(node);
}

const std::string &gameengine::Scene::getName() const
{
    return this->_name;
}

const std::string &gameengine::Scene::getSceneSource() const
{
    return this->_sceneSource;
}

void gameengine::Scene::init()
{
    for (std::shared_ptr<gameengine::node::AbstractBase> &node : this->_nodes)
        node->init();
}

void gameengine::Scene::update(const float &delta)
{
   for (std::shared_ptr<gameengine::node::AbstractBase> &node : this->_nodes)
       if (!node->isHiding()) {
           try {
               auto &node3D = dynamic_cast<gameengine::node::_3D::Node3D &>(*node);
               if (!this->_isPaused)
                   node3D.update(delta);
           }
           catch (const std::bad_cast &e) {
               node->update(delta);
           }
       }
}

void gameengine::Scene::draw()
{
    for (std::shared_ptr<gameengine::node::AbstractBase> &node : this->_nodes) {

        try {
            auto &item = dynamic_cast<gameengine::node::_3D::Node3D &>(*node);
            if (!item.isHiding())
                item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

void gameengine::Scene::draw2D()
{
    for (std::shared_ptr<gameengine::node::AbstractBase> &node : this->_nodes) {
        try {
            auto &item = dynamic_cast<gameengine::node::_2D::Node2D &>(*node);
            if (!item.isHiding())
                item.draw();
        }
        catch (const std::bad_cast &e) {
            continue;
        }
    }
}

//TODO: change this to throw exception, and return a ref
std::shared_ptr<gameengine::node::AbstractBase> gameengine::Scene::getNode(const std::string &name)
{
    for (const auto &item: this->_nodes)
        if (item->getName() == name)
            return item;
    return nullptr;
}

const std::vector<std::shared_ptr<gameengine::node::AbstractBase>> &gameengine::Scene::getNodes() const
{
    return this->_nodes;
}

bool gameengine::Scene::deleteNode(const std::string &name)
{
    auto erased = std::erase_if(this->_nodes, [&name](const auto &node) {
        if (node->getName() == name) {
            std::cout << node->getName() << " : was deleted." << std::endl;
            return true;
        };
        return false;
    });
    return erased != 0;
}

void gameengine::Scene::deleteNodeIncludes(const std::string &includeName)
{
    auto erased = std::erase_if(this->_nodes, [&includeName](const auto &node) {
        if (node->getName().find(includeName) != std::string::npos) {
            std::cout << node->getName() << " : was deleted." << std::endl;
            return true;
        };
        return false;
    });
    std::cout << "Erased: " << erased  << std::endl;
}

const bool &gameengine::Scene::isLaunched() const
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

void gameengine::Scene::setPaused(const bool &value)
{
    this->_isPaused = value;
}

const bool &gameengine::Scene::isPaused() const
{
    return this->_isPaused;
}
