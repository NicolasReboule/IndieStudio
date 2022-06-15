/*
** EPITECH PROJECT, 2022
** ButtonQuit.hpp
** File description:
** ButtonQuit.hpp
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
