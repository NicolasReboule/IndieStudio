/*
** EPITECH PROJECT, 2022
** RlSound.cpp
** FileHelper description:
** RlSound.cpp
*/

#include "raylib/Audio/RlSound.hpp"

raylib::audio::RlSound::RlSound(const Sound &sound) : _sound(sound)
{
}

raylib::audio::RlSound::RlSound(Wave wave)
{
    this->_sound = LoadSoundFromWave(wave);
    this->_volume = 100;
}

raylib::audio::RlSound::RlSound(const std::string &fileName)
{
    this->_sound = LoadSound(fileName.c_str());
    this->_volume = 100;
}

raylib::audio::RlSound::~RlSound()
{
    UnloadSound(this->_sound);
}

void raylib::audio::RlSound::update(const void *data, int samplesCount)
{
    UpdateSound(this->_sound, data, samplesCount);
}

void raylib::audio::RlSound::play()
{
    PlaySound(this->_sound);
}

void raylib::audio::RlSound::stop()
{
    StopSound(this->_sound);
}

void raylib::audio::RlSound::pause()
{
    PauseSound(this->_sound);
}

void raylib::audio::RlSound::resume()
{
    ResumeSound(this->_sound);
}

void raylib::audio::RlSound::playMulti()
{
    PlaySoundMulti(this->_sound);
}

void raylib::audio::RlSound::stopMulti()
{
    StopSoundMulti();
}

int raylib::audio::RlSound::getPlayings()
{
    return GetSoundsPlaying();
}

bool raylib::audio::RlSound::isPlaying()
{
    return IsSoundPlaying(this->_sound);
}

void raylib::audio::RlSound::setVolume(float volumeSound)
{
    this->_volume = volumeSound;
    SetSoundVolume(this->_sound, this->_volume);
}

float raylib::audio::RlSound::getVolume() const
{
    return this->_volume;
}

void raylib::audio::RlSound::setPitch(float pitch)
{
    SetSoundPitch(this->_sound, pitch);
}
