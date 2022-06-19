/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include "scene/StartScene.hpp"
#include "Image.hpp"
#include <thread>

indie::StartScene::StartScene(const std::string &name, const std::string& sceneSource) : Scene(name, sceneSource)
{
    this->_startTimestamp = Time::getMillisecondsTime();
}

void indie::StartScene::sceneLauncher()
{
    auto &textureManager = gameengine::TextureManager::getInstance();

    textureManager->loadTextures();

    auto gameScreen = std::make_shared<indie::Image>("gameScreen", textureManager->getTexture("./assets/textures/gui/splashart.png"));
    this->addNode(gameScreen);

    auto studioScreen = std::make_shared<indie::Image>("studioScreen", textureManager->getTexture("./assets/textures/gui/logo.png"));
    this->addNode(studioScreen);
}

void indie::StartScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));
    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));

    studioScreen.getColor().alpha(0.0f);
    gameScreen.getColor().alpha(0.0f);
}

void indie::StartScene::updateScene(const float &delta)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));
    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));

    long ms = Time::getMillisecondsTime();
    long elapsed = ms - this->_startTimestamp;
    long fadeTime = 3500;

    if (ms <= _startTimestamp + fadeTime) {
        unsigned char currentAlpha = 0 + (255 - 0) * elapsed / fadeTime;
        studioScreen.getColor().setAlpha(currentAlpha);
    }

    if (ms >= _startTimestamp + fadeTime && studioScreen.getColor().getAlpha() > 2) {
        unsigned char currentAlpha = 255 + (0 - 255) * elapsed / fadeTime;
        studioScreen.getColor().setAlpha(currentAlpha == 0 ? 255 : currentAlpha);
    }

    if (ms <= _startTimestamp + fadeTime * 3 && studioScreen.getColor().getAlpha() <= 2) {
        unsigned char currentAlpha = 0 + (255 - 0) * (elapsed - fadeTime * 2) / fadeTime;
        gameScreen.getColor().setAlpha(currentAlpha);
    }

    if (ms >= _startTimestamp + fadeTime * 3 && studioScreen.getColor().getAlpha() <= 2) {
        unsigned char currentAlpha = 255 + (0 - 255) * (elapsed - fadeTime * 3) / fadeTime;
        gameScreen.getColor().setAlpha(currentAlpha == 0 ? 255 : currentAlpha);
    }

    if (ms >= this->_startTimestamp + fadeTime * 4 || raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_SPACE))
        sceneManager->changeScene("mainMenu");
}