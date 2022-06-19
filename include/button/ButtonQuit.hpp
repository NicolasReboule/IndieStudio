/*
** EPITECH PROJECT, 2022
** ButtonQuit.hpp
** File description:
** ButtonQuit.hpp
*/

#ifndef INDIESTUDIO_BUTTONQUIT_HPP
#define INDIESTUDIO_BUTTONQUIT_HPP

#include "IndieButton.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie::button {
    class ButtonQuit : public IndieButton {
    public:
        explicit ButtonQuit(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);
    };
}

#endif //INDIESTUDIO_BUTTONQUIT_HPP
