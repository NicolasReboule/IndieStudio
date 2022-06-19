/*
** EPITECH PROJECT, 2022
** AudioManager.cpp
** File description:
** AudioManager.cpp
*/

#include "GameEngine/GameEngine.hpp"
#include "GameEngine/Audio/AudioManager.hpp"

std::shared_ptr<gameengine::AudioManager> gameengine::AudioManager::_instance;

gameengine::AudioManager::AudioManager()
{
    raylib::helper::AudioHelper::initAudioDevice();
}

gameengine::AudioManager::~AudioManager()
{
    raylib::helper::AudioHelper::closeAudioDevice();
}

std::shared_ptr<gameengine::AudioManager> &gameengine::AudioManager::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<gameengine::AudioManager>();
    return _instance;
}

void gameengine::AudioManager::loadSounds(const std::string &assetsPath)
{
    std::string path = assetsPath.ends_with("/") ? assetsPath : assetsPath + "/";
    loadSounds(path + "sounds/", path + "music/");
}

void gameengine::AudioManager::loadSounds(const std::string &soundDir, const std::string &musicDir)
{
    std::vector<std::string> soundFiles = raylib::helper::FileHelper::getDirectoryFiles(soundDir);
    std::vector<std::string> musicFiles = raylib::helper::FileHelper::getDirectoryFiles(musicDir);
    for (const auto &item: soundFiles)
        addSound(item, AbstractSound::SoundCategory::FX);
    for (const auto &item: musicFiles)
        addSound(item, AbstractSound::SoundCategory::MUSIC);
}

void gameengine::AudioManager::addSound(const std::string &filePath, AbstractSound::SoundCategory category)
{
    if (category == AbstractSound::SoundCategory::FX)
        this->_sounds.emplace_back(std::make_unique<gameengine::audio::Sound>(filePath, category));
    else
        this->_sounds.emplace_back(std::make_unique<gameengine::audio::Music>(filePath, category));
    std::cout << "[GameEngine][AudioManager] Loaded: " << filePath << std::endl;
}

void gameengine::AudioManager::deleteSound(const std::string &name)
{
    std::erase_if(this->_sounds, [&name](const std::unique_ptr<gameengine::AbstractSound> &sound) {
        return sound->getName() == name || sound->getFilePath() == name;
    });
}

void gameengine::AudioManager::playSound(const std::string &name)
{
    for (auto &sound: this->_sounds) {
        if (sound->getName() == name || sound->getFilePath() == name) {
            if (sound->getCategory() == AbstractSound::SoundCategory::FX) {
                auto &audio = dynamic_cast<gameengine::audio::Sound &>(*sound);
                audio.playMulti();
            }
            if (sound->getCategory() == AbstractSound::SoundCategory::MUSIC) {
                auto &audio = dynamic_cast<gameengine::audio::Music &>(*sound);
                audio.play();
            }
        }
    }
}

void gameengine::AudioManager::setVolume(const float &volume, AbstractSound::SoundCategory category)
{
    for (auto &sound: this->_sounds) {
        if (sound->getCategory() == category){
            auto &audio = dynamic_cast<gameengine::AbstractSound &>(*sound);
            audio.setVolume(volume);
        }
    }
}
