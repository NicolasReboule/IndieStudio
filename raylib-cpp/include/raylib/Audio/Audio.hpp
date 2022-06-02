/*
** EPITECH PROJECT, 2022
** Audio.hpp
** File description:
** Audio.hpp
*/

#ifndef INDIESTUDIO_AUDIO_HPP
#define INDIESTUDIO_AUDIO_HPP

#include "raylib.h"
#include <string>

namespace raylib {

    class Audio {
    public:
        // Audio device management functions
        void initAudioDevice();                                                     // Initialize audio device and context
        void closeAudioDevice();                                                    // Close the audio device and context
        bool isAudioDeviceReady();                                                  // Check if audio device has been initialized successfully
        void setMasterVolume(float volume);                                             // Set master volume (listener)

    private:
    };
}

#endif //INDIESTUDIO_AUDIO_HPP
