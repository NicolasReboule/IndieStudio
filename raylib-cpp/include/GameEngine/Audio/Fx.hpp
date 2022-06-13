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

namespace GameEngine::Audio {
    class Fx : public ISound, public raylib::RlSound {
        public:
            Fx(const std::string &fileName, SoundCategory category);
        };
    }

#endif //INDIESTUDIO_FX_HPP
