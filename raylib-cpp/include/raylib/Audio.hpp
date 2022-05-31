/*
** EPITECH PROJECT, 2022
** Audio.hpp
** File description:
** Audio.hpp
*/

#ifndef INDIESTUDIO_AUDIO_HPP
#define INDIESTUDIO_AUDIO_HPP

#include <raylib.h>
#include <string>

namespace raylib {

    class Audio {
    public:
        // Audio device management functions
        void initAudioDevice(void);                                                     // Initialize audio device and context
        void closeAudioDevice(void);                                                    // Close the audio device and context
        bool isAudioDeviceReady(void);                                                  // Check if audio device has been initialized successfully
        void setMasterVolume(float volume);                                             // Set master volume (listener)
    
        // Wave/Sound loading/unloading functions
        Wave loadWave(const std::string &fileName);                                            // Load wave data from file
        Wave loadWaveFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize); // Load wave from memory buffer
        Sound loadSound(const std::string &fileName);                                          // Load sound from file
        Sound loadSoundFromWave(Wave wave);                                             // Load sound from wave data
        void updateSound(Sound sound, const void *data, int samplesCount);              // Update sound buffer with new data
        void unloadWave(Wave wave);                                                     // Unload wave data
        void unloadSound(Sound sound);                                                  // Unload sound
        bool exportWave(Wave wave, const std::string &fileName);                               // Export wave data to file, returns true on success
        bool exportWaveAsCode(Wave wave, const std::string &fileName);                         // Export wave sample data to code (.h), returns true on success
    
        // Wave/Sound management functions
        void playSound(Sound sound);                                                    // Play a sound
        void stopSound(Sound sound);                                                    // Stop playing a sound
        void pauseSound(Sound sound);                                                   // Pause a sound
        void resumeSound(Sound sound);                                                  // Resume a paused sound
        void playSoundMulti(Sound sound);                                               // Play a sound (using multichannel buffer pool)
        void stopSoundMulti(void);                                                      // Stop any sound playing (using multichannel buffer pool)
        int getSoundsPlaying(void);                                                     // Get number of sounds playing in the multichannel
        bool isSoundPlaying(Sound sound);                                               // Check if a sound is currently playing
        void setSoundVolume(Sound sound, float volume);                                 // Set volume for a sound (1.0 is max level)
        void setSoundPitch(Sound sound, float pitch);                                   // Set pitch for a sound (1.0 is base level)
        void waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels);      // Convert wave data to desired format
        Wave waveCopy(Wave wave);                                                       // Copy a wave to a new wave
        void waveCrop(Wave *wave, int initSample, int finalSample);                     // Crop a wave to defined samples range
        float *loadWaveSamples(Wave wave);                                              // Load samples data from wave as a floats array
        void unloadWaveSamples(float *samples);                                         // Unload samples data loaded with LoadWaveSamples()
    
        // Music management functions
        Music loadMusicStream(const std::string &fileName);                                    // Load music stream from file
        Music loadMusicStreamFromMemory(const std::string &fileType, unsigned char *data, int dataSize); // Load music stream from data
        void unloadMusicStream(Music music);                                            // Unload music stream
        void playMusicStream(Music music);                                              // Start music playing
        bool isMusicStreamPlaying(Music music);                                         // Check if music is playing
        void updateMusicStream(Music music);                                            // Updates buffers for music streaming
        void stopMusicStream(Music music);                                              // Stop music playing
        void pauseMusicStream(Music music);                                             // Pause music playing
        void resumeMusicStream(Music music);                                            // Resume playing paused music
        void seekMusicStream(Music music, float position);                              // Seek music to a position (in seconds)
        void setMusicVolume(Music music, float volume);                                 // Set volume for music (1.0 is max level)
        void setMusicPitch(Music music, float pitch);                                   // Set pitch for a music (1.0 is base level)
        float getMusicTimeLength(Music music);                                          // Get music time length (in seconds)
        float getMusicTimePlayed(Music music);                                          // Get current music time played (in seconds)
    
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

#endif //INDIESTUDIO_AUDIO_HPP
