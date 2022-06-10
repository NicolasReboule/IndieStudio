/*
** EPITECH PROJECT, 2022
** RlSound.hpp
** FileHelper description:
** RlSound.hpp
*/

#ifndef INDIESTUDIO_RLSOUND_HPP
#define INDIESTUDIO_RLSOUND_HPP

#include "raylib.h"
#include <string>

namespace  raylib {
    class RlSound {
        public:

            RlSound(const std::string &fileName);// Load sound from file
            RlSound(Wave wave);// Load sound from wave
            ~RlSound();// Unload sound

            void update(const void *data, int samplesCount);              // Update sound buffer with new data
            void play();                                             // Play a sound
            void stop();                                                    // Stop playing a sound
            void pause();                                                   // Pause a sound
            void resume();                                                  // Resume a paused sound
            void playMulti();                                               // Play a sound (using multichannel buffer pool)
            static void stopMulti();                                                      // Stop any sound playing (using multichannel buffer pool)
            static int getPlayings();                                                     // Get number of sounds playing in the multichannel
            bool isPlaying();                                               // Check if a sound is currently playing
            void setVolume(float volume);                                 // Set volume for a sound (1.0 is max level)
            float getVolume() const;
            void setPitch(float pitch);
    private:
        Sound sound;
        float volume;
    };
}

#endif //INDIESTUDIO_RLSOUND_HPP
