/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Cursor
*/

#include "raylib/Cursor.hpp"

raylib::Cursor::Cursor()
{
}

raylib::Cursor::~Cursor()
{
}

// Cursor-related functions

void raylib::Cursor::showCursor()
{
    ShowCursor();
}

void raylib::Cursor::hideCursor()
{
    HideCursor();
}

bool raylib::Cursor::isCursorHidden()
{
    return IsCursorHidden();
}

void raylib::Cursor::enableCursor()
{
    EnableCursor();
}

void raylib::Cursor::disableCursor()
{
    DisableCursor();
}

bool raylib::Cursor::isCursorOnScreen()
{
    return IsCursorOnScreen();
}