/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.hpp
** File description:
** ButtonMainMenu.hpp
*/

#ifndef INDIESTUDIO_BUTTONMAINMENU_HPP
#define INDIESTUDIO_BUTTONMAINMENU_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonMainMenu : public gameengine::Button {
    public:
        explicit ButtonMainMenu(const std::string &name, const std::string &filename);

        ~ButtonMainMenu() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTONMAINMENU_HPP
