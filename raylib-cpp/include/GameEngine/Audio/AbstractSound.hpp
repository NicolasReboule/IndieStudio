/*
** EPITECH PROJECT, 2022
** AbstractSound.hpp
** File description:
** AbstractSound.hpp
*/

#ifndef INDIESTUDIO_ABSTRACTSOUND_HPP
#define INDIESTUDIO_ABSTRACTSOUND_HPP

#include "raylib/Raylib.hpp"

namespace gameengine {
    /**
     * @brief Abstraction for sound
     */
    class AbstractSound {
    public:
        /**
         * @brief The type of sound
         */
        enum SoundCategory {
            MUSIC,
            FX
        };

        /**
         * @brief Construct a new AbstractSound object
         * @param filePath the name of the file
         * @param category the category of the sound
         */
        explicit AbstractSound(const std::string &filePath, const SoundCategory &category);
        virtual ~AbstractSound() = default;

        /**
         * @brief Get the SoundCategory
         * @return the SoundCategory object
         */
        SoundCategory getCategory() const;

        /**
         * @brief Get the FileName
         * @return the FileName object
         */
        const std::string &getName() const;

        /**
         * @brief Get the file path
         * @return the file path
         */
        const std::string &getFilePath() const;

        /**
         * @brief Set the Volume
         * @param volume the volume
         */
        virtual void setVolume(const float &volume) = 0;

    private:
        std::string _name; /**< The name of the sound without extension */
        std::string _filePath; /**< The file path of the sound */
        SoundCategory _category; /**< The category of sound */
    };
}

#endif //INDIESTUDIO_ABSTRACTSOUND_HPP
