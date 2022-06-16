/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

/*
int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    auto audioManager = GameEngine::AudioManager::getInstance();
    auto sceneManager = GameEngine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 120);

    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();

    auto startScene = std::make_shared<Indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<Indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto chooseNumberPlayerScene = std::make_shared<Indie::ChooseNumberPlayerScene>();
    sceneManager->addScene(chooseNumberPlayerScene);

    auto gameMenuScene = std::make_shared<Indie::GameScene>();
    sceneManager->addScene(gameMenuScene);

    sceneManager->changeScene("mainMenu");

    while (window->isOpen())
        sceneManager->makeLoop(camera);
    return (0);
}
*/

int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    window->createWindow("Bomberman", 1280, 720, 0);
    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
    raylib::RlModel model("./assets/player.iqm", "./assets/blue.png");
    raylib::RlModelAnim anim(model.getModel(), "./assets/player.iqm");
    std::cout << anim.getCount() << std::endl;
    unsigned int i = 0;
    while (window->isOpen()) {
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(RlColor::White);
        raylib::DrawTextHelper::drawFps(10, 10, 30);
        camera.update();
       /* std::cout << raylib::input::GamepadHelper::getGamepadName(0) << std::endl;
        std::cout << raylib::input::GamepadHelper::getGamepadName(1) << std::endl;*/
        if (raylib::input::KeyboardHelper::isKeyDown(KEY_RIGHT))
            i++;
        if (i > anim.getCount())
            i = 0;
        if (raylib::input::KeyboardHelper::isKeyDown(KEY_SPACE))
            anim.update(i);
        if (raylib::input::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::DrawHelper::beginMode3D(camera);
        raylib::Shape3DHelper::drawGrid({9, 9}, {1, 0, 1}, 1.0f);
        raylib::Shape3DHelper::drawLine3D({0, 0, 0}, {0, 50, 0}, RlColor::Red);
        DrawModelEx(model.getModel(), {0.0f, 0.0f, 0.0f}, {0, 1, 0}, 90.0f, {0.8f, 0.8f, 0.8f}, WHITE);
        raylib::DrawHelper::endMode3D();
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}
