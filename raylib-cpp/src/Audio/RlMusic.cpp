/*
** EPITECH PROJECT, 2022
** RlMusic.cpp
** File description:
** RlMusic.cpp
*/

#include "raylib/Audio/RlMusic.hpp"

// Music management functions

Music raylib::RlMusic::loadMusicStream(const std::string &fileName)
{
    return LoadMusicStream(fileName.c_str());
}

Music raylib::RlMusic::loadMusicStreamFromMemory(const std::string &fileType, unsigned char *data, int dataSize)
{
    return LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

void raylib::RlMusic::unloadMusicStream(Music music)
{
    UnloadMusicStream(music);
}

void raylib::RlMusic::playMusicStream(Music music)
{
    PlayMusicStream(music);
}

bool raylib::RlMusic::isMusicStreamPlaying(Music music)
{
    return IsMusicStreamPlaying(music);
}

void raylib::RlMusic::updateMusicStream(Music music)
{
    UpdateMusicStream(music);
}

void raylib::RlMusic::stopMusicStream(Music music)
{
    StopMusicStream(music);
}

void raylib::RlMusic::pauseMusicStream(Music music)
{
    PauseMusicStream(music);
}

void raylib::RlMusic::resumeMusicStream(Music music)
{
    ResumeMusicStream(music);
}

void raylib::RlMusic::seekMusicStream(Music music, float position)
{
    SeekMusicStream(music, position);
}

void raylib::RlMusic::setMusicVolume(Music music, float volume)
{
    SetMusicVolume(music, volume);
}

void raylib::RlMusic::setMusicPitch(Music music, float pitch)
{
    SetMusicPitch(music, pitch);
}

float raylib::RlMusic::getMusicTimeLength(Music music)
{
    return GetMusicTimeLength(music);
}

float raylib::RlMusic::getMusicTimePlayed(Music music)
{
    return GetMusicTimePlayed(music);
}