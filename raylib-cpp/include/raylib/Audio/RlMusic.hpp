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
        RlMusic(const std::string &fileName);// Load music stream from file
        RlMusic(const std::string &fileType, unsigned char *data, int dataSize); // Load music stream from data
        ~RlMusic();

        void play();                                              // Start music playing
        bool isPlaying();                                         // Check if music is playing
        void update();                                            // Updates buffers for music streaming
        void stop();                                              // Stop music playing
        void pause();                                             // Pause music playing
        void resume();                                            // Resume playing paused music
        void seek(float position);                              // Seek music to a position (in seconds)
        void setVolume(float volume);                                 // Set volume for music (1.0 is max level)
        float getVolume() const;
        void setPitch(float pitch);                                   // Set pitch for a music (1.0 is base level)
        float getTimeLength();                                          // Get music time length (in seconds)
        float getTimePlayed();                                          // Get current music time played (in seconds)

    private:
        Music music;
        float volume;
    };
}

#endif //INDIESTUDIO_RLMUSIC_HPP
