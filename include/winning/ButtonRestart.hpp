/*
** EPITECH PROJECT, 2022
** ButtonRestart.hpp
** File description:
** ButtonRestart.hpp
*/

#ifndef INDIESTUDIO_BUTTONRESTART_HPP
#define INDIESTUDIO_BUTTONRESTART_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonRestartx05 : public gameengine::node::_2D::Button {
    public:
        explicit ButtonRestartx05(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonRestartx05() override = default;

        void init() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTONRESTART_HPP
