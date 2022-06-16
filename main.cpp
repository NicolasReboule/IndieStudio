/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"
#include <boost/property_tree/json_parser.hpp>
//
//int main(int ac, char **av)
//{
//    auto window = raylib::window::RlWindow::getInstance();
//    auto audioManager = GameEngine::AudioManager::getInstance();
//    auto sceneManager = GameEngine::SceneManager::getInstance();
//    window->createWindow("Bomberman", 1280, 720, 120);
//
//    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
//
//    auto startScene = std::make_shared<Indie::StartScene>();
//    sceneManager->addScene(startScene);
//
//    auto mainMenuScene = std::make_shared<Indie::MainMenuScene>();
//    sceneManager->addScene(mainMenuScene);
//
//    auto chooseNumberPlayerScene = std::make_shared<Indie::ChooseNumberPlayerScene>();
//    sceneManager->addScene(chooseNumberPlayerScene);
//
//    auto gameMenuScene = std::make_shared<Indie::GameScene>();
//    sceneManager->addScene(gameMenuScene);
//
//    sceneManager->changeScene("mainMenu");
//
//    while (window->isOpen())
//        sceneManager->makeLoop(camera);
//    return (0);
//}

//
int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);
    raylib::RlCamera camera = raylib::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();

    raylib::RlAnimation animation("./assets/animation", "obj");

    unsigned int i = 0;
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

//int main(int ac, char **av)
//{
//    boost::property_tree::ptree pt;
//    boost::property_tree::read_json("../assets/config.json", pt);
//    for (const auto &item: pt) {
//        std::cout << item.first << ": " << item.second.get_value<std::string>() << std::endl;
//    }
//}