/*
** EPITECH PROJECT, 2022
** RlAudioStream.hpp
** FileHelper description:
** RlAudioStream.hpp
*/

#ifndef INDIESTUDIO_RLAUDIOSTREAM_HPP
#define INDIESTUDIO_RLAUDIOSTREAM_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlAudioStream {
    public:
        // AudioStream management functions
        AudioStream loadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels); // Init audio stream (to stream raw audio pcm data)
        void updateAudioStream(AudioStream stream, const void *data, int samplesCount); // Update audio stream buffers with data
        void closeAudioStream(AudioStream stream);                                      // Close audio stream and free memory
        bool isAudioStreamProcessed(AudioStream stream);                                // Check if any audio stream buffers requires refill
        void playAudioStream(AudioStream stream);                                       // Play audio stream
        void pauseAudioStream(AudioStream stream);                                      // Pause audio stream
        void resumeAudioStream(AudioStream stream);                                     // Resume audio stream
        bool isAudioStreamPlaying(AudioStream stream);                                  // Check if audio stream is playing
        void stopAudioStream(AudioStream stream);                                       // Stop audio stream
        void setAudioStreamVolume(AudioStream stream, float volume);                    // Set volume for audio stream (1.0 is max level)
        void setAudioStreamPitch(AudioStream stream, float pitch);                      // Set pitch for audio stream (1.0 is base level)
        void setAudioStreamBufferSizeDefault(int size);                                 // Default size for new audio streams
    private:
    };
}

#endif //INDIESTUDIO_RLAUDIOSTREAM_HPP
