/*
** EPITECH PROJECT, 2022
** AudioManager.cpp
** File description:
** AudioManager.cpp
*/

#include "GameEngine/GameEngine.hpp"
#include "GameEngine/Audio/AudioManager.hpp"

std::shared_ptr<gameengine::AudioManager> gameengine::AudioManager::_instance;

std::shared_ptr<gameengine::AudioManager> &gameengine::AudioManager::getInstance()
{
    if (!_instance)
        _instance = std::make_shared<gameengine::AudioManager>();
    return _instance;
}

void gameengine::AudioManager::addSound(const std::string &fileName, SoundCategory category)
{

    auto sound = std::make_unique<gameengine::Audio::Fx>(fileName, category);
    this->_sounds.push_back(std::move(sound));
 /*   if (category == FX) {
        auto sound = std::make_unique<gameengine::Audio::Fx>(fileName, category);
        this->_sounds.push_back(std::move(sound));
    } else {
        auto sound = std::make_unique<gameengine::Audio::Music>(fileName, category);
        this->_sounds.push_back(std::move(sound));
    }*/
}

void gameengine::AudioManager::deleteSound(const std::string &fileName)
{
    std::cout << this->_sounds.size() << std::endl;
    for (auto it = this->_sounds.begin(); it != this->_sounds.end(); it++) {
        if (this->_sounds.empty())
            return;
        if ((*it)->getName() == fileName) {
            std::cout << this->_sounds.size() << std::endl;
            this->_sounds.erase(it);
        }
    }
}

void gameengine::AudioManager::playSound(const std::string &fileName)
{
    for(auto &sound: this->_sounds) {
        if (sound->getName() == fileName){
            auto &audio = dynamic_cast<gameengine::Audio::Fx &>(*sound);
            audio.play();
            return;
        }
    }

/*    for(auto &sound: this->_sounds) {
        if (sound->getName() == fileName){
            if (sound->getCategory() == FX) {
                auto &audio = dynamic_cast<gameengine::Audio::Fx &>(*sound);
                audio.play();
            } else {
                auto &audio = dynamic_cast<gameengine::Audio::Music &>(*sound);
                audio.play();
            }
        }
    }*/
}

void gameengine::AudioManager::setVolume(float volume, SoundCategory category)
{
    for(auto &sound: this->_sounds) {
        if (sound->getCategory() == category){
            auto &audio = dynamic_cast<gameengine::Audio::Fx &>(*sound);
            audio.setVolume(volume);
        }
    }
}
