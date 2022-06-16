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
    auto audioManager = gameengine::AudioManager::getInstance();
    auto sceneManager = gameengine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);

    raylib::RlCamera camera = raylib::RlCameraBuilder().setPosition({0, 20, 0}).setCameraMode(CAMERA_FREE).build();

    auto startScene = std::make_shared<indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto chooseNumberPlayerScene = std::make_shared<indie::ChooseNumberPlayerScene>();
    sceneManager->addScene(chooseNumberPlayerScene);

    auto gameMenuScene = std::make_shared<indie::GameScene>();
    sceneManager->addScene(gameMenuScene);

    sceneManager->changeScene("chooseNumberPlayer");

    while (window->isOpen()) {
        sceneManager->makeLoop(camera);
       //std::cout << camera << std::endl;
    }
    return (0);
}

/*int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    window->createWindow("Bomberman", 1280, 720, 1);
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
        //std::cout << "Gamepad 1 - " << std::boolalpha << raylib::input::GamepadHelper::isGamepadAvailable(0) << std::endl;
        //std::cout << "Gamepad 2 - " << std::boolalpha << raylib::input::GamepadHelper::isGamepadAvailable(1) << std::endl;
        //std::cout << "Gamepad 3 - " << std::boolalpha << raylib::input::GamepadHelper::isGamepadAvailable(2) << std::endl;
        //std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;

        if (raylib::input::KeyboardHelper::isKeyDown(KEY_RIGHT))
            i++;
        if (i > anim.getCount())
            i = 0;
        if (raylib::input::KeyboardHelper::isKeyDown(KEY_SPACE))
            anim.update(i);
        if (raylib::input::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::DrawHelper::beginMode3D(camera);
        raylib::Shape3DHelper::drawGrid(10, 1.0f);
        DrawModelEx(model.getModel(), {0.0f, 0.0f, 0.0f}, {0, 1, 0}, 90.0f, {0.8f, 0.8f, 0.8f}, WHITE);
        raylib::DrawHelper::endMode3D();
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}*/
