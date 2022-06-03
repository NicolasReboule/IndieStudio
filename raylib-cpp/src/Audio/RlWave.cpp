/*
** EPITECH PROJECT, 2022
** RlWave.cpp
** FileHelper description:
** RlWave.cpp
*/

#include "raylib/Audio/RlWave.hpp"

// Wave/RlSound loading/unloading functions

Wave raylib::RlWave::loadWave(const std::string &fileName)
{
    return LoadWave(fileName.c_str());
}

Wave raylib::RlWave::loadWaveFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize)
{
    return LoadWaveFromMemory(fileType.c_str(), fileData, dataSize);
}

void raylib::RlWave::unloadWave(Wave wave)
{
    UnloadWave(wave);
}

bool raylib::RlWave::exportWave(Wave wave, const std::string &fileName)
{
    return ExportWave(wave, fileName.c_str());
}

bool raylib::RlWave::exportWaveAsCode(Wave wave, const std::string &fileName)
{
    return ExportWaveAsCode(wave, fileName.c_str());
}
