/*
** EPITECH PROJECT, 2022
** RlWindow.cpp
** FileHelper description:
** RlWindow.cpp
*/

#include "raylib/Core/CoreHelper.hpp"

// VR stereo config functions for VR simulator

VrStereoConfig raylib::CoreHelper::loadVrStereoConfig(const VrDeviceInfo &device)
{
    return LoadVrStereoConfig(device);
}

void raylib::CoreHelper::unloadVrStereoConfig(const VrStereoConfig &config)
{
    UnloadVrStereoConfig(config);
}

// Timing-related functions

void raylib::CoreHelper::setFramerateLimit(int fps)
{
    SetTargetFPS(fps);
}

int raylib::CoreHelper::getFPS()
{
    return GetFPS();
}

float raylib::CoreHelper::getFrameTime()
{
    return GetFrameTime();
}

double raylib::CoreHelper::getTime()
{
    return GetTime();
}

// Misc.

void raylib::CoreHelper::openURL(const std::string &url)
{
    OpenURL(url.c_str());
}
