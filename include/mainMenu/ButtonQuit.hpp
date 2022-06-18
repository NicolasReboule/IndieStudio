/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.hpp
** File description:
** ButtonQuitx05.hpp
*/

#pragma once

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonQuit : public gameengine::node::_2D::Button {
    public:
        explicit ButtonQuit(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonQuit() override = default;

        void init() override;

        void pressed() override;
    };
}
