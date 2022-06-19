/*
** EPITECH PROJECT, 2022
** SceneManager.cpp
** File description:
** SceneManager.cpp
*/

#include "GameEngine/SceneManager.hpp"

std::shared_ptr<gameengine::SceneManager> gameengine::SceneManager::_instance;

std::shared_ptr<gameengine::SceneManager> &gameengine::SceneManager::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<gameengine::SceneManager>();
    return _instance;
}

void gameengine::SceneManager::addScene(const std::shared_ptr<gameengine::Scene> &scene)
{
    this->_scenes.push_back(scene);
}

void gameengine::SceneManager::deleteScene(const std::string &scene)
{
    std::erase_if(this->_scenes, [&scene](auto &sc) {
        return sc->getName() == scene;
    });
}

void gameengine::SceneManager::changeSceneInWaiting()
{
    if (this->_waitingScene == "empty" || this->_waitingScene.empty())
        return;

    std::cout << "[GameEngine][SceneManager] Changing scene to : " << this->_waitingScene << std::endl;

    if (!this->_actualScene.empty())
        for (std::shared_ptr<gameengine::Scene> &sceneItem : this->_scenes) {
            if (sceneItem->getSceneSource() == this->_actualScene) {
                sceneItem->destroy();
                break;
            }
        }

    for (std::shared_ptr<gameengine::Scene> &sceneItem : this->_scenes) {
        if (sceneItem->getSceneSource() == this->_waitingScene) {
            this->_actualScene = sceneItem->getName();
            sceneItem->sceneLauncher();
            sceneItem->initScene();
            sceneItem->init();
            sceneItem->setPaused(false);
            break;
        }
    }

    this->_waitingScene.clear();

    //SEPARATE LAUNCHER AND READY

    /*for (std::shared_ptr<gameengine::Scene> &sceneItem : this->_scenes) {
        if (sceneItem->getSceneSource() == this->_actualScene) {
            if (sceneItem->isLaunched() == false) {
                sceneItem->sceneLauncher();
                sceneItem->setLaunched();
            }
            sceneItem->initScene();
            sceneItem->init();
        }
    }*/
}

void gameengine::SceneManager::changeScene(const std::string &scene)
{
   this->_waitingScene = scene;
}

std::shared_ptr<gameengine::node::AbstractBase> gameengine::SceneManager::getNode(const std::string& name)
{
    for (const auto &item: this->_scenes)
        if (item->getSceneSource() == this->_actualScene) {
            std::shared_ptr<gameengine::node::AbstractBase> temp;
            if ((temp = item->getNode(name)) != nullptr)
                return temp;
        }

    return nullptr;
}

std::vector<std::shared_ptr<gameengine::node::AbstractBase>> gameengine::SceneManager::getAllNodes()
{
    for (const auto &item: this->_scenes)
        if (item->getSceneSource() == this->_actualScene)
            return item->getNodes();
    return {};
}

void gameengine::SceneManager::update()
{
    if (this->_actualScene == "empty")
        return;

    float delta = raylib::helper::CoreHelper::getFrameTime();

    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene) {
            scene->updateScene(delta);
            scene->update(delta);
        }

    this->deleteNodeInLst();
    this->changeSceneInWaiting();
}

void gameengine::SceneManager::drawAll(raylib::RlCamera &camera)
{
    auto window = raylib::window::RlWindow::getInstance();

    raylib::helper::draw::DrawHelper::beginDrawing();
    raylib::helper::draw::DrawHelper::clearBackground(RlColor::Black);
    raylib::helper::draw::DrawTextHelper::drawFps(10, 10, 30);

    if (raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_R))
        camera.reset();
    camera.update();

    raylib::helper::draw::DrawHelper::beginMode3D(camera);

    this->draw();

    raylib::helper::draw::DrawHelper::endMode3D();

    this->draw2D();

    raylib::helper::draw::DrawHelper::endDrawing();
}


void gameengine::SceneManager::draw()
{
    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->draw();
}

void gameengine::SceneManager::draw2D()
{
    if (this->_actualScene == "empty")
        return;

    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->draw2D();
}

void gameengine::SceneManager::makeLoop(raylib::RlCamera &camera)
{
    this->update();
    this->drawAll(camera);
}

void gameengine::SceneManager::addNode(const std::shared_ptr<gameengine::node::AbstractBase> &node)
{
    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene) {
            scene->addNode(node);
            node->init();
            return;
        }
}

void gameengine::SceneManager::deleteNodeInLst()
{
    for (const auto &nodeName: this->_nodesToDelete)
        for (std::shared_ptr<gameengine::Scene> &scene: this->_scenes)
            if (scene->getSceneSource() == this->_actualScene)
                scene->deleteNode(nodeName);


    for (const auto &nodeNameInclude: this->_nodesToDeleteIncludes)
        for (std::shared_ptr<gameengine::Scene> &scene: this->_scenes)
            if (scene->getSceneSource() == this->_actualScene)
                scene->deleteNodeIncludes(nodeNameInclude);


    this->_nodesToDeleteIncludes.clear();
    this->_nodesToDelete.clear();
}

void gameengine::SceneManager::deleteNode(const std::string &name)
{
    this->_nodesToDelete.push_back(name);
}

void gameengine::SceneManager::deleteNodeInclude(const std::string &IncludeName)
{
    this->_nodesToDeleteIncludes.push_back(IncludeName);
}

void gameengine::SceneManager::setPaused(bool value)
{
    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            scene->setPaused(value);
}

bool gameengine::SceneManager::isPaused()
{
    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            return scene->isPaused();
    return false;
}

std::shared_ptr<gameengine::Scene> &gameengine::SceneManager::getCurrentScene()
{
    for (std::shared_ptr<gameengine::Scene> &scene : this->_scenes)
        if (scene->getSceneSource() == this->_actualScene)
            return scene;
    return this->_scenes.front();
}
