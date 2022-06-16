/*
** EPITECH PROJECT, 2022
** AudioDeviceHelper.cpp
** FileHelper description:
** AudioDeviceHelper.cpp
*/

#include "raylib/Audio/AudioDeviceHelper.hpp"

void raylib::helper::AudioDeviceHelper::initAudioDevice()
{
    InitAudioDevice();
}

void raylib::helper::AudioDeviceHelper::closeAudioDevice()
{
    CloseAudioDevice();
}

bool raylib::helper::AudioDeviceHelper::isAudioDeviceReady()
{
    return IsAudioDeviceReady();
}

void raylib::helper::AudioDeviceHelper::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}
