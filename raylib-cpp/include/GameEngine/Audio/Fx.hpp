/*
** EPITECH PROJECT, 2022
** Sound.hpp
** File description:
** Sound.hpp
*/

#ifndef INDIESTUDIO_FX_HPP
#define INDIESTUDIO_FX_HPP

#include "raylib/Raylib.hpp"
#include "ISound.hpp"

namespace gameengine::audio {
    class Fx : public ISound, public raylib::audio::RlSound {
        public:
            Fx(const std::string &fileName, SoundCategory category);
        };
    }

#endif //INDIESTUDIO_FX_HPP
