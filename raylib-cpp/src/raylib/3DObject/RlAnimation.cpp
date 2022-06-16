/*
** EPITECH PROJECT, 2022
** RlAnimation.cpp
** File description:
** RlAnimation.cpp
*/

#include "raylib/3DObject/RlAnimation.hpp"

raylib::RlAnimation::RlAnimation(const std::string &animationDir, const std::string &extension): _frame(0)
{
    std::vector<std::string> modelsNames = FileHelper::getDirectoryFiles(animationDir, [&extension](const std::string &fileName) {
        return FileHelper::isFileExtension(fileName, extension);
    });
    std::sort(modelsNames.begin(), modelsNames.end());
    for (const auto &item : modelsNames)
        this->_animationModels.push_back(LoadModel(item.c_str()));
}

raylib::RlAnimation::~RlAnimation()
{
    for (const auto &item : this->_animationModels)
        UnloadModel(item);
}

void raylib::RlAnimation::update()
{
    if (_animationModels.empty())
        return;
    this->_frame++;
    if (_frame >= _animationModels.size())
        this->_frame = 0;
}

const std::vector<Model> &raylib::RlAnimation::getAnimationModels() const
{
    return this->_animationModels;
}

std::size_t raylib::RlAnimation::getAnimationsSize() const
{
    return this->_animationModels.size();
}

const unsigned int &raylib::RlAnimation::getFrame() const
{
    return this->_frame;
}
