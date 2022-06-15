/*
** EPITECH PROJECT, 2022
** Button4p.hpp
** File description:
** Button4p.hpp
*/

#ifndef INDIESTUDIO_BUTTON4P_HPP
#define INDIESTUDIO_BUTTON4P_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Button4p : public gameengine::Button {
    public:
        explicit Button4p(const std::string &name, const std::string &filename);

        ~Button4p() override = default;

        void ready() override;

        void pressed() override;

    };
}

#endif //INDIESTUDIO_BUTTON4P_HPP
