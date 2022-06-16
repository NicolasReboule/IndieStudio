/*
** EPITECH PROJECT, 2022
** AudioDeviceHelper.cpp
** FileHelper description:
** AudioDeviceHelper.cpp
*/

#include "raylib/Audio/AudioDeviceHelper.hpp"

void raylib::AudioDeviceHelper::initAudioDevice()
{
    InitAudioDevice();
}

void raylib::AudioDeviceHelper::closeAudioDevice()
{
    CloseAudioDevice();
}

bool raylib::AudioDeviceHelper::isAudioDeviceReady()
{
    return IsAudioDeviceReady();
}

void raylib::AudioDeviceHelper::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}
