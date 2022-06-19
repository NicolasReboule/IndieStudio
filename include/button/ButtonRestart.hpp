/*
** EPITECH PROJECT, 2022
** ButtonRestart.hpp
** File description:
** ButtonRestart.hpp
*/

#ifndef INDIESTUDIO_BUTTONRESTART_HPP
#define INDIESTUDIO_BUTTONRESTART_HPP

#include "IndieButton.hpp"
#include "global/GlobalInstance.hpp"

namespace indie::button {
    class ButtonRestart : public IndieButton {
    public:
        explicit ButtonRestart(const std::string &name, const std::shared_ptr<raylib::texture::RlTexture> &texture);
    };
}

#endif //INDIESTUDIO_BUTTONRESTART_HPP
