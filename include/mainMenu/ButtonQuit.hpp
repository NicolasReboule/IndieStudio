/*
** EPITECH PROJECT, 2022
** ButtonQuitx05.hpp
** File description:
** ButtonQuitx05.hpp
*/

#pragma once

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class ButtonQuit : public gameengine::Button {
    public:
        explicit ButtonQuit(const std::string &name, const std::string &filename);

        ~ButtonQuit() override = default;

        void ready() override;

        void pressed() override;
    };

}
