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

void GameEngine::SceneManager::changeScene(const std::string &newScene)
{
    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == newScene) {
            this->_actualScene = scene->getName();
            continue;
        }

    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene) {
            scene->sceneLauncher();
            scene->ready();
        }
}

void GameEngine::SceneManager::update()
{
    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<GameEngine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->update();
}

void GameEngine::SceneManager::drawAll(raylib::RlCamera camera)
{
    auto window = raylib::RlWindow::getInstance();

    raylib::DrawHelper::beginDrawing();
    raylib::DrawHelper::clearBackground(WHITE);

    raylib::DrawHelper::beginMode3D(camera.get());

    //window->drawGrid(10, 1.0f);

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
