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

namespace gameengine {
    class ISound {
    public:
        explicit ISound(std::string fileName, SoundCategory category);
        virtual ~ISound() = default;

        SoundCategory getCategory() const;
        std::string getName();

    private:
        std::string _name;
        SoundCategory _category;
    };
}

#endif //INDIESTUDIO_ISOUND_HPP
