/*
** EPITECH PROJECT, 2022
** RlMusicStream.cpp
** FileHelper description:
** RlMusicStream.cpp
*/

#include "raylib/Audio/RlMusicStream.hpp"

raylib::audio::RlMusicStream::RlMusicStream(const std::string &fileName) : _music(LoadMusicStream(fileName.c_str())), _volume(100)
{
}

raylib::audio::RlMusicStream::RlMusicStream(const std::string &fileType, unsigned char *data, const int &dataSize)
    : _music(LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize)), _volume(100)
{
}

raylib::audio::RlMusicStream::~RlMusicStream()
{
    UnloadMusicStream(this->_music);
}

void raylib::audio::RlMusicStream::play()
{
    PlayMusicStream(this->_music);
}

bool raylib::audio::RlMusicStream::isPlaying()
{
    return IsMusicStreamPlaying(this->_music);
}

void raylib::audio::RlMusicStream::update()
{
    UpdateMusicStream(this->_music);
}

void raylib::audio::RlMusicStream::stop()
{
    StopMusicStream(this->_music);
}

void raylib::audio::RlMusicStream::pause()
{
    PauseMusicStream(this->_music);
}

void raylib::audio::RlMusicStream::resume()
{
    ResumeMusicStream(this->_music);
}

void raylib::audio::RlMusicStream::seek(const float &position)
{
    SeekMusicStream(this->_music, position);
}

void raylib::audio::RlMusicStream::setVolume(const float &volumeSound)
{
    this->_volume = volumeSound;
    SetMusicVolume(this->_music, _volume);
}

const float &raylib::audio::RlMusicStream::getVolume() const
{
    return this->_volume;
}

void raylib::audio::RlMusicStream::setPitch(const float &pitch)
{
    SetMusicPitch(this->_music, pitch);
}

float raylib::audio::RlMusicStream::getTimeLength()
{
    return GetMusicTimeLength(this->_music);
}

float raylib::audio::RlMusicStream::getTimePlayed()
{
    return GetMusicTimePlayed(this->_music);
}