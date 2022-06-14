/*
** EPITECH PROJECT, 2022
** Button2p.hpp
** File description:
** Button2p.hpp
*/

#ifndef INDIESTUDIO_BUTTON2P_HPP
#define INDIESTUDIO_BUTTON2P_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Button2p : public GameEngine::Button {
    public:
        explicit Button2p(const std::string &name, const std::string &filename);

        ~Button2p() override = default;

        void ready() override;

        void pressed() override;
    };
}

#endif //INDIESTUDIO_BUTTON2P_HPP
