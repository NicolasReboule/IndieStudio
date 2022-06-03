/*
** EPITECH PROJECT, 2022
** WaveHelper.cpp
** FileHelper description:
** WaveHelper.cpp
*/

#include "raylib/Audio/WaveHelper.hpp"

// Wave/RlSound management functions

void raylib::WaveHelper::waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
{
    WaveFormat(wave, sampleRate, sampleSize, channels);
}

Wave raylib::WaveHelper::waveCopy(Wave wave)
{
    return WaveCopy(wave);
}

void raylib::WaveHelper::waveCrop(Wave *wave, int initSample, int finalSample)
{
    WaveCrop(wave, initSample, finalSample);
}

float *raylib::WaveHelper::loadWaveSamples(Wave wave)
{
    return LoadWaveSamples(wave);
}

void raylib::WaveHelper::unloadWaveSamples(float *samples)
{
    UnloadWaveSamples(samples);
}