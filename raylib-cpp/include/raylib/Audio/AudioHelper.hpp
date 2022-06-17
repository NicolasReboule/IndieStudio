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

namespace raylib::helper {
    /**
     * @brief Helper for audio device management functions, and more
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

        /**
         * @brief Stop any sound playing (using multichannel buffer pool)
         */
        static void stopMultiSound();

        /**
         * @brief Get the number of sounds playing in multichannel buffer pool
         * @return the number of sounds playing in multichannel buffer pool
         */
        static int getNumberOfSoundsPlaying();

        /**
         * @brief Set the default size for new audio streams
         * @param size the size to set
         */
        static void setAudioStreamBufferSizeDefault(const int &size);

    private:
        static bool _audioDeviceInit; /**< If audio device has been initialized */
    };
}

#endif //INDIESTUDIO_AUDIOHELPER_HPP
