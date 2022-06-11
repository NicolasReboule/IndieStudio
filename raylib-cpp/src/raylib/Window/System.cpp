/*
** EPITECH PROJECT, 2022
** System.cpp
** File description:
** System.cpp
*/

#include "raylib/Window/System.hpp"

int raylib::System::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::System::getScreenHeight()
{
    return GetScreenHeight();
}

Vector2i raylib::System::getScreenSize()
{
    return {getScreenWidth(), getScreenHeight()};
}

int raylib::System::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::System::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2f raylib::System::getMonitorPosition(int monitor)
{
    return raylib::VectorHelper::toVectorf(GetMonitorPosition(monitor));
}

int raylib::System::getMonitorWidth(int monitor)
{
    return GetMonitorWidth(monitor);
}

int raylib::System::getMonitorHeight(int monitor)
{
    return GetMonitorHeight(monitor);
}

Vector2i raylib::System::getMonitorSize(int monitor)
{
    return {getMonitorWidth(monitor), getMonitorHeight(monitor)};
}

int raylib::System::getMonitorPhysicalWidth(int monitor)
{
    return GetMonitorPhysicalWidth(monitor);
}

int raylib::System::getMonitorPhysicalHeight(int monitor)
{
    return GetMonitorPhysicalHeight(monitor);
}

Vector2i raylib::System::getMonitorPhysicalSize(int monitor)
{
    return {getMonitorPhysicalWidth(monitor), getMonitorPhysicalHeight(monitor)};
}

int raylib::System::getMonitorRefreshRate(int monitor)
{
    return GetMonitorRefreshRate(monitor);
}

Vector2f raylib::System::getWindowPosition()
{
    return raylib::VectorHelper::toVectorf(GetWindowPosition());
}

Vector2f raylib::System::getWindowScaleDPI()
{
    return raylib::VectorHelper::toVectorf(GetWindowScaleDPI());
}

std::string raylib::System::getMonitorName(int monitor)
{
    return GetMonitorName(monitor);
}

void raylib::System::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::System::getClipboardText()
{
    return GetClipboardText();
}
