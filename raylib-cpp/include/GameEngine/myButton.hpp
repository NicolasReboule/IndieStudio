/*
** EPITECH PROJECT, 2022
** myButton.hpp
** File description:
** myButton.hpp
*/

#ifndef INDIESTUDIO_MYBUTTON_HPP
#define INDIESTUDIO_MYBUTTON_HPP

#include "Nodes/2D/Button.hpp"

namespace GameEngine {

    class myButton : public Button {
    public:

        explicit myButton(const std::string& filename);

        ~myButton() override = default;

        void ready() override;

        void pressed() override;

    private:
    };
}

#endif //INDIESTUDIO_MYBUTTON_HPP
