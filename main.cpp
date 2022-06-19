/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    try {
        auto &window = raylib::window::RlWindow::getInstance();
        auto &sceneManager = gameengine::SceneManager::getInstance();

        window->createWindow("Bomberman", 1280, 720, 60);
        window->setConfigFlags(FLAG_WINDOW_RESIZABLE);
        window->setCamera(
            raylib::builder::RlCameraBuilder().setPosition({0, 20, 0}).setCameraMode(CAMERA_FREE).build());
        raylib::helper::input::MouseHelper::setMouseCursor(MOUSE_CURSOR_CROSSHAIR);
        raylib::helper::input::KeyboardHelper::setExitKey(KEY_NULL);
        raylib::image::RlImage image = raylib::helper::ImageHelper::load("./assets/textures/icon.png");
        window->setIcon(image);

        sceneManager->addScene(std::make_shared<indie::StartScene>());
        sceneManager->addScene(std::make_shared<indie::MainMenuScene>());
        sceneManager->addScene(std::make_shared<indie::ChooseNumberPlayerScene>());
        sceneManager->addScene(std::make_shared<indie::GameScene>());
        sceneManager->addScene(std::make_shared<indie::WinningScene>());
        sceneManager->changeScene("start");

        auto &audioManager = gameengine::AudioManager::getInstance();
        audioManager->loadSounds();
        audioManager->setVolume(0.75, gameengine::AbstractSound::SoundCategory::FX);
        audioManager->setVolume(0.5, gameengine::AbstractSound::SoundCategory::MUSIC);

        auto &sound = audioManager->getSound("c418");
        auto music = dynamic_cast<raylib::audio::RlMusic *>(&*sound);
        music->play();
        music->setVolume(0.4f);

        while (window->isOpen()) {
            sceneManager->makeLoop(window->getCamera());
            dynamic_cast<raylib::audio::RlMusic &>(*sound).update();
        }
    } catch (gameengine::ex::GameEngineException &e) {
        std::cerr << "An error occured in the GameEngine: " << e.what() << std::endl;
        return (84);
    } catch (raylib::ex::RaylibException &e) {
        std::cerr << "An error occured in the raylib: " << e.what() << std::endl;
        return (84);
    } catch (std::exception &e) {
        std::cerr << "A standard error occured: " << e.what() << std::endl;
        return (84);
    } catch (...) {
        std::cerr << "An unknown error occured" << std::endl;
        return (84);
    }
    return (0);
}

