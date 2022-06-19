/*
** EPITECH PROJECT, 2022
** Music.hpp
** File description:
** Music.hpp
*/

#ifndef INDIESTUDIO_MUSIC_HPP
#define INDIESTUDIO_MUSIC_HPP

#include "raylib/Raylib.hpp"
#include "AbstractSound.hpp"

namespace gameengine::audio {
    /**
     * @brief A music
     */
    class Music : public AbstractSound, public raylib::audio::RlMusic {
    public:
        /**
         * @brief Construct a new Music object
         * @param fileName the file name
         * @param category the category
         */
        explicit Music(const std::string &fileName, AbstractSound::SoundCategory category);

        /**
         * @brief Set the volume
         * @param volume the volume
         */
        void setVolume(const float &volume) override;
    };
}

#endif //INDIESTUDIO_MUSIC_HPP