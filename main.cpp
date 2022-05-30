/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include <raylib/Raylib.hpp>

int main(int ac, char **av)
{
    raylib::Window window("Raylib", 800, 600);
    while (raylib::Core::isOpen()) {
        raylib::Core::beginDrawing();
        raylib::Core::clearBackground(WHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        raylib::Core::endDrawing();
    }
    return (0);
}
