/*
** EPITECH PROJECT, 2022
** Audio.cpp
** File description:
** Audio.cpp
*/

#include "raylib/Audio/Audio.hpp"

// Audio device management functions

void raylib::Audio::initAudioDevice()
{
    InitAudioDevice();
}

void raylib::Audio::closeAudioDevice()
{
    CloseAudioDevice();
}

bool raylib::Audio::isAudioDeviceReady()
{
    return IsAudioDeviceReady();
}

void raylib::Audio::setMasterVolume(float volume)
{
    SetMasterVolume(volume);
}
