/*
** EPITECH PROJECT, 2022
** ButtonResume.hpp
** File description:
** ButtonResume.hpp
*/

#ifndef INDIESTUDIO_BUTTONRESUME_HPP
#define INDIESTUDIO_BUTTONRESUME_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonResume : public gameengine::node::_2D::Button {
    public:
        explicit ButtonResume(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~ButtonResume() override = default;

        void init() override;

        void pressed() override;
    };

}

#endif //INDIESTUDIO_BUTTONRESUME_HPP
