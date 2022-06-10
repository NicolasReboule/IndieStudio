/*
** EPITECH PROJECT, 2022
** AudioHelper.cpp
** FileHelper description:
** AudioHelper.cpp
*/

#include "raylib/Audio/AudioHelper.hpp"

// AudioHelper device management functions

raylib::AudioHelper::AudioHelper()
{
    InitAudioDevice();
}

raylib::AudioHelper::~AudioHelper()
{
    CloseAudioDevice();
}

bool raylib::AudioHelper::isAudioDeviceReady()
{
    return IsAudioDeviceReady();
}

void raylib::AudioHelper::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}

