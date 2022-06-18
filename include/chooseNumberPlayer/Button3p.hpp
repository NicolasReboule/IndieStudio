/*
** EPITECH PROJECT, 2022
** Button3p.hpp
** File description:
** Button3p.hpp
*/

#ifndef INDIESTUDIO_BUTTON3P_HPP
#define INDIESTUDIO_BUTTON3P_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Button3p : public gameengine::node::_2D::Button {
    public:
        explicit Button3p(const std::string &name,  const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~Button3p() override = default;

        void init() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON3P_HPP
