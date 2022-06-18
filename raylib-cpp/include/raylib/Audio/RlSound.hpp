/*
** EPITECH PROJECT, 2022
** RlSound.hpp
** FileHelper description:
** RlSound.hpp
*/

#ifndef INDIESTUDIO_RLSOUND_HPP
#define INDIESTUDIO_RLSOUND_HPP

#include <raylib.h>
#include <string>

namespace raylib::audio {
    class RlWave; /**< Forward declaration */

    /**
     * @brief Encapulation of the raylib Sound
     */
    class RlSound {
    public:
        /**
         * @brief Construct a new RlSound object from the raylib Sound
         * @param sound the raylib Sound
         */
        explicit RlSound(const Sound &sound);

        /**
         * @brief Construct a new RlSound object from a file
         * @param fileName the name of the file
         */
        explicit RlSound(const std::string &fileName);

        /**
         * @brief Construct a new RlSound object from a RlWave
         * @param wave the RlWave
         */
        explicit RlSound(const RlWave &wave);

        /**
         * @brief Destroy the RlSound object
         */
        ~RlSound();

        /**
         * @brief Update sound buffer with new data
         * @param data the new data
         * @param samplesCount the number of samples
         */
        void update(const void *data, const int &samplesCount);

        /**
         * @brief Play the sound
         */
        void play();

        /**
         * @brief Stop the sound
         */
        void stop();

        /**
         * @brief Pause the sound
         */
        void pause();

        /**
         * @brief Resume the sound
         */
        void resume();

        /**
         * @brief Play a sound (using multichannel buffer pool)
         */
        void playMulti();

        /**
         * @brief Check if a sound is currently playing
         * @return true if the sound is playing
         */
        bool isPlaying();

        /**
         * @brief Set volume for a sound (1.0 is max level)
         * @param volume the volume
         */
        void setVolume(const float &volume);

        /**
         * @brief Get the volume of a sound
         * @return the volume
         */
        const float &getVolume() const;

        /**
         * @brief Set pitch for a sound (1.0 is base level)
         * @param pitch the pitch
         */
        void setPitch(const float &pitch);

    private:
        Sound _sound; /**< The raylib sound */
        float _volume; /**< The volume of the sound */
    };
}

#endif //INDIESTUDIO_RLSOUND_HPP
