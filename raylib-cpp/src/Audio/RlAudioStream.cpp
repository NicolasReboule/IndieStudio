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
    this->volume = 100;
    this->setVolume(this->volume);
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

void raylib::RlAudioStream::setVolume(float volumeSound)
{
    this->volume = volumeSound;
    SetAudioStreamVolume(this->stream, this->volume);
}

float raylib::RlAudioStream::getVolume() const
{
    return this->volume;
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
