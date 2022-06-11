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

class AudioHelper {
    public:

        AudioHelper();
        ~AudioHelper();
        // AudioHelper device management functions
        //void initAudioDevice();                                                     // Initialize audio device and context
        //void closeAudioDevice();                                                    // Close the audio device and context
        bool isAudioDeviceReady();                                                  // Check if audio device has been initialized successfully
        void setMasterVolume(float volume);                                             // Set master volume (listener)
    private:
    };
}

#endif //INDIESTUDIO_AUDIOHELPER_HPP
