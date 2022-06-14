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
    text.setRotation(45);

    std::cout << camera << std::endl;

    auto mesh = raylib::RlMeshBuilder().setMeshType(raylib::RlMeshBuilder::MeshCube).setLength(1.0).setWidth(1.0).setHeight(1.0).build();
    auto model = raylib::RlModel(mesh, "assets/textures/block/polished_blackstone_bricks.png");
    model.setPosition({5, 4, 3});
    model.setRotationAxis({1, 0, 0});
    model.setRotationAngle(180);

    while (window->isOpen()) {
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(RlColor::White);
        raylib::DrawTextHelper::drawFps(10, 10, 30);
        raylib::DrawTextHelper::drawText("azertyuiopqsdfghjklmwxcvbn", *font, {10, 40});
        //raylib::DrawTextHelper::drawText(text);
        raylib::DrawTextHelper::drawCenteredText("Bomberman", *font, {(float) window->getWidth() / 2.0f, 20}, 30, RlColor::Red);
        camera.update();
        if (raylib::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::DrawHelper::beginMode3D(camera);
        raylib::ModelHelper::drawModel(model);
        raylib::Shape3DHelper::drawGrid(10, 1.0f);
        raylib::Shape3DHelper::drawCube({0, 0, 0}, 2, 2, 2, RlColor::Red);
        raylib::DrawHelper::endMode3D();
        //raylib::DrawTextureHelper::drawTexture(texture, 0, 0, RlColor::White);
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}
