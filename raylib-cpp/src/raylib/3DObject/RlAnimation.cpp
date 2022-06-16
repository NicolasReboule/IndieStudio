/*
** EPITECH PROJECT, 2022
** RlAnimation.cpp
** File description:
** RlAnimation.cpp
*/

#include "raylib/3DObject/RlAnimation.hpp"

raylib::RlAnimation::RlAnimation(const std::string &animationDir, const std::string &extension)
{
    std::vector<std::string> modelsNames = FileHelper::getDirectoryFiles(animationDir, [&extension](const std::string &fileName) {
        return FileHelper::isFileExtension(fileName, extension);
    });
    std::sort(modelsNames.begin(), modelsNames.end());
    for (const auto &item : modelsNames)
        _animationModels.push_back(LoadModel(item.c_str()));
}

raylib::RlAnimation::~RlAnimation()
{
    for (const auto &item : _animationModels)
        UnloadModel(item);
}

void raylib::RlAnimation::update()
{
    if (_animationModels.empty())
        return;
    _frame++;
    if (_frame >= _animationModels.size())
        _frame = 0;
}

const unsigned int &raylib::RlAnimation::getFrame() const
{
    return _frame;
}

const std::vector<Model> &raylib::RlAnimation::getAnimationModels() const
{
    return _animationModels;
}
