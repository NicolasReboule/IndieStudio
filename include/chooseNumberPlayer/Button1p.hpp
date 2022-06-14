/*
** EPITECH PROJECT, 2022
** Button1p.hpp
** File description:
** Button1p.hpp
*/

#ifndef INDIESTUDIO_BUTTON1P_HPP
#define INDIESTUDIO_BUTTON1P_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Button1p : public GameEngine::Button {
    public:
        explicit Button1p(const std::string &name, const std::string &filename);

        ~Button1p() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON1P_HPP
