/*
** EPITECH PROJECT, 2022
** WaveHelper.hpp
** FileHelper description:
** WaveHelper.hpp
*/

#ifndef INDIESTUDIO_WAVEHELPER_HPP
#define INDIESTUDIO_WAVEHELPER_HPP

#include <raylib.h>

namespace raylib {
    class WaveHelper {
    public:
        // Wave/RlSound management functions         // Set pitch for a sound (1.0 is base level)
        static void waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels);      // Convert wave data to desired format
        static Wave waveCopy(Wave wave);                                                       // Copy a wave to a new wave
        static void waveCrop(Wave *wave, int initSample, int finalSample);                     // Crop a wave to defined samples range
        static float *loadWaveSamples(Wave wave);                                              // Load samples data from wave as a floats array
        static void unloadWaveSamples(float *samples);                                         // Unload samples data loaded with LoadWaveSamples()

    private:
    };
}
#endif //INDIESTUDIO_WAVEHELPER_HPP
