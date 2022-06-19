/*
** EPITECH PROJECT, 2022
** ButtonMainMenu.hpp
** File description:
** ButtonMainMenu.hpp
*/

#ifndef INDIESTUDIO_BUTTONMAINMENU_HPP
#define INDIESTUDIO_BUTTONMAINMENU_HPP

#include "button/IndieButton.hpp"

namespace indie::button {

    class ButtonMainMenu : public IndieButton {
    public:
        explicit ButtonMainMenu(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);
    };
}

#endif //INDIESTUDIO_BUTTONMAINMENU_HPP
