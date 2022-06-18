/*
** EPITECH PROJECT, 2022
** Button1p.hpp
** File description:
** Button1p.hpp
*/

#ifndef INDIESTUDIO_BUTTON1P_HPP
#define INDIESTUDIO_BUTTON1P_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Button1p : public gameengine::node::_2D::Button {
    public:
        explicit Button1p(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~Button1p() override = default;

        void init() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON1P_HPP
