/*
** EPITECH PROJECT, 2022
** RlAudioStream.cpp
** FileHelper description:
** RlAudioStream.cpp
*/

#include "raylib/Audio/RlAudioStream.hpp"

raylib::RlAudioStream::RlAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    this->stream = LoadAudioStream(sampleRate, sampleSize, channels);
}

raylib::RlAudioStream::~RlAudioStream()
{
    UnloadAudioStream(this->stream);
}

void raylib::RlAudioStream::update(const void *data, int samplesCount)
{
    UpdateAudioStream(this->stream, data, samplesCount);
}

bool raylib::RlAudioStream::isProcessed()
{
    return IsAudioStreamProcessed(this->stream);
}

void raylib::RlAudioStream::play()
{
    PlayAudioStream(this->stream);
}

void raylib::RlAudioStream::pause()
{
    PauseAudioStream(this->stream);
}

void raylib::RlAudioStream::resume()
{
    ResumeAudioStream(this->stream);
}

bool raylib::RlAudioStream::isPlaying()
{
    return IsAudioStreamPlaying(this->stream);
}

void raylib::RlAudioStream::stop()
{
    StopAudioStream(stream);
}

void raylib::RlAudioStream::setVolume(float volume)
{
    SetAudioStreamVolume(this->stream, volume);
}

void raylib::RlAudioStream::setPitch(float pitch)
{
    SetAudioStreamPitch(this->stream, pitch);
}

/*
void raylib::RlAudioStream::setAudioStreamBufferSizeDefault(int size)
{
    SetAudioStreamBufferSizeDefault(size);
}
*/
