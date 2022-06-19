/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.cpp
** File description:
** ButtonMainMenu.cpp
*/

#include "button/ButtonMainMenu.hpp"

indie::button::ButtonMainMenu::ButtonMainMenu(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : IndieButton(name, texture, nullptr)
{
    this->_callback = [](auto &name) {
        auto &sceneManager = gameengine::SceneManager::getInstance();
        sceneManager->changeScene("mainMenu");
    };
}
