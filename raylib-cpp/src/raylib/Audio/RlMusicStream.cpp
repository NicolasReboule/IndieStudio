/*
** EPITECH PROJECT, 2022
** RlMusic.cpp
** FileHelper description:
** RlMusic.cpp
*/

#include "raylib/Audio/RlMusic.hpp"

raylib::audio::RlMusic::RlMusic(const std::string &fileName) : _music(LoadMusicStream(fileName.c_str())), _volume(100)
{
}

raylib::audio::RlMusic::RlMusic(const std::string &fileType, unsigned char *data, const int &dataSize)
    : _music(LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize)), _volume(100)
{
}

raylib::audio::RlMusic::~RlMusic()
{
    UnloadMusicStream(this->_music);
}

void raylib::audio::RlMusic::play()
{
    PlayMusicStream(this->_music);
}

bool raylib::audio::RlMusic::isPlaying()
{
    return IsMusicStreamPlaying(this->_music);
}

void raylib::audio::RlMusic::update()
{
    UpdateMusicStream(this->_music);
}

void raylib::audio::RlMusic::stop()
{
    StopMusicStream(this->_music);
}

void raylib::audio::RlMusic::pause()
{
    PauseMusicStream(this->_music);
}

void raylib::audio::RlMusic::resume()
{
    ResumeMusicStream(this->_music);
}

void raylib::audio::RlMusic::seek(const float &position)
{
    SeekMusicStream(this->_music, position);
}

void raylib::audio::RlMusic::setVolume(const float &volumeSound)
{
    this->_volume = volumeSound;
    SetMusicVolume(this->_music, _volume);
}

const float &raylib::audio::RlMusic::getVolume() const
{
    return this->_volume;
}

void raylib::audio::RlMusic::setPitch(const float &pitch)
{
    SetMusicPitch(this->_music, pitch);
}

float raylib::audio::RlMusic::getTimeLength()
{
    return GetMusicTimeLength(this->_music);
}

float raylib::audio::RlMusic::getTimePlayed()
{
    return GetMusicTimePlayed(this->_music);
}

const bool &raylib::audio::RlMusic::isLooping() const
{
    return this->_music.looping;
}

void raylib::audio::RlMusic::setLooping(const bool &loop)
{
    this->_music.looping = loop;
}
