/*
** EPITECH PROJECT, 2022
** Logo.cpp
** File description:
** Logo.cpp
*/

#include "start/Logo.hpp"

#include <utility>

Indie::Logo::Logo(std::string name, const std::string &filename) : TextureRect(std::move(name), filename)
{
}

void Indie::Logo::ready()
{
}

void Indie::Logo::bob()
{
    std::cout << "jure sa mrche" << std::endl;
}

void Indie::Logo::update()
{
    this->setColor(this->getcolor().getRed() - 1, this->getcolor().getBlue() - 1, this->getcolor().getGreen() - 1, this->getcolor().getAlpha() - 1);
    auto sceneManager = GameEngine::SceneManager::getInstance();

    if (this->getcolor().getAlpha() <= 0)
        sceneManager->deleteScene("start");

    /*if (raylib::KeyboardHelper::isKeyPressed(KEY_SPACE)) {
        std::shared_ptr<GameEngine::Base> base = sceneManager->getNode("logo");
        auto &audio = dynamic_cast<Indie::Logo &>(*base);
        std::cout << base->getName() << std::endl;
        audio.bob();
    }*/
        //sceneManager->deleteScene("start");
}
