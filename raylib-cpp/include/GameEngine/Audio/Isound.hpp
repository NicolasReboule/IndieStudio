/*
** EPITECH PROJECT, 2022
** Isound.hpp
** File description:
** Isound.hpp
*/

#ifndef INDIESTUDIO_ISOUND_HPP
#define INDIESTUDIO_ISOUND_HPP

#include "raylib/Raylib.hpp"

enum SoundCategory{
    MUSIC,
    FX
};

namespace GameEngine {
    class Isound {
    public:
        explicit Isound(std::string fileName, int category);
        virtual ~Isound() = default;

        int getCategory() const;
        std::string getName();

    private:
        std::string _name;
        int _category;
    };
}

#endif //INDIESTUDIO_ISOUND_HPP
