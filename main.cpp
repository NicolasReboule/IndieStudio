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
    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
    raylib::RlAnimation animation;
    try {
        animation = raylib::RlAnimation("./assets/animation", "obj");
    } catch (raylib::ex::RlAnimationException &e) {
        std::cerr << e.what() << std::endl;
    }
    raylib::RlModel model("./assets/player.iqm", "./assets/blue.png");
    raylib::RlModelAnim anim(model, "./assets/player.iqm");
    raylib::helper::input::MouseHelper::setMouseCursor(MOUSE_CURSOR_CROSSHAIR);

    std::cout << anim.getCount() << std::endl;
    int i = 0;
    while (window->isOpen()) {
        raylib::helper::draw::DrawHelper::beginDrawing();
        raylib::helper::draw::DrawHelper::clearBackground(RlColor::White);
        raylib::helper::draw::DrawTextHelper::drawFps(10, 10, 30);
        camera.update();
        raylib::helper::draw::DrawHelper::beginMode3D(camera);
        raylib::Shape3DHelper::drawGrid({9, 9}, 1.0f);
        if (animation.isLoaded()) {
            if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_SPACE))
                animation.update();
            DrawModel(animation.getAnimationModels()[animation.getFrame()], {0.0f, 0.0f, 0.0f}, 1.0f, WHITE);
        } else {
            if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_RIGHT))
                i++;
            if (i > anim.getCount())
                i = 0;
            if (raylib::helper::input::KeyboardHelper::isKeyDown(KEY_SPACE))
                anim.update(i);
            DrawModelEx(model.getModel(), {0.0f, 0.0f, 0.0f}, {0, 1, 0}, 90.0f, {0.8f, 0.8f, 0.8f}, WHITE);
        }
        if (raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::helper::draw::DrawHelper::endMode3D();
        raylib::helper::draw::DrawHelper::endDrawing();
    }

    return (0);
}
