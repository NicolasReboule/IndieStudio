/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include "start/StartScene.hpp"
#include "start/Image.hpp"

indie::StartScene::StartScene(const std::string &name, const std::string& sceneSource) : Scene(name, sceneSource)
{
    this->_startTimestamp = Time::getMillisecondsTime();
    this->_endTimestamp = _startTimestamp + 5000;
}

void indie::StartScene::sceneLauncher()
{
    auto gameScreen = std::make_shared<indie::Image>("gameScreen", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/splashart.png"));
    this->addNode(gameScreen);

    auto studioScreen = std::make_shared<indie::Image>("studioScreen", std::make_shared<raylib::texture::RlTexture>("./assets/textures/gui/logo.png"));
    this->addNode(studioScreen);
}

void indie::StartScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));
    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));

    studioScreen.getColor().alpha(1.0f);
    gameScreen.getColor().alpha(0.0f);
}

void indie::StartScene::updateScene(const float &delta)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));
    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));

    if (studioScreen.getColor().getAlpha() > 0) {
        studioScreen.getColor().setAlpha((unsigned char) ((float) studioScreen.getColor().getAlpha() - 1 * delta));

        if (studioScreen.getColor().getAlpha() < 1)
            gameScreen.getColor().setAlpha(255);
    } else {
        if (gameScreen.getColor().getAlpha() > 0)
            gameScreen.getColor().setAlpha((unsigned char) ((float) gameScreen.getColor().getAlpha() - 1 * delta));
    }

    if (Time::getMillisecondsTime() >= this->_endTimestamp + 4000)
        sceneManager->changeScene("mainMenu");
}