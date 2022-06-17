/*
** EPITECH PROJECT, 2022
** RlAudioStream.cpp
** FileHelper description:
** RlAudioStream.cpp
*/

#include "raylib/Audio/RlAudioStream.hpp"

raylib::RlAudioStream::RlAudioStream(const unsigned int &sampleRate, const unsigned int &sampleSize, const unsigned int &channels)
    : _stream(LoadAudioStream(sampleRate, sampleSize, channels)), _volume(100)
{
    this->setVolume(this->_volume);
}

raylib::RlAudioStream::~RlAudioStream()
{
    UnloadAudioStream(this->_stream);
}

void raylib::RlAudioStream::update(const void *data, const int &samplesCount)
{
    UpdateAudioStream(this->_stream, data, samplesCount);
}

bool raylib::RlAudioStream::isProcessed()
{
    return IsAudioStreamProcessed(this->_stream);
}

void raylib::RlAudioStream::play()
{
    PlayAudioStream(this->_stream);
}

void raylib::RlAudioStream::pause()
{
    PauseAudioStream(this->_stream);
}

void raylib::RlAudioStream::resume()
{
    ResumeAudioStream(this->_stream);
}

bool raylib::RlAudioStream::isPlaying()
{
    return IsAudioStreamPlaying(this->_stream);
}

void raylib::RlAudioStream::stop()
{
    StopAudioStream(_stream);
}

void raylib::RlAudioStream::setVolume(float volumeSound)
{
    this->_volume = volumeSound;
    SetAudioStreamVolume(this->_stream, this->_volume);
}

const float &raylib::RlAudioStream::getVolume() const
{
    return this->_volume;
}

void raylib::RlAudioStream::setPitch(const float &pitch)
{
    SetAudioStreamPitch(this->_stream, pitch);
}
