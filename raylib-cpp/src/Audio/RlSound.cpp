/*
** EPITECH PROJECT, 2022
** RlSound.cpp
** File description:
** RlSound.cpp
*/

#include "raylib/Audio/RlSound.hpp"

Sound raylib::RlSound::loadSound(const std::string &fileName)
{
    return LoadSound(fileName.c_str());
}

Sound raylib::RlSound::loadSoundFromWave(Wave wave)
{
    return LoadSoundFromWave(wave);
}

void raylib::RlSound::updateSound(Sound sound, const void *data, int samplesCount)
{
    UpdateSound(sound, data, samplesCount);
}

void raylib::RlSound::unloadSound(Sound sound)
{
    UnloadSound(sound);
}

void raylib::RlSound::playSound(Sound sound)
{
    PlaySound(sound);
}

void raylib::RlSound::stopSound(Sound sound)
{
    StopSound(sound);
}

void raylib::RlSound::pauseSound(Sound sound)
{
    PauseSound(sound);
}

void raylib::RlSound::resumeSound(Sound sound)
{
    ResumeSound(sound);
}

void raylib::RlSound::playSoundMulti(Sound sound)
{
    PlaySoundMulti(sound);
}

void raylib::RlSound::stopSoundMulti()
{
    StopSoundMulti();
}

int raylib::RlSound::getSoundsPlaying()
{
    return GetSoundsPlaying();
}

bool raylib::RlSound::isSoundPlaying(Sound sound)
{
    return IsSoundPlaying(sound);
}

void raylib::RlSound::setSoundVolume(Sound sound, float volume)
{
    SetSoundVolume(sound, volume);
}

void raylib::RlSound::setSoundPitch(Sound sound, float pitch)
{
    SetSoundPitch(sound, pitch);
}