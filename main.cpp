/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();

    window->createWindow("Bomberman", 1280, 720, 120);
    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
    raylib::RlImage rlimage = raylib::RlImageBuilder().setType(raylib::RlImageBuilder::ImageGradientH)
        .setWidth(1000).setHeight(1000)
        .setLeft(raylib::RlColor::Blue).setRight(raylib::RlColor::Red)
        .build();
    raylib::RlTexture texture(rlimage);
    auto font = std::make_shared<raylib::RlFont>(20);
    auto text = raylib::RlText("Hello World", font, {10, 30});
    std::cout << camera << std::endl;
    while (window->isOpen()) {
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(RlColor::White);
        raylib::DrawTextHelper::drawFps(10, 10);
        //raylib::DrawTextHelper::drawText(font, "azertyuiopqsdfghjklmwxcvbn", {10, 40});
        raylib::DrawTextHelper::drawText(text);
        camera.update();
        if (raylib::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::DrawHelper::beginMode3D(camera);
        raylib::Shape3DHelper::drawGrid(10, 1.0f);
        raylib::Shape3DHelper::drawCube({0, 0, 0}, 2, 2, 2, RlColor::Red);
        raylib::DrawHelper::endMode3D();
        //raylib::DrawTextureHelper::drawTexture(texture, 0, 0, RlColor::White);
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}