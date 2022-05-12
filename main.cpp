/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include <iostream>
#include "./raylib/raylib-cpp.hpp"

int main() {

    Vector2 size = (Vector2){800, 450};
    raylib::Window window = raylib::Window(size, "hello", 60);

    Vector3 position = (Vector3){0, 100, 75};
    Vector3 target = (Vector3){0, 0, 0};
    Vector3 up = (Vector3){0, 10, 0};
    int projection = CAMERA_ORTHOGRAPHIC;
    float fovy = 15;
    raylib::Camera camera = raylib::Camera(position, target, up, fovy, projection);
    camera.setMode(CAMERA_FREE);

    while(window.isOpen()) {
        camera.update();

        window.draw();
        window.clear(WHITE);

        camera.begin();

        window.drawGrid(15, 1.0f);

        camera.end();

        window.endDraw();
    }
    window.close();
    return 0;
}
