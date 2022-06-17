/*
** EPITECH PROJECT, 2022
** AudioHelper.cpp
** FileHelper description:
** AudioHelper.cpp
*/

#include "raylib/Audio/AudioHelper.hpp"

void raylib::helper::AudioHelper::initAudioDevice()
{
    InitAudioDevice();
}

void raylib::helper::AudioHelper::closeAudioDevice()
{
    CloseAudioDevice();
}

bool raylib::helper::AudioHelper::isAudioDeviceReady()
{
    return IsAudioDeviceReady();
}

void raylib::helper::AudioHelper::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}

void raylib::helper::AudioHelper::stopMultiSound()
{
    StopSoundMulti();
}

int raylib::helper::AudioHelper::getNumberOfSoundsPlaying()
{
    return GetSoundsPlaying();
}
