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

namespace gameengine::audio {
        class Music : public ISound, public raylib::audio::RlMusicStream {
        public:
            Music(const std::string &fileName, SoundCategory category);
        };
    }

#endif //INDIESTUDIO_MUSIC_HPP