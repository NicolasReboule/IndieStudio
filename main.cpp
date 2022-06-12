/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "raylib/Raylib.hpp"

int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();

    window->createWindow("Bomberman", 1280, 720, 60);
    raylib::RlCamera camera;
    raylib::RlImageBuilder imageBuilder;
    raylib::RlImage rlimage = raylib::RlImageBuilder().setType(raylib::RlImageBuilder::ImageGradientH)
        .setWidth(1000).setHeight(1000)
        .setLeft(raylib::RlColor::Blue).setRight(raylib::RlColor::Red)
        .build();
    raylib::RlTexture texture(rlimage);

    while (window->isOpen()) {
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(RlColor::White);
        raylib::TextHelper::drawFPS(10, 10);
        raylib::DrawHelper::beginMode3D(camera);
        raylib::Shape3DHelper::drawGrid(10, 1.0f);
        raylib::Shape3DHelper::drawCube({0, 0, 0}, 2, 2, 2, RlColor::Red);
        raylib::DrawHelper::endMode3D();
        //raylib::DrawTextureHelper::drawTexture(texture, 0, 0, RlColor::White);
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}


















/*
int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();
    auto audio = GameEngine::AudioManager::getInstance();

    window->createWindow("Bomberman", 720, 720, 60);
    audio->addSound("sound.wav", FX);




    GameEngine::myStaticBody static_body("../assets/player.iqm", "../assets/blue.png");
    static_body.getRlModel().setRotationAxis(0, 1, 0);
    static_body.getRlModel().setRotationAngle(120);

    //raylib::RlModel model("../assets/player.iqm", "../assets/blue.png");
    raylib::RlModelAnim anim(static_body.getRlModel().getModel(), "../assets/player.iqm", 1);

    raylib::RlCamera camera;

    while (window->isOpen()) {
        if (raylib::KeyboardHelper::isKeyPressed(KEY_A)) {
            //audio->playSound("sound.wav");
            static_body.setPosition((Vector3){static_body.getPosition().x - 1, static_body.getPosition().y, static_body.getPosition().z});
        }

        if (raylib::KeyboardHelper::isKeyDown(KEY_SPACE)) {
            anim.update(0);
        }


        window->startDrawing(camera);
        window->drawGrid(10, 1.0f);

        raylib::ModelHelper::drawModel(static_body.getRlModel());

        window->endDrawing();
    }

    return (0);
}*/
