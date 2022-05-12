/*
** EPITECH PROJECT, 2022
** window.hpp
** File description:
** window.hpp
*/

#ifndef B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_WINDOW_HPP
#define B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_WINDOW_HPP

#include "../raylib.hpp"
#include <string>

namespace raylib {
    class Window {
    public:
        Window();
        Window(Vector2 size, std::string title, int fps);
        ~Window();

        void setTargetFPS(int fps);

        void drawFps(Vector2 position);

        void drawGrid(int slices, float spacing);

        void setSize(Vector2 size);

        Vector2 getSize();

        void clear(Color color);

        void draw();

        void endDraw();

        bool isOpen();

        void close();

    private:
        std::string _title;
        int _width;
        int _height;
    };
}

#endif //B_YEP_400_RUN_4_1_INDIESTUDIO_ALWYN_MATTAPULLUT_WINDOW_HPP
