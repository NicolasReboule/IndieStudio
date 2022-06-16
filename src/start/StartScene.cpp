/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include <IndieStudio.hpp>
#include "start/StartScene.hpp"
#include "start/Logo.hpp"

indie::StartScene::StartScene(std::string name, std::string sceneSource) : Scene(std::move(name), std::move(sceneSource))
{
}

void indie::StartScene::sceneLauncher()
{
    auto background = std::make_shared<indie::Logo>("Background", "./assets/gui/background.png");
    this->addNode(background);


    auto studioScreen = std::make_shared<indie::Logo>("studioScreen", "./assets/gui/logo.png");
    this->addNode(studioScreen);

    auto gameScreen = std::make_shared<indie::Logo>("gameScreen", "./assets/gui/splashart.png");
    this->addNode(gameScreen);



}

void indie::StartScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &studioScreen = dynamic_cast<indie::Logo &>(*sceneManager->getNode("studioScreen"));
    auto &gameScreen = dynamic_cast<indie::Logo &>(*sceneManager->getNode("gameScreen"));

    studioScreen.setColor(studioScreen.getColor().getRed(), studioScreen.getColor().getGreen(), studioScreen.getColor().getBlue(), 255);
    gameScreen.setColor(gameScreen.getColor().getRed(), gameScreen.getColor().getGreen(), gameScreen.getColor().getBlue(), 0);
    std::cout << "mpm" << std::endl;
}

void indie::StartScene::updateScene(float delta)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &gameScreen = dynamic_cast<indie::Logo &>(*sceneManager->getNode("studioScreen"));
    auto &studioScreen = dynamic_cast<indie::Logo &>(*sceneManager->getNode("gameScreen"));

    if (studioScreen.getColor().getAlpha() > 0) {
        studioScreen.setColor(studioScreen.getColor().getRed(), studioScreen.getColor().getBlue(), studioScreen.getColor().getGreen(),
                              studioScreen.getColor().getAlpha() - 1 * delta);

        if (studioScreen.getColor().getAlpha() < 50)
            gameScreen.setColor( gameScreen.getColor().getRed(), gameScreen.getColor().getGreen(), gameScreen.getColor().getBlue(), 255);
    }
    else
        if (gameScreen.getColor().getAlpha() > 0)
            gameScreen.setColor(gameScreen.getColor().getRed(), gameScreen.getColor().getBlue(), gameScreen.getColor().getGreen(), gameScreen.getColor().getAlpha() - 1 * delta);
        else
            sceneManager->changeScene("mainMenu");
}