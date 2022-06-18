/*
** EPITECH PROJECT, 2022
** AudioManager.hpp
** File description:
** AudioManager.hpp
*/

#ifndef INDIESTUDIO_AUDIOMANAGER_HPP
#define INDIESTUDIO_AUDIOMANAGER_HPP

#include "raylib/Raylib.hpp"
#include "ISound.hpp"
#include <vector>

namespace gameengine {
    class AudioManager {
    public:
        AudioManager();

        ~AudioManager();

        static std::shared_ptr<AudioManager> &getInstance();

        void addSound(const std::string &fileName, SoundCategory category);

        void playSound(const std::string &fileName);

        void deleteSound(const std::string &fileName);

        void setVolume(float volume, SoundCategory category);

    private:
        static std::shared_ptr<AudioManager> _instance;

        std::vector<std::unique_ptr<gameengine::ISound>> _sounds;
    };
}

#endif //INDIESTUDIO_AUDIOMANAGER_HPP
