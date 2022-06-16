/*
** EPITECH PROJECT, 2022
** RlWindow.cpp
** FileHelper description:
** RlWindow.cpp
*/

#include "raylib/Core/CoreHelper.hpp"

// VR stereo config functions for VR simulator

VrStereoConfig raylib::helper::CoreHelper::loadVrStereoConfig(const VrDeviceInfo &device)
{
    return LoadVrStereoConfig(device);
}

void raylib::helper::CoreHelper::unloadVrStereoConfig(const VrStereoConfig &config)
{
    UnloadVrStereoConfig(config);
}

// Timing-related functions

void raylib::helper::CoreHelper::setFramerateLimit(int fps)
{
    SetTargetFPS(fps);
}

int raylib::helper::CoreHelper::getFPS()
{
    return GetFPS();
}

float raylib::helper::CoreHelper::getFrameTime()
{
    return GetFrameTime();
}

double raylib::helper::CoreHelper::getTime()
{
    return GetTime();
}

// Misc.

void raylib::helper::CoreHelper::openURL(const std::string &url)
{
    OpenURL(url.c_str());
}
