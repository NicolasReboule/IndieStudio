/*
** EPITECH PROJECT, 2022
** ButtonPlay.hpp
** File description:
** ButtonPlay.hpp
*/

#ifndef INDIESTUDIO_BUTTONPLAY_HPP
#define INDIESTUDIO_BUTTONPLAY_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonPlay : public gameengine::node::_2D::Button {
    public:
        explicit ButtonPlay(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonPlay() override = default;

        void init() override;

        void pressed() override;

    };
}

#endif //INDIESTUDIO_BUTTONPLAY_HPP
