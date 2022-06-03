/*
** EPITECH PROJECT, 2022
** Window.cpp
** FileHelper description:
** Window.cpp
*/

#include "raylib/Core/CoreHelper.hpp"

// VR stereo config functions for VR simulator

VrStereoConfig raylib::CoreHelper::loadVrStereoConfig(VrDeviceInfo device)
{
    return LoadVrStereoConfig(device);
}

void raylib::CoreHelper::unloadVrStereoConfig(VrStereoConfig config)
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

// Misc. functions

void raylib::CoreHelper::takeScreenshot(const std::string &fileName)
{
    TakeScreenshot(fileName.c_str());
}

void raylib::CoreHelper::setConfigFlags(unsigned int flags)
{
    SetConfigFlags(flags);
}

// Misc.

void raylib::CoreHelper::openURL(const std::string &url)
{
    OpenURL(url.c_str());
}
