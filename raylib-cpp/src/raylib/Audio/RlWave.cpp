/*
** EPITECH PROJECT, 2022
** RlWave.cpp
** FileHelper description:
** RlWave.cpp
*/

#include "raylib/Audio/RlWave.hpp"

raylib::audio::RlWave::RlWave(const Wave &wave) : _wave(wave), _samplesPtr(nullptr)
{
}

raylib::audio::RlWave::RlWave(const std::string &path) : _wave(LoadWave(path.c_str())), _samplesPtr(nullptr)
{
}

raylib::audio::RlWave::RlWave(const std::string &fileType, const unsigned char *fileData, int dataSize) : _wave(LoadWaveFromMemory(fileType.c_str(), fileData, dataSize)), _samplesPtr(nullptr)
{
}

raylib::audio::RlWave::~RlWave()
{
    UnloadWave(this->_wave);
    if (!this->_samplesPtr) {
        UnloadWaveSamples(this->_samplesPtr);
        this->_samplesPtr = nullptr;
    }
}

Wave &raylib::audio::RlWave::getWave()
{
    return this->_wave;
}

const Wave &raylib::audio::RlWave::getWave() const
{
    return this->_wave;
}

bool raylib::audio::RlWave::exportWave(const std::string &fileName)
{
    return ExportWave(this->_wave, fileName.c_str());
}

bool raylib::audio::RlWave::exportWaveAsCode(const std::string &fileName)
{
    return ExportWaveAsCode(this->_wave, fileName.c_str());
}

raylib::audio::RlSound raylib::audio::RlWave::toSound() const
{
    return raylib::audio::RlSound(LoadSoundFromWave(this->_wave));
}

void raylib::audio::RlWave::format(const int &sampleRate, const int &sampleSize, const int &channels)
{
    WaveFormat(&this->_wave, sampleRate, sampleSize, channels);
}

raylib::audio::RlWave raylib::audio::RlWave::copy()
{
    return RlWave(WaveCopy(this->_wave));
}

void raylib::audio::RlWave::crop(const int &initSample, const int &finalSample)
{
    WaveCrop(&this->_wave, initSample, finalSample);
}

std::vector<float> raylib::audio::RlWave::getSamples()
{
    if (!this->_samples.empty() || this->_samplesPtr)
        return this->_samples;
    this->_samplesPtr = LoadWaveSamples(this->_wave);
    long size = this->_wave.frameCount * this->_wave.channels;
    for (long i = 0; i < size; i++)
        this->_samples.emplace_back(this->_samplesPtr[i]);
    UnloadWaveSamples(this->_samplesPtr);
    this->_samplesPtr = nullptr;
    return this->_samples;
}
