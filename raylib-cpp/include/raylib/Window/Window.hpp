/*
** EPITECH PROJECT, 2022
** Window.hpp
** File description:
** Window.hpp
*/

#ifndef RAYLIB_CPP_WINDOW_HPP
#define RAYLIB_CPP_WINDOW_HPP

#include <string>
#include <iostream>
#include "raylib.h"

namespace rl {
    class Window {
    public:
        explicit Window(const std::string &title, int width, int height);
        ~Window();

    private:
        std::string _title;
        int _width;
        int _height;
    };
}

#endif //RAYLIB_CPP_WINDOW_HPP
