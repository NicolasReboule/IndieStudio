/*
** EPITECH PROJECT, 2022
** MonitorHelper.cpp
** File description:
** MonitorHelper.cpp
*/

#include "raylib/Window/MonitorHelper.hpp"

int raylib::MonitorHelper::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::MonitorHelper::getScreenHeight()
{
    return GetScreenHeight();
}

int raylib::MonitorHelper::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::MonitorHelper::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2f raylib::MonitorHelper::getMonitorPosition(int monitor)
{
    return raylib::VectorHelper::toVectorf(GetMonitorPosition(monitor));
}

int raylib::MonitorHelper::getMonitorWidth(int monitor)
{
    return GetMonitorWidth(monitor);
}

int raylib::MonitorHelper::getMonitorHeight(int monitor)
{
    return GetMonitorHeight(monitor);
}

int raylib::MonitorHelper::getMonitorPhysicalWidth(int monitor)
{
    return GetMonitorPhysicalWidth(monitor);
}

int raylib::MonitorHelper::getMonitorPhysicalHeight(int monitor)
{
    return GetMonitorPhysicalHeight(monitor);
}

int raylib::MonitorHelper::getMonitorRefreshRate(int monitor)
{
    return GetMonitorRefreshRate(monitor);
}

Vector2f raylib::MonitorHelper::getWindowPosition()
{
    return raylib::VectorHelper::toVectorf(GetWindowPosition());
}

Vector2f raylib::MonitorHelper::getWindowScaleDPI()
{
    return raylib::VectorHelper::toVectorf(GetWindowScaleDPI());
}

std::string raylib::MonitorHelper::getMonitorName(int monitor)
{
    return GetMonitorName(monitor);
}

void raylib::MonitorHelper::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::MonitorHelper::getClipboardText()
{
    return GetClipboardText();
}
