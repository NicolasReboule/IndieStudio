/*
** EPITECH PROJECT, 2022
** Sound.hpp
** File description:
** Sound.hpp
*/

#ifndef INDIESTUDIO_FX_HPP
#define INDIESTUDIO_FX_HPP

#include "raylib/Raylib.hpp"
#include "Isound.hpp"

namespace GameEngine {
    namespace Audio {
    class Fx : public Isound, public raylib::RlSound {
        public:
            Fx(const std::string &fileName, int category);
        };
    }
}

#endif //INDIESTUDIO_FX_HPP
