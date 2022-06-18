/*
** EPITECH PROJECT, 2022
** Button2p.hpp
** File description:
** Button2p.hpp
*/

#ifndef INDIESTUDIO_BUTTON2P_HPP
#define INDIESTUDIO_BUTTON2P_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Button2p : public gameengine::node::_2D::Button {
    public:
        explicit Button2p(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~Button2p() override = default;

        void init() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON2P_HPP
