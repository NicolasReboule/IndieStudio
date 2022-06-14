/*
** EPITECH PROJECT, 2022
** Button3p.hpp
** File description:
** Button3p.hpp
*/

#ifndef INDIESTUDIO_BUTTON3P_HPP
#define INDIESTUDIO_BUTTON3P_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Button3p : public GameEngine::Button {
    public:
        explicit Button3p(const std::string &name, const std::string &filename);

        ~Button3p() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON3P_HPP
