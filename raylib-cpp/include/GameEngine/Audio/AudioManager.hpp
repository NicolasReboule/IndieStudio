/*
** EPITECH PROJECT, 2022
** AudioManager.hpp
** File description:
** AudioManager.hpp
*/

#ifndef INDIESTUDIO_AUDIOMANAGER_HPP
#define INDIESTUDIO_AUDIOMANAGER_HPP

#include "raylib/Raylib.hpp"
#include "AbstractSound.hpp"
#include <vector>

namespace gameengine {
    /**
     * @brief The AudioManager class
     */
    class AudioManager {
    public:
        /**
         * @brief Construct a new AudioManager object
         */
        AudioManager();

        /**
         * @brief Destroy the AudioManager object
         */
        ~AudioManager();

        /**
         * @brief Get the singleton instance
         * @return the singleton instance
         */
        static std::shared_ptr<AudioManager> &getInstance();

        /**
         * @brief Load all sounds from the assetsPath + (music/sound)
         * @param assetsPath the path to the assets
         */
        void loadSounds(const std::string &assetsPath = "./assets/");

        /**
         * @brief Load all sounds in different categories
         * @param soundDir the path to the sound directory
         * @param musicDir the path to the music directory
         */
        void loadSounds(const std::string &soundDir, const std::string &musicDir);

        /**
         * @brief Add a sound to the manager
         * @param filePath the name of the file
         * @param category the category of the sound
         */
        void addSound(const std::string &filePath, AbstractSound::SoundCategory category);

        /**
         * @brief Play a sound
         * @param name the name of the file, or full path
         */
        void playSound(const std::string &name);

        /**
         * @brief Remove a sound from the manager
         * @param name the name of the file, or full path
         */
        void deleteSound(const std::string &name);

        /**
         * @brief Set the volume of a category
         * @param volume the volume
         * @param category the category
         */
        void setVolume(const float &volume, AbstractSound::SoundCategory category);

        /**
         * @brief Get a sound from the manager
         * @param name the name of the file, or full path
         * @return the sound
         */
        std::unique_ptr<AbstractSound> &getSound(const std::string &name);

    private:
        static std::shared_ptr<AudioManager> _instance; /**< The unique instance of the AudioManager */

        std::vector<std::unique_ptr<gameengine::AbstractSound>> _sounds; /**< All the sounds loaded */
    };
}

#endif //INDIESTUDIO_AUDIOMANAGER_HPP
