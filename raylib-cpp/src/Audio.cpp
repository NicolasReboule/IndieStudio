/*
** EPITECH PROJECT, 2022
** Audio.cpp
** File description:
** Audio.cpp
*/

#include "raylib/Audio.hpp"

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

// Wave/Sound loading/unloading functions

Wave raylib::Audio::loadWave(const std::string &fileName)
{
    return LoadWave(fileName.c_str());
}

Wave raylib::Audio::loadWaveFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return LoadWaveFromMemory(fileType.c_str(), fileData, dataSize);
}

Sound raylib::Audio::loadSound(const std::string &fileName)
{
    return LoadSound(fileName.c_str());
}

Sound raylib::Audio::loadSoundFromWave(Wave wave)
{
    return LoadSoundFromWave(wave);
}

void raylib::Audio::updateSound(Sound sound, const void *data, int samplesCount)
{
    UpdateSound(sound, data, samplesCount);
}

void raylib::Audio::unloadWave(Wave wave)
{
    UnloadWave(wave);
}

void raylib::Audio::unloadSound(Sound sound)
{
    UnloadSound(sound);
}

bool raylib::Audio::exportWave(Wave wave, const std::string &fileName)
{
    return ExportWave(wave, fileName.c_str());
}

bool raylib::Audio::exportWaveAsCode(Wave wave, const std::string &fileName)
{
    return ExportWaveAsCode(wave, fileName.c_str());
}

// Wave/Sound management functions

void raylib::Audio::playSound(Sound sound)
{
    PlaySound(sound);
}

void raylib::Audio::stopSound(Sound sound)
{
    StopSound(sound);
}

void raylib::Audio::pauseSound(Sound sound)
{
    PauseSound(sound);
}

void raylib::Audio::resumeSound(Sound sound)
{
    ResumeSound(sound);
}

void raylib::Audio::playSoundMulti(Sound sound)
{
    PlaySoundMulti(sound);
}

void raylib::Audio::stopSoundMulti()
{
    StopSoundMulti();
}

int raylib::Audio::getSoundsPlaying()
{
    return GetSoundsPlaying();
}

bool raylib::Audio::isSoundPlaying(Sound sound)
{
    return IsSoundPlaying(sound);
}

void raylib::Audio::setSoundVolume(Sound sound, float volume)
{
    SetSoundVolume(sound, volume);
}

void raylib::Audio::setSoundPitch(Sound sound, float pitch)
{
    SetSoundPitch(sound, pitch);
}

void raylib::Audio::waveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
{
    WaveFormat(wave, sampleRate, sampleSize, channels);
}

Wave raylib::Audio::waveCopy(Wave wave)
{
    return WaveCopy(wave);
}

void raylib::Audio::waveCrop(Wave *wave, int initSample, int finalSample)
{
    WaveCrop(wave, initSample, finalSample);
}

float *raylib::Audio::loadWaveSamples(Wave wave)
{
    return LoadWaveSamples(wave);
}

void raylib::Audio::unloadWaveSamples(float *samples)
{
    UnloadWaveSamples(samples);
}

// Music management functions

Music raylib::Audio::loadMusicStream(const std::string &fileName)
{
    return LoadMusicStream(fileName.c_str());
}

Music raylib::Audio::loadMusicStreamFromMemory(const std::string &fileType, unsigned char *data, int dataSize)
{
    return LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

void raylib::Audio::unloadMusicStream(Music music)
{
    UnloadMusicStream(music);
}

void raylib::Audio::playMusicStream(Music music)
{
    PlayMusicStream(music);
}

bool raylib::Audio::isMusicStreamPlaying(Music music)
{
    return IsMusicStreamPlaying(music);
}

void raylib::Audio::updateMusicStream(Music music)
{
    UpdateMusicStream(music);
}

void raylib::Audio::stopMusicStream(Music music)
{
    StopMusicStream(music);
}

void raylib::Audio::pauseMusicStream(Music music)
{
    PauseMusicStream(music);
}

void raylib::Audio::resumeMusicStream(Music music)
{
    ResumeMusicStream(music);
}

void raylib::Audio::seekMusicStream(Music music, float position)
{
    SeekMusicStream(music, position);
}

void raylib::Audio::setMusicVolume(Music music, float volume)
{
    SetMusicVolume(music, volume);
}

void raylib::Audio::setMusicPitch(Music music, float pitch)
{
    SetMusicPitch(music, pitch);
}

float raylib::Audio::getMusicTimeLength(Music music)
{
    return GetMusicTimeLength(music);
}

float raylib::Audio::getMusicTimePlayed(Music music)
{
    return GetMusicTimePlayed(music);
}

AudioStream raylib::Audio::loadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    return LoadAudioStream(sampleRate, sampleSize, channels);
}

void raylib::Audio::updateAudioStream(AudioStream stream, const void *data, int samplesCount)
{
    UpdateAudioStream(stream, data, samplesCount);
}

void raylib::Audio::closeAudioStream(AudioStream stream)
{
//    CloseAudioStream(stream); ??? doesnt find function
}

bool raylib::Audio::isAudioStreamProcessed(AudioStream stream)
{
    return IsAudioStreamProcessed(stream);
}

void raylib::Audio::playAudioStream(AudioStream stream)
{
    PlayAudioStream(stream);
}

void raylib::Audio::pauseAudioStream(AudioStream stream)
{
    PauseAudioStream(stream);
}

void raylib::Audio::resumeAudioStream(AudioStream stream)
{
    ResumeAudioStream(stream);
}

bool raylib::Audio::isAudioStreamPlaying(AudioStream stream)
{
    return IsAudioStreamPlaying(stream);
}

void raylib::Audio::stopAudioStream(AudioStream stream)
{
    StopAudioStream(stream);
}

void raylib::Audio::setAudioStreamVolume(AudioStream stream, float volume)
{
    SetAudioStreamVolume(stream, volume);
}

void raylib::Audio::setAudioStreamPitch(AudioStream stream, float pitch)
{
    SetAudioStreamPitch(stream, pitch);
}

void raylib::Audio::setAudioStreamBufferSizeDefault(int size)
{
    SetAudioStreamBufferSizeDefault(size);
}
