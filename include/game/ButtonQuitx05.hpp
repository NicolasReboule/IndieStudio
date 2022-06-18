/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.hpp
** File description:
** ButtonQuitx05.hpp
*/

#ifndef INDIESTUDIO_BUTTONQUITX05_HPP
#define INDIESTUDIO_BUTTONQUITX05_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonQuitx05 : public gameengine::node::_2D::Button {
    public:
        explicit ButtonQuitx05(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonQuitx05() override = default;

        void init() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTONQUITX05_HPP
