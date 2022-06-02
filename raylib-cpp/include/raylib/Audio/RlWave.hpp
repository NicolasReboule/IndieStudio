/*
** EPITECH PROJECT, 2022
** RlWave.hpp
** File description:
** RlWave.hpp
*/

#ifndef INDIESTUDIO_RLWAVE_HPP
#define INDIESTUDIO_RLWAVE_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class RlWave {
    public:
        // Wave/RlSound loading/unloading functions
        Wave loadWave(const std::string &fileName);                                            // Load wave data from file
        Wave loadWaveFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize); // Load wave from memory buffer         // Load sound from wave data
        void unloadWave(Wave wave);                                                     // Unload wave data
        bool exportWave(Wave wave, const std::string &fileName);                               // Export wave data to file, returns true on success
        bool exportWaveAsCode(Wave wave, const std::string &fileName);                         // Export wave sample data to code (.h), returns true on success

        // Wave/RlSound management functions         // Set pitch for a sound (1.0 is base level)
        void waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels);      // Convert wave data to desired format
        Wave waveCopy(Wave wave);                                                       // Copy a wave to a new wave
        void waveCrop(Wave *wave, int initSample, int finalSample);                     // Crop a wave to defined samples range
        float *loadWaveSamples(Wave wave);                                              // Load samples data from wave as a floats array
        void unloadWaveSamples(float *samples);                                         // Unload samples data loaded with LoadWaveSamples()

    private:
    };
}

#endif //INDIESTUDIO_RLWAVE_HPP
