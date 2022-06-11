/*
** EPITECH PROJECT, 2022
** Music.hpp
** File description:
** Music.hpp
*/

#ifndef INDIESTUDIO_MUSIC_HPP
#define INDIESTUDIO_MUSIC_HPP

#include "raylib/Raylib.hpp"
#include "ISound.hpp"

namespace GameEngine::Audio {
        class Music : public ISound, public raylib::RlMusic {
        public:
            Music(const std::string &fileName, int category);
        };
    }

#endif //INDIESTUDIO_MUSIC_HPP