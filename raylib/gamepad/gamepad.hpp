/*
** EPITECH PROJECT, 2022
** gamepad.hpp
** File description:
** gamepad.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_GAMEPAD_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_GAMEPAD_HPP

#include "../raylib.hpp"

namespace raylib {
    class Gamepad {
    public:
        Gamepad();
        Gamepad(int gamepadNumber);
        ~Gamepad();

        int getNumber();
        void setNumber(int gamepadNumber);

        bool isButtonPressed(int button);
        bool isButtonJustPressed(int button);

    private:
        int _number;
    };
}


#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_GAMEPAD_HPP
