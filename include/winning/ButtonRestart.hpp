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

    class ButtonRestartx05 : public gameengine::Button {
    public:
        explicit ButtonRestartx05(const std::string &name, const std::string &filename);

        ~ButtonRestartx05() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTONRESTART_HPP
