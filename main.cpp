/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include <iostream>
#include "./raylib/raylib-cpp.hpp"
#include "player.hpp"

int main() {
    raylib::Window window = raylib::Window((Vector2){800, 450}, "hello", 60);

    raylib::Camera camera = raylib::Camera((Vector3){0, 100, 75}, (Vector3){0, 0, 0}, (Vector3){0, 10, 0}, 15, CAMERA_FREE);

    Player player = Player((Vector3){0, 1, 0}, (Vector3){1, 1, 1}, GREEN);

    raylib::Gamepad pad = raylib::Gamepad(0);

    std::vector<raylib::Cube> world;


    while(window.isOpen()) {
        camera.update();

        window.draw();
        window.clear(WHITE);

        camera.begin();

        if (pad.isButtonJustPressed(GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            player.moveAndCollide(world);

        player.draw();

        window.drawGrid(15, 1.0f);

        camera.end();


        window.drawFps((Vector2){10, 10});

        window.endDraw();
    }
    window.close();
    return 0;
}
