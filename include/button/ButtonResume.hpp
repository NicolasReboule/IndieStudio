/*
** EPITECH PROJECT, 2022
** ButtonResume.hpp
** File description:
** ButtonResume.hpp
*/

#ifndef INDIESTUDIO_BUTTONRESUME_HPP
#define INDIESTUDIO_BUTTONRESUME_HPP

#include "IndieButton.hpp"
#include <GameEngine/GameEngine.hpp>

namespace indie::button {

    class ButtonResume : public IndieButton {
    public:
        explicit ButtonResume(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);
    };

}

#endif //INDIESTUDIO_BUTTONRESUME_HPP
