/*
** EPITECH PROJECT, 2022
** ISound.hpp
** File description:
** ISound.hpp
*/

#ifndef INDIESTUDIO_ISOUND_HPP
#define INDIESTUDIO_ISOUND_HPP

#include "raylib/Raylib.hpp"

enum SoundCategory{
    MUSIC,
    FX
};

namespace GameEngine {
    class ISound {
    public:
        explicit ISound(std::string fileName, int category);
        virtual ~ISound() = default;

        int getCategory() const;
        std::string getName();

    private:
        std::string _name;
        int _category;
    };
}

#endif //INDIESTUDIO_ISOUND_HPP
