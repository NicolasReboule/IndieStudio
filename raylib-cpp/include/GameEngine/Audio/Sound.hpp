/*
** EPITECH PROJECT, 2022
** Sound.hpp
** File description:
** Sound.hpp
*/

#ifndef INDIESTUDIO_SOUND_HPP
#define INDIESTUDIO_SOUND_HPP

#include "raylib/Raylib.hpp"
#include "AbstractSound.hpp"

namespace gameengine::audio {
    /**
     * @brief A sound effect
     */
    class Sound : public AbstractSound, public raylib::audio::RlSound {
    public:
        /**
         * @brief Construct a new Sound object
         * @param fileName the file name of the sound
         * @param category the category of the sound
         */
        explicit Sound(const std::string &fileName, SoundCategory category);

        /**
         * @brief Set the volume of the sound
         * @param volume the volume
         */
        void setVolume(const float &volume) override;
    };
}

#endif //INDIESTUDIO_SOUND_HPP
