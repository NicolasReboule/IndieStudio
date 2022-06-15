/*
** EPITECH PROJECT, 2022
** StartScene.cpp
** File description:
** StartScene.cpp
*/

#include <IndieStudio.hpp>
#include "start/StartScene.hpp"
#include "start/Logo.hpp"

Indie::StartScene::StartScene(std::string name, std::string sceneSource) : Scene(std::move(name), std::move(sceneSource))
{
}

void Indie::StartScene::sceneLauncher()
{
    auto studioScreen = std::make_shared<Indie::Logo>("splashart", "./assets/gui/splashart.png");
    this->addNode(studioScreen);

    auto gameScreen = std::make_shared<Indie::Logo>("logo", "./assets/gui/logo.png");
    this->addNode(gameScreen);


}

void Indie::StartScene::readyScene()
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    auto &studioScreen = dynamic_cast<Indie::Logo &>(*sceneManager->getNode("buttonPlay"));

    studioScreen.setColor(studioScreen.getColor().getRed(), studioScreen.getColor().getGreen(), studioScreen.getColor().getBlue(), 0);
}

void Indie::StartScene::updateScene(float delta)
{
    auto sceneManager = gameengine::SceneManager::getInstance();

    //std::shared_ptr<gameengine::Base> base = sceneManager->getNode("logo");
    auto &logo = dynamic_cast<Indie::Logo &>(*sceneManager->getNode("logo"));
    auto &game = dynamic_cast<Indie::Logo &>(*sceneManager->getNode("splashart"));

    if (logo.getColor().getAlpha() > 0) {
        logo.setColor(logo.getColor().getRed(), logo.getColor().getBlue(), logo.getColor().getGreen(),
                      logo.getColor().getAlpha() - 1 * delta);

        if (logo.getColor().getAlpha() < 15)
            game.setColor( game.getColor().getRed(), game.getColor().getGreen(), game.getColor().getBlue(), 255);
    }
    else
        if (game.getColor().getAlpha() > 0)
            game.setColor(game.getColor().getRed(), game.getColor().getBlue(), game.getColor().getGreen(), game.getColor().getAlpha() - 1 * delta);
        else
            sceneManager->changeScene("mainMenu");
}