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

    class ButtonQuitx05 : public gameengine::Button {
    public:
        explicit ButtonQuitx05(const std::string &name, const std::string &filename);

        ~ButtonQuitx05() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTONQUITX05_HPP
