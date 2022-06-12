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

namespace GameEngine {
    class AudioManager : public raylib::AudioHelper {
    public:
        AudioManager() = default;

        ~AudioManager() = default;

        static std::shared_ptr<AudioManager> &getInstance();

        void addSound(const std::string &fileName, int category);

        void playSound(const std::string &fileName);

        void deleteSound(const std::string &fileName);

    private:
        static std::shared_ptr<AudioManager> _instance;

        std::vector<std::unique_ptr<GameEngine::ISound>> _sounds;
    };
}

#endif //INDIESTUDIO_AUDIOMANAGER_HPP
