/*
** EPITECH PROJECT, 2022
** RlAudioStream.cpp
** FileHelper description:
** RlAudioStream.cpp
*/

#include "raylib/Audio/RlAudioStream.hpp"

raylib::audio::RlAudioStream::RlAudioStream(const unsigned int &sampleRate, const unsigned int &sampleSize, const unsigned int &channels)
    : _stream(LoadAudioStream(sampleRate, sampleSize, channels)), _volume(100)
{
    this->setVolume(this->_volume);
}

raylib::audio::RlAudioStream::~RlAudioStream()
{
    UnloadAudioStream(this->_stream);
}

void raylib::audio::RlAudioStream::update(const void *data, const int &samplesCount)
{
    UpdateAudioStream(this->_stream, data, samplesCount);
}

bool raylib::audio::RlAudioStream::isProcessed()
{
    return IsAudioStreamProcessed(this->_stream);
}

void raylib::audio::RlAudioStream::play()
{
    PlayAudioStream(this->_stream);
}

void raylib::audio::RlAudioStream::pause()
{
    PauseAudioStream(this->_stream);
}

void raylib::audio::RlAudioStream::resume()
{
    ResumeAudioStream(this->_stream);
}

bool raylib::audio::RlAudioStream::isPlaying()
{
    return IsAudioStreamPlaying(this->_stream);
}

void raylib::audio::RlAudioStream::stop()
{
    StopAudioStream(_stream);
}

void raylib::audio::RlAudioStream::setVolume(float volumeSound)
{
    this->_volume = volumeSound;
    SetAudioStreamVolume(this->_stream, this->_volume);
}

const float &raylib::audio::RlAudioStream::getVolume() const
{
    return this->_volume;
}

void raylib::audio::RlAudioStream::setPitch(const float &pitch)
{
    SetAudioStreamPitch(this->_stream, pitch);
}
