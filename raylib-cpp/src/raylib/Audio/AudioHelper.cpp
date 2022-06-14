/*
** EPITECH PROJECT, 2022
** AudioHelper.cpp
** FileHelper description:
** AudioHelper.cpp
*/

#include "raylib/Audio/AudioHelper.hpp"

void raylib::AudioHelper::initAudioDevice()
{
    InitAudioDevice();
}

void raylib::AudioHelper::closeAudioDevice()
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
