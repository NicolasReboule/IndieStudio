/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** CursorHelper
*/

#include "raylib/Inputs/CursorHelper.hpp"

// CursorHelper-related functions

void raylib::CursorHelper::showCursor()
{
    ShowCursor();
}

void raylib::CursorHelper::hideCursor()
{
    HideCursor();
}

bool raylib::CursorHelper::isCursorHidden()
{
    return IsCursorHidden();
}

void raylib::CursorHelper::enableCursor()
{
    EnableCursor();
}

void raylib::CursorHelper::disableCursor()
{
    DisableCursor();
}

bool raylib::CursorHelper::isCursorOnScreen()
{
    return IsCursorOnScreen();
}