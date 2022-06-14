/*
** EPITECH PROJECT, 2022
** SceneManager.cpp
** File description:
** SceneManager.cpp
*/

#include "GameEngine/SceneManager.hpp"

std::shared_ptr<GameEngine::SceneManager> GameEngine::SceneManager::_instance;

std::shared_ptr<GameEngine::SceneManager> &GameEngine::SceneManager::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<GameEngine::SceneManager>();
    return _instance;
}

void GameEngine::SceneManager::addScene(const std::shared_ptr<GameEngine::Scene> &scene)
{
    this->_scenes.push_back(scene);
}

void GameEngine::SceneManager::deleteScene(const std::string &scene)
{
    unsigned i = 0;
    for (const auto &item: this->_scenes) {
        if (item->getName() == scene)
            break;
        i = i + 1;
    }
    this->_scenes.erase(this->_scenes.begin() + i);
}

void GameEngine::SceneManager::changeScene(const std::string &scene)
{
    for (std::shared_ptr<GameEngine::Scene> &sceneItem : this->_scenes)
        if (sceneItem->getSceneSource() == scene) {
            this->_actualScene = sceneItem->getName();
            break;
        }

    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<GameEngine::Scene> &sceneItem : this->_scenes)
        if (sceneItem->getSceneSource() == this->_actualScene) {
            sceneItem->sceneLauncher();
            sceneItem->ready();
        }
}

std::shared_ptr<GameEngine::Base> GameEngine::SceneManager::getNode(const std::string& name)
{
    for (const auto &item: this->_scenes)
        if (item->getSceneSource() == this->_actualScene) {
            std::shared_ptr<GameEngine::Base> temp;
            if ((temp = item->getNode(name)) != nullptr)
                return temp;
        }

    return nullptr;
}

std::vector<std::shared_ptr<GameEngine::Base>> GameEngine::SceneManager::getAllNodes()
{
    for (const auto &item: this->_scenes)
        if (item->getSceneSource() == this->_actualScene)
            return item->getAllNode();
    return {};
}

void GameEngine::SceneManager::update()
{
    if (this->_actualScene == "empty")
        return;

    float delta = raylib::CoreHelper::getFrameTime();

    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene) {
            scene->updateScene(delta);
            scene->update(delta);
        }

    this->deleteNodeInLst();
}

void GameEngine::SceneManager::drawAll(raylib::RlCamera &camera)
{
    auto window = raylib::window::RlWindow::getInstance();

    raylib::DrawHelper::beginDrawing();
    raylib::DrawHelper::clearBackground(RlColor::DarkBrown);

    camera.update();
    raylib::DrawHelper::beginMode3D(camera);

    raylib::Shape3DHelper::drawGrid(10, 1.0f);

    this->draw();

    raylib::DrawHelper::endMode3D();

    this->draw2D();

    raylib::DrawHelper::endDrawing();
}


void GameEngine::SceneManager::draw()
{
    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->draw();
}

void GameEngine::SceneManager::draw2D()
{
    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->draw2D();
}

void GameEngine::SceneManager::makeLoop(raylib::RlCamera &camera)
{
    this->update();
    this->drawAll(camera);
}

void GameEngine::SceneManager::addNode(const std::shared_ptr<GameEngine::Base> &node)
{
    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene) {
            scene->addNode(node);
            node->ready();
            return;
        }

}

void GameEngine::SceneManager::deleteNodeInLst()
{
    for (const auto &nodeName: this->_nodesToDelete) {
        for (std::shared_ptr<GameEngine::Scene> &scene: this->_scenes)
            if (scene->getSceneSource() == this->_actualScene)
                scene->deleteNode(nodeName);
    }

    this->_nodesToDelete.clear();
}

void GameEngine::SceneManager::deleteNode(const std::string &name)
{
    this->_nodesToDelete.push_back(name);
}
