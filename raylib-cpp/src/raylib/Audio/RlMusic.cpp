/*
** EPITECH PROJECT, 2022
** RlMusic.cpp
** FileHelper description:
** RlMusic.cpp
*/

#include "raylib/Audio/RlMusic.hpp"

// Music management functions

raylib::RlMusic::RlMusic(const std::string &fileName)
{
    this->music = LoadMusicStream(fileName.c_str());
    this->volume = 100;
}

raylib::RlMusic::RlMusic(const std::string &fileType, unsigned char *data, int dataSize)
{
    LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
    this->volume = 100;
}

raylib::RlMusic::~RlMusic()
{
    UnloadMusicStream(this->music);
}

void raylib::RlMusic::play()
{
    PlayMusicStream(this->music);
}

bool raylib::RlMusic::isPlaying()
{
    return IsMusicStreamPlaying(this->music);
}

void raylib::RlMusic::update()
{
    UpdateMusicStream(this->music);
}

void raylib::RlMusic::stop()
{
    StopMusicStream(this->music);
}

void raylib::RlMusic::pause()
{
    PauseMusicStream(this->music);
}

void raylib::RlMusic::resume()
{
    ResumeMusicStream(this->music);
}

void raylib::RlMusic::seek(float position)
{
    SeekMusicStream(this->music, position);
}

void raylib::RlMusic::setVolume(float volumeSound)
{
    this->volume = volumeSound;
    SetMusicVolume(this->music, volume);
}

float raylib::RlMusic::getVolume() const
{
    return this->volume;
}

void raylib::RlMusic::setPitch( float pitch)
{
    SetMusicPitch(this->music, pitch);
}

float raylib::RlMusic::getTimeLength()
{
    return GetMusicTimeLength(this->music);
}

float raylib::RlMusic::getTimePlayed()
{
    return GetMusicTimePlayed(this->music);
}