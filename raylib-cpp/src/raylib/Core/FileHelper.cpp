/*
** EPITECH PROJECT, 2022
** FileHelper.cpp
** FileHelper description:
** FileHelper.cpp
*/

#include "raylib/Core/FileHelper.hpp"

std::vector<unsigned char> raylib::helper::FileHelper::loadFileData(const std::string &fileName)
{
    std::ifstream file(fileName, std::ios::binary);
    std::vector<unsigned char> buffer(std::istreambuf_iterator<char>(file), {});
    return buffer;
}

std::string raylib::helper::FileHelper::loadFileText(const std::string &fileName)
{
    std::ifstream file(fileName);
    std::string buffer((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    return buffer;
}

bool raylib::helper::FileHelper::saveFileText(const std::string &fileName, const std::string &text)
{
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << text;
        file.close();
        return true;
    }
    return false;
}

bool raylib::helper::FileHelper::fileExists(const std::string &fileName)
{
    return std::filesystem::exists(fileName);
}

bool raylib::helper::FileHelper::directoryExists(const std::string &dirPath)
{
    return std::filesystem::is_directory(dirPath);
}

bool raylib::helper::FileHelper::isFileExtension(const std::string &fileName, const std::string &ext)
{
    return fileName.substr(fileName.find_last_of('.') + 1) == ext;
}

std::string raylib::helper::FileHelper::getFileExtension(const std::string &fileName)
{
    return fileName.substr(fileName.find_last_of('.') + 1);
}

std::string raylib::helper::FileHelper::getFileName(const std::string &filePath)
{
    return filePath.substr(filePath.find_last_of('/') + 1);
}

std::string raylib::helper::FileHelper::getFileNameWithoutExt(const std::string &filePath)
{
    return filePath.substr(filePath.find_last_of('/') + 1, filePath.find_last_of('.') - filePath.find_last_of('/') - 1);
}

std::string raylib::helper::FileHelper::getDirectoryPath(const std::string &filePath)
{
    return filePath.substr(0, filePath.find_last_of('/'));
}

std::string raylib::helper::FileHelper::getPrevDirectoryPath(const std::string &dirPath)
{
    return dirPath.substr(0, dirPath.find_last_of('/'));
}

std::string raylib::helper::FileHelper::getWorkingDirectory()
{
    return std::filesystem::current_path().string();
}

std::vector<std::string> raylib::helper::FileHelper::getDirectoryFiles(const std::string &dirPath, const bool &recursive)
{
    std::vector<std::string> files;
    if (recursive) {
        for (auto &p : std::filesystem::recursive_directory_iterator(dirPath))
            if (p.is_regular_file())
                files.push_back(p.path().string());
        return files;
    }
    for (auto &p : std::filesystem::directory_iterator(dirPath))
        files.push_back(p.path().string());
    return files;
}

std::vector<std::string> raylib::helper::FileHelper::getDirectoryFiles(const std::string &dirPath,const std::function<bool(const std::string &)> &filter)
{
    return getDirectoryFiles(dirPath, false, filter);
}

std::vector<std::string> raylib::helper::FileHelper::getDirectoryFiles(const std::string &dirPath, const bool &recursive, const std::function<bool(const std::string &)> &filterFunction)
{
    if (filterFunction == nullptr)
        return getDirectoryFiles(dirPath, recursive);
    std::vector<std::string> files;
    if (recursive) {
        for (auto &p : std::filesystem::recursive_directory_iterator(dirPath))
            if (p.is_regular_file() && filterFunction(p.path().string()))
                files.push_back(p.path().string());
        return files;
    }
    for (auto &p : std::filesystem::directory_iterator(dirPath))
        if (filterFunction(p.path().string()))
            files.push_back(p.path().string());
    return files;
}

void raylib::helper::FileHelper::changeDirectory(const std::string &dir)
{
    std::filesystem::current_path(dir);
}

bool raylib::helper::FileHelper::isFileDropped()
{
    return IsFileDropped();
}

std::vector<std::string> raylib::helper::FileHelper::getDroppedFiles()
{
    int count = 0;
    char **files = GetDroppedFiles(&count);
    std::vector<std::string> droppedFiles;
    for (int i = 0; i < count; i++)
        droppedFiles.emplace_back(files[i]);
    ClearDroppedFiles();
    return droppedFiles;
}

long long raylib::helper::FileHelper::getFileModTime(const std::string &fileName)
{
    return std::filesystem::last_write_time(fileName).time_since_epoch().count();
}
