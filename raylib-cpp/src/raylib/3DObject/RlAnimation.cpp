/*
** EPITECH PROJECT, 2022
** RlAnimation.cpp
** File description:
** RlAnimation.cpp
*/

#include "raylib/3DObject/RlAnimation.hpp"

raylib::model::RlAnimation::RlAnimation(const std::string &animationDir, const std::string &extension): _frame(0), _isLoaded(false)
{
    if (!helper::FileHelper::directoryExists(animationDir))
        throw ex::RlAnimationException("Animation dir: " + animationDir + " not found");
    std::vector<std::string> modelsNames = helper::FileHelper::getDirectoryFiles(animationDir, [&extension](const std::string &fileName) {
        return helper::FileHelper::isFileExtension(fileName, extension);
    });
    std::sort(modelsNames.begin(), modelsNames.end());
    for (const auto &item : modelsNames)
        this->_animationModels.emplace_back(item);
    this->_isLoaded = true;
}

void raylib::model::RlAnimation::update()
{
    if (_animationModels.empty())
        return;
    this->_frame++;
    if (_frame >= _animationModels.size())
        this->_frame = 0;
}

const std::vector<raylib::model::RlModel> &raylib::model::RlAnimation::getAnimationModels() const
{
    return this->_animationModels;
}

std::size_t raylib::model::RlAnimation::getAnimationsSize() const
{
    return this->_animationModels.size();
}

const unsigned int &raylib::model::RlAnimation::getFrame() const
{
    return this->_frame;
}

const bool &raylib::model::RlAnimation::isLoaded() const
{
    return this->_isLoaded;
}
