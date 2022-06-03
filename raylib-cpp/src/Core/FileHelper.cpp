/*
** EPITECH PROJECT, 2022
** FileHelper.cpp
** FileHelper description:
** FileHelper.cpp
*/

#include "raylib/Core/FileHelper.hpp"

// Files management functions

unsigned char *raylib::FileHelper::loadFileData(const std::string &fileName, unsigned int *bytesRead)
{
    return LoadFileData(fileName.c_str(), bytesRead);
}

void raylib::FileHelper::unloadFileData(unsigned char *data)
{
    UnloadFileData(data);
}

bool raylib::FileHelper::saveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite)
{
    return SaveFileData(fileName.c_str(), data, bytesToWrite);
}

std::string raylib::FileHelper::loadFileText(const std::string &fileName)
{
    return std::string(LoadFileText(fileName.c_str()));
}

void raylib::FileHelper::unloadFileText(char *text)
{
    UnloadFileText(text);
}

bool raylib::FileHelper::saveFileText(const std::string &fileName, char *text)
{
    return SaveFileText(fileName.c_str(), text);
}

bool raylib::FileHelper::fileExists(const std::string &fileName)
{
    return FileExists(fileName.c_str());
}

bool raylib::FileHelper::directoryExists(const std::string &dirPath)
{
    return DirectoryExists(dirPath.c_str());
}

bool raylib::FileHelper::isFileExtension(const std::string &fileName, const std::string &ext)
{
    return IsFileExtension(fileName.c_str(), ext.c_str());
}

std::string raylib::FileHelper::getFileExtension(const std::string &fileName)
{
    return std::string(GetFileExtension(fileName.c_str()));
}

std::string raylib::FileHelper::getFileName(const std::string &filePath)
{
    return std::string(GetFileName(filePath.c_str()));
}

std::string raylib::FileHelper::getFileNameWithoutExt(const std::string &filePath)
{
    return std::string(GetFileNameWithoutExt(filePath.c_str()));
}

std::string raylib::FileHelper::getDirectoryPath(const std::string &filePath)
{
    return std::string(GetDirectoryPath(filePath.c_str()));
}

std::string raylib::FileHelper::getPrevDirectoryPath(const std::string &dirPath)
{
    return std::string(GetPrevDirectoryPath(dirPath.c_str()));
}

std::string raylib::FileHelper::getWorkingDirectory()
{
    return std::string(GetWorkingDirectory());
}

char **raylib::FileHelper::getDirectoryFiles(const std::string &dirPath, int *count)
{
    return GetDirectoryFiles(dirPath.c_str(), count);
}

void raylib::FileHelper::clearDirectoryFiles()
{
    ClearDirectoryFiles();
}

bool raylib::FileHelper::changeDirectory(const std::string &dir)
{
    return ChangeDirectory(dir.c_str());
}

bool raylib::FileHelper::isFileDropped()
{
    return IsFileDropped();
}

char **raylib::FileHelper::getDroppedFiles(int *count)
{
    return GetDroppedFiles(count);
}

void raylib::FileHelper::clearDroppedFiles()
{
    ClearDroppedFiles();
}

long raylib::FileHelper::getFileModTime(const std::string &fileName)
{
    return GetFileModTime(fileName.c_str());
}
