/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include "start/StartScene.hpp"
#include "start/Logo.hpp"

indie::StartScene::StartScene(const std::string &name, const std::string& sceneSource) : Scene(name, sceneSource)
{
}

void indie::StartScene::sceneLauncher()
{
    auto background = std::make_shared<indie::Image>("Background", std::make_shared<raylib::texture::RlTexture>("./assets/gui/background.png"));
    this->addNode(background);

    auto studioScreen = std::make_shared<indie::Image>("studioScreen", std::make_shared<raylib::texture::RlTexture>("./assets/gui/logo.png"));
    this->addNode(studioScreen);

    auto gameScreen = std::make_shared<indie::Image>("gameScreen", std::make_shared<raylib::texture::RlTexture>("./assets/gui/splashart.png"));
    this->addNode(gameScreen);
}

void indie::StartScene::initScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));
    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));

    studioScreen.getColor().setAlpha(1.0f);
    gameScreen.getColor().setAlpha(0.0f);
}

void indie::StartScene::updateScene(const float &delta)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &gameScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("studioScreen"));
    auto &studioScreen = dynamic_cast<indie::Image &>(*sceneManager->getNode("gameScreen"));

    if (studioScreen.getColor().getAlpha() > 0) {
        studioScreen.getColor().setAlpha((unsigned char) ((float) studioScreen.getColor().getAlpha() - 1 * delta));

        if (studioScreen.getColor().getAlpha() < 50)
            gameScreen.getColor().setAlpha(255);
    }
    else
        if (gameScreen.getColor().getAlpha() > 0)
            gameScreen.getColor().setAlpha((unsigned char) ((float) gameScreen.getColor().getAlpha() - 1 * delta));
        else
            sceneManager->changeScene("mainMenu");
}