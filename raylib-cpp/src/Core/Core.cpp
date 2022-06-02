/*
** EPITECH PROJECT, 2022
** Window.cpp
** File description:
** Window.cpp
*/

#include "raylib/Core/Core.hpp"

// VR stereo config functions for VR simulator

VrStereoConfig raylib::Core::loadVrStereoConfig(VrDeviceInfo device)
{
    return LoadVrStereoConfig(device);
}

void raylib::Core::unloadVrStereoConfig(VrStereoConfig config)
{
    UnloadVrStereoConfig(config);
}


// Screen-space-related functions

Vector2 raylib::Core::getWorldToScreen(Vector3 position, Camera camera)
{
    return GetWorldToScreen(position, camera);
}

Vector2 raylib::Core::getWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
{
    return GetWorldToScreenEx(position, camera, width, height);
}

Vector2 raylib::Core::getWorldToScreen2D(Vector2 position, Camera2D camera)
{
    return GetWorldToScreen2D(position, camera);
}

Vector2 raylib::Core::getScreenToWorld2D(Vector2 position, Camera2D camera)
{
    return GetScreenToWorld2D(position, camera);
}

// Timing-related functions

void raylib::Core::setTargetFPS(int fps)
{
    SetTargetFPS(fps);
}

int raylib::Core::getFPS()
{
    return GetFPS();
}

float raylib::Core::getFrameTime()
{
    return GetFrameTime();
}

double raylib::Core::getTime()
{
    return GetTime();
}

// Misc. functions

int raylib::Core::getRandomValue(int min, int max)
{
    return GetRandomValue(min, max);
}

void raylib::Core::setRandomSeed(unsigned int seed)
{
    SetRandomSeed(seed);
}

void raylib::Core::takeScreenshot(const std::string &fileName)
{
    TakeScreenshot(fileName.c_str());
}

void raylib::Core::setConfigFlags(unsigned int flags)
{
    SetConfigFlags(flags);
}

//void raylib::Core::traceLog(int logLevel, const std::string &text, ...)
//{
//    TraceLog(logLevel, text, );
//}

void raylib::Core::setTraceLogLevel(int logLevel)
{
    SetTraceLogLevel(logLevel);
}

void *raylib::Core::memAlloc(int size)
{
    return MemAlloc(size);
}

void *raylib::Core::memRealloc(void *ptr, int size)
{
    return MemRealloc(ptr, size);
}

void raylib::Core::memFree(void *ptr)
{
    MemFree(ptr);
}

// Set custom callbacks

void raylib::Core::setTraceLogCallback(TraceLogCallback callback)
{
    SetTraceLogCallback(callback);
}

void raylib::Core::setLoadFileDataCallback(LoadFileDataCallback callback)
{
    SetLoadFileDataCallback(callback);
}

void raylib::Core::setSaveFileDataCallback(SaveFileDataCallback callback)
{
    SetSaveFileDataCallback(callback);
}

void raylib::Core::setLoadFileTextCallback(LoadFileTextCallback callback)
{
    SetLoadFileTextCallback(callback);
}

void raylib::Core::setSaveFileTextCallback(SaveFileTextCallback callback)
{
    SetSaveFileTextCallback(callback);
}

// Files management functions

unsigned char *raylib::Core::loadFileData(const std::string &fileName, unsigned int *bytesRead)
{
    return LoadFileData(fileName.c_str(), bytesRead);
}

void raylib::Core::unloadFileData(unsigned char *data)
{
    UnloadFileData(data);
}

bool raylib::Core::saveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite)
{
    return SaveFileData(fileName.c_str(), data, bytesToWrite);
}

std::string raylib::Core::loadFileText(const std::string &fileName)
{
    return std::string(LoadFileText(fileName.c_str()));
}

void raylib::Core::unloadFileText(char *text)
{
    UnloadFileText(text);
}

bool raylib::Core::saveFileText(const std::string &fileName, char *text)
{
    return SaveFileText(fileName.c_str(), text);
}

bool raylib::Core::fileExists(const std::string &fileName)
{
    return FileExists(fileName.c_str());
}

bool raylib::Core::directoryExists(const std::string &dirPath)
{
    return DirectoryExists(dirPath.c_str());
}

bool raylib::Core::isFileExtension(const std::string &fileName, const std::string &ext)
{
    return IsFileExtension(fileName.c_str(), ext.c_str());
}

std::string raylib::Core::getFileExtension(const std::string &fileName)
{
    return std::string(GetFileExtension(fileName.c_str()));
}

std::string raylib::Core::getFileName(const std::string &filePath)
{
    return std::string(GetFileName(filePath.c_str()));
}

std::string raylib::Core::getFileNameWithoutExt(const std::string &filePath)
{
    return std::string(GetFileNameWithoutExt(filePath.c_str()));
}

std::string raylib::Core::getDirectoryPath(const std::string &filePath)
{
    return std::string(GetDirectoryPath(filePath.c_str()));
}

std::string raylib::Core::getPrevDirectoryPath(const std::string &dirPath)
{
    return std::string(GetPrevDirectoryPath(dirPath.c_str()));
}

std::string raylib::Core::getWorkingDirectory()
{
    return std::string(GetWorkingDirectory());
}

char **raylib::Core::getDirectoryFiles(const std::string &dirPath, int *count)
{
    return GetDirectoryFiles(dirPath.c_str(), count);
}

void raylib::Core::clearDirectoryFiles()
{
    ClearDirectoryFiles();
}

bool raylib::Core::changeDirectory(const std::string &dir)
{
    return ChangeDirectory(dir.c_str());
}

bool raylib::Core::isFileDropped()
{
    return IsFileDropped();
}

char **raylib::Core::getDroppedFiles(int *count)
{
    return GetDroppedFiles(count);
}

void raylib::Core::clearDroppedFiles()
{
    ClearDroppedFiles();
}

long raylib::Core::getFileModTime(const std::string &fileName)
{
    return GetFileModTime(fileName.c_str());
}

// Compression/Encoding functionality

unsigned char *raylib::Core::compressData(unsigned char *data, int dataLength, int *compDataLength)
{
    return CompressData(data, dataLength, compDataLength);
}

unsigned char *raylib::Core::decompressData(unsigned char *compData, int compDataLength, int *dataLength)
{
    return DecompressData(compData, compDataLength, dataLength);
}

std::string raylib::Core::encodeDataBase64(unsigned char *data, int dataLength, int *outputLength)
{
    return std::string(EncodeDataBase64(data, dataLength, outputLength));
}

unsigned char *raylib::Core::decodeDataBase64(unsigned char *data, int *outputLength)
{
    return DecodeDataBase64(data, outputLength);
}

// Persistent storage management

bool raylib::Core::saveStorageValue(unsigned int position, int value)
{
    return SaveStorageValue(position, value);
}

int raylib::Core::loadStorageValue(unsigned int position)
{
    return LoadStorageValue(position);
}

// Misc.

void raylib::Core::openURL(const std::string &url)
{
    OpenURL(url.c_str());
}
