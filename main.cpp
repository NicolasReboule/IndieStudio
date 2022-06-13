/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include <IndieStudio.hpp>

int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();
    auto audioManager = GameEngine::AudioManager::getInstance();
    auto sceneManager = GameEngine::SceneManager::getInstance();
    raylib::RlCamera camera;

    window->createWindow("Bomberman", 1280, 720, 60);

    auto startScene = std::make_shared<Indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<Indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto gameMenuScene = std::make_shared<Indie::GameScene>();
    sceneManager->addScene(gameMenuScene);



    sceneManager->changeScene("mainMenu");

    while (window->isOpen())
        sceneManager->makeLoop(camera);
    return (0);
}
