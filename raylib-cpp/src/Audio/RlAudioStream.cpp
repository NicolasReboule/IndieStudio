/*
** EPITECH PROJECT, 2022
** RlAudioStream.cpp
** FileHelper description:
** RlAudioStream.cpp
*/

#include "raylib/Audio/RlAudioStream.hpp"

AudioStream raylib::RlAudioStream::loadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    return LoadAudioStream(sampleRate, sampleSize, channels);
}

void raylib::RlAudioStream::updateAudioStream(AudioStream stream, const void *data, int samplesCount)
{
    UpdateAudioStream(stream, data, samplesCount);
}

void raylib::RlAudioStream::closeAudioStream(AudioStream stream)
{
    //    CloseAudioStream(stream); ??? doesnt find function
}

bool raylib::RlAudioStream::isAudioStreamProcessed(AudioStream stream)
{
    return IsAudioStreamProcessed(stream);
}

void raylib::RlAudioStream::playAudioStream(AudioStream stream)
{
    PlayAudioStream(stream);
}

void raylib::RlAudioStream::pauseAudioStream(AudioStream stream)
{
    PauseAudioStream(stream);
}

void raylib::RlAudioStream::resumeAudioStream(AudioStream stream)
{
    ResumeAudioStream(stream);
}

bool raylib::RlAudioStream::isAudioStreamPlaying(AudioStream stream)
{
    return IsAudioStreamPlaying(stream);
}

void raylib::RlAudioStream::stopAudioStream(AudioStream stream)
{
    StopAudioStream(stream);
}

void raylib::RlAudioStream::setAudioStreamVolume(AudioStream stream, float volume)
{
    SetAudioStreamVolume(stream, volume);
}

void raylib::RlAudioStream::setAudioStreamPitch(AudioStream stream, float pitch)
{
    SetAudioStreamPitch(stream, pitch);
}

void raylib::RlAudioStream::setAudioStreamBufferSizeDefault(int size)
{
    SetAudioStreamBufferSizeDefault(size);
}
