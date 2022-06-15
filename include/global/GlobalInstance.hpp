/*
** EPITECH PROJECT, 2022
** GlobalInstance.hpp
** File description:
** GlobalInstance.hpp
*/

#ifndef INDIESTUDIO_GLOBALINSTANCE_HPP
#define INDIESTUDIO_GLOBALINSTANCE_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class GlobalInstance {
    public:
        GlobalInstance() = default;
        ~GlobalInstance() = default;
        static std::shared_ptr<Indie::GlobalInstance> &getInstance();

        int _numberPlayers;
    private:
        static std::shared_ptr<GlobalInstance> _instance;
    };
}

#endif //INDIESTUDIO_GLOBALINSTANCE_HPP
