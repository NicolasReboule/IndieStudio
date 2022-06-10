/*
** EPITECH PROJECT, 2022
** RlSound.cpp
** FileHelper description:
** RlSound.cpp
*/

#include "raylib/Audio/RlSound.hpp"

raylib::RlSound::RlSound(Wave wave)
{
    this->sound = LoadSoundFromWave(wave);
    this->volume = 100;
}

raylib::RlSound::RlSound(const std::string &fileName)
{
    this->sound = LoadSound(fileName.c_str());
    this->volume = 100;
}

raylib::RlSound::~RlSound()
{
    UnloadSound(this->sound);
}

void raylib::RlSound::update(const void *data, int samplesCount)
{
    UpdateSound(this->sound, data, samplesCount);
}

void raylib::RlSound::play()
{
    PlaySound(this->sound);
}

void raylib::RlSound::stop()
{
    StopSound(this->sound);
}

void raylib::RlSound::pause()
{
    PauseSound(this->sound);
}

void raylib::RlSound::resume()
{
    ResumeSound(this->sound);
}

void raylib::RlSound::playMulti()
{
    PlaySoundMulti(this->sound);
}

void raylib::RlSound::stopMulti()
{
    StopSoundMulti();
}

int raylib::RlSound::getPlayings()
{
    return GetSoundsPlaying();
}

bool raylib::RlSound::isPlaying()
{
    return IsSoundPlaying(this->sound);
}

void raylib::RlSound::setVolume(float volumeSound)
{
    this->volume = volumeSound;
    SetSoundVolume(this->sound, this->volume);
}

float raylib::RlSound::getVolume() const
{
    return this->volume;
}

void raylib::RlSound::setPitch(float pitch)
{
    SetSoundPitch(this->sound, pitch);
}