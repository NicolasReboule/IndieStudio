/*
** EPITECH PROJECT, 2022
** Global.hpp
** File description:
** Global.hpp
*/

#ifndef INDIESTUDIO_GLOBAL_HPP
#define INDIESTUDIO_GLOBAL_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class Global {
    public:
        explicit Global() = default;

        ~Global() = default;

        void setNumberPlayers(int numberPlayers);

        int &getNumberPlayers();

    private:
        int _numberPlayers;
    };
}

#endif //INDIESTUDIO_GLOBAL_HPP
