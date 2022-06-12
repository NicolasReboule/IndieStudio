/*
** EPITECH PROJECT, 2022
** RlAudioStream.hpp
** FileHelper description:
** RlAudioStream.hpp
*/

#ifndef INDIESTUDIO_RLAUDIOSTREAM_HPP
#define INDIESTUDIO_RLAUDIOSTREAM_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class RlAudioStream {
    public:
        // AudioStream management functions
        RlAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels); // Init audio stream (to stream raw audio pcm data)
        ~RlAudioStream(); // Close audio stream and free memory

        void update(const void *data, int samplesCount); // Update audio stream buffers with data
        bool isProcessed();                                // Check if any audio stream buffers requires refill
        void play();                                       // Play audio stream
        void pause();                                      // Pause audio stream
        void resume();                                     // Resume audio stream
        bool isPlaying();                                  // Check if audio stream is playing
        void stop();                                       // Stop audio stream
        void setVolume(float volume);                    // Set volume for audio stream (1.0 is max level)
        float getVolume() const;
        void setPitch(float pitch);                      // Set pitch for audio stream (1.0 is base level)
        /*void setAudioStreamBufferSizeDefault(int size); */                                // Default size for new audio streams
    private:
        AudioStream stream;
        float volume;
    };
}

#endif //INDIESTUDIO_RLAUDIOSTREAM_HPP
