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
    while (raylib::Window::isOpen()) {
        raylib::Draw::beginDrawing();
        raylib::Draw::clearBackground(WHITE);
        raylib::Text::drawText("Congrats! Hugo est Gay", 190, 200, 20, LIGHTGRAY);
        raylib::Draw::endDrawing();
    }
    return (0);
}
