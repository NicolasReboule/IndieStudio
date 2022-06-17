/*
** EPITECH PROJECT, 2022
** RlSound.cpp
** FileHelper description:
** RlSound.cpp
*/

#include "raylib/Audio/RlSound.hpp"
#include "raylib/Audio/RlWave.hpp"

raylib::audio::RlSound::RlSound(const Sound &sound) : _sound(sound), _volume(100)
{
}

raylib::audio::RlSound::RlSound(const std::string &fileName) : _sound(LoadSound(fileName.c_str())), _volume(100)
{
}

raylib::audio::RlSound::RlSound(const raylib::audio::RlWave &wave) : _sound(LoadSoundFromWave(wave.getWave())), _volume(100)
{
}

raylib::audio::RlSound::~RlSound()
{
    UnloadSound(this->_sound);
}

void raylib::audio::RlSound::update(const void *data, const int &samplesCount)
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

bool raylib::audio::RlSound::isPlaying()
{
    return IsSoundPlaying(this->_sound);
}

void raylib::audio::RlSound::setVolume(const float &volumeSound)
{
    this->_volume = volumeSound;
    SetSoundVolume(this->_sound, this->_volume);
}

const float &raylib::audio::RlSound::getVolume() const
{
    return this->_volume;
}

void raylib::audio::RlSound::setPitch(const float &pitch)
{
    SetSoundPitch(this->_sound, pitch);
}
