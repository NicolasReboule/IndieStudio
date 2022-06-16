/*
** EPITECH PROJECT, 2022
** AudioDeviceHelper.hpp
** FileHelper description:
** AudioDeviceHelper.hpp
*/

#ifndef INDIESTUDIO_AUDIODEVICEHELPER_HPP
#define INDIESTUDIO_AUDIODEVICEHELPER_HPP

#include <raylib.h>
#include <string>

namespace raylib::helper {
    /**
     * @brief AudioDeviceHelper device management functions
     */
    class AudioDeviceHelper {
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

#endif //INDIESTUDIO_AUDIODEVICEHELPER_HPP
