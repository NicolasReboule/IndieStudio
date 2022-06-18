/*
** EPITECH PROJECT, 2022
** GlobalInstance.hpp
** File description:
** GlobalInstance.hpp
*/

#ifndef INDIESTUDIO_GLOBALINSTANCE_HPP
#define INDIESTUDIO_GLOBALINSTANCE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class GlobalInstance {
    public:
        GlobalInstance() : _numberPlayers(0), _playersAlive(0), _indexMap(0) {}

        ~GlobalInstance() = default;

        static std::shared_ptr<indie::GlobalInstance> &getInstance();

        int _numberPlayers;
        int _playersAlive;

        std::string _playerWinner;

        int _indexMap;

    private:
        static std::shared_ptr<GlobalInstance> _instance;
    };
}

#endif //INDIESTUDIO_GLOBALINSTANCE_HPP
