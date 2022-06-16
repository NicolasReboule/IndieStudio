/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);
    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
    raylib::RlAnimation animation("./assets/animation", "obj");

    while (window->isOpen()) {
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(RlColor::White);
        raylib::DrawTextHelper::drawFps(10, 10, 30);
        raylib::DrawHelper::beginMode3D(camera);
        camera.update();
        if (raylib::input::KeyboardHelper::isKeyDown(KEY_SPACE))
            animation.update();
        DrawModel(animation.getAnimationModels()[animation.getFrame()], {0.0f, 0.0f, 0.0f} , 1.0f, WHITE);
        raylib::DrawHelper::endMode3D();
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}
