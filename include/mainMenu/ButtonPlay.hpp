/*
** EPITECH PROJECT, 2022
** ButtonPlay.hpp
** File description:
** ButtonPlay.hpp
*/

#ifndef INDIESTUDIO_BUTTONPLAY_HPP
#define INDIESTUDIO_BUTTONPLAY_HPP

#include "GameEngine/GameEngine.hpp"

namespace Indie {

    class ButtonPlay : public gameengine::Button {
    public:
        explicit ButtonPlay(const std::string &name, const std::string &filename);

        ~ButtonPlay() override = default;

        void ready() override;

        void pressed() override;
    private:
    };

}

#endif //INDIESTUDIO_BUTTONPLAY_HPP
