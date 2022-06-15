/*
** EPITECH PROJECT, 2022
** AudioHelper.hpp
** FileHelper description:
** AudioHelper.hpp
*/

#ifndef INDIESTUDIO_AUDIOHELPER_HPP
#define INDIESTUDIO_AUDIOHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief AudioHelper device management functions
     */
    class AudioHelper {
    public:
        /**
         * @brief Initialize audio device and context
         */
        static void initAudioDevice();

        /**
         * @brief Close the audio device and context
         */
        static void closeAudioDevice();

        /**
         * @brief Check if audio device has been initialized successfully
         * @return true if audio device has been initialized successfully
         */
        static bool isAudioDeviceReady();

        /**
         * @brief Set master volume (listener)
         * @param volume the volume to set
         */
        static void setMasterVolume(float volume);

    private:
        static bool _audioDeviceInit; /**< If audio device has been initialized */
    };
}

#endif //INDIESTUDIO_AUDIOHELPER_HPP
