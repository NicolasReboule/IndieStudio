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
            Sound loadSound(const std::string &fileName);                                          // Load sound from file
            Sound loadSoundFromWave(Wave wave);
            void updateSound(Sound sound, const void *data, int samplesCount);              // Update sound buffer with new data
            void unloadSound(Sound sound);                                                  // Unload sound
            void playSound(Sound sound);                                             // Play a sound
            void stopSound(Sound sound);                                                    // Stop playing a sound
            void pauseSound(Sound sound);                                                   // Pause a sound
            void resumeSound(Sound sound);                                                  // Resume a paused sound
            void playSoundMulti(Sound sound);                                               // Play a sound (using multichannel buffer pool)
            void stopSoundMulti();                                                      // Stop any sound playing (using multichannel buffer pool)
            int getSoundsPlaying();                                                     // Get number of sounds playing in the multichannel
            bool isSoundPlaying(Sound sound);                                               // Check if a sound is currently playing
            void setSoundVolume(Sound sound, float volume);                                 // Set volume for a sound (1.0 is max level)
            void setSoundPitch(Sound sound, float pitch);
    private:

    };
}

#endif //INDIESTUDIO_RLSOUND_HPP
