/*
** EPITECH PROJECT, 2022
** RlMusic.hpp
** FileHelper description:
** RlMusic.hpp
*/

#ifndef INDIESTUDIO_RLMUSIC_HPP
#define INDIESTUDIO_RLMUSIC_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlMusic {
    public:
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

    private:
    };
}

#endif //INDIESTUDIO_RLMUSIC_HPP
