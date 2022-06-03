/*
** EPITECH PROJECT, 2022
** AudioHelper.hpp
** FileHelper description:
** AudioHelper.hpp
*/

#ifndef INDIESTUDIO_AUDIOHELPER_HPP
#define INDIESTUDIO_AUDIOHELPER_HPP

#include "raylib.h"
#include <string>

namespace raylib {

    class AudioHelper {
    public:
        // AudioHelper device management functions
        static void initAudioDevice();                                                     // Initialize audio device and context
        static void closeAudioDevice();                                                    // Close the audio device and context
        static bool isAudioDeviceReady();                                                  // Check if audio device has been initialized successfully
        static void setMasterVolume(float volume);                                             // Set master volume (listener)

    private:
    };
}

#endif //INDIESTUDIO_AUDIOHELPER_HPP
