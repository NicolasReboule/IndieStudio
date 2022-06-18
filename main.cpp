/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include "IndieStudio.hpp"

/*int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    auto audioManager = gameengine::AudioManager::getInstance();
    auto sceneManager = gameengine::SceneManager::getInstance();
    window->createWindow("Bomberman", 1280, 720, 60);
    window->setCamera(raylib::builder::RlCameraBuilder().setPosition({0, 20, 0}).setCameraMode(CAMERA_FREE).build());

    auto startScene = std::make_shared<indie::StartScene>();
    sceneManager->addScene(startScene);

    auto mainMenuScene = std::make_shared<indie::MainMenuScene>();
    sceneManager->addScene(mainMenuScene);

    auto chooseNumberPlayerScene = std::make_shared<indie::ChooseNumberPlayerScene>();
    sceneManager->addScene(chooseNumberPlayerScene);

    auto gameScene = std::make_shared<indie::GameScene>();
    sceneManager->addScene(gameScene);

    auto winningScene = std::make_shared<indie::WinningScene>();
    sceneManager->addScene(winningScene);

    audioManager->addSound("sound.wav", SoundCategory::FX);
    audioManager->addSound("game_loop.ogg", SoundCategory::MUSIC);
    sceneManager->changeScene("chooseNumberPlayer");

    raylib::audio::RlMusic music = raylib::audio::RlMusic("./assets/sounds/game_loop.ogg");
    music.play();
    while (window->isOpen()) {
        music.update();
        sceneManager->makeLoop(window->getCamera());
    }
    return (0);
}*/

int main(int ac, char **av)
{
    auto window = raylib::window::RlWindow::getInstance();
    window->createWindow("Bomberman", 1280, 720, 0);
    raylib::RlCamera camera = raylib::builder::RlCameraBuilder().setCameraMode(CAMERA_FREE).build();
    raylib::model::RlModel model("./assets/models/player.iqm", "./assets/textures/players/blue.png");
    raylib::model::RlModelAnimation anim(model, "./assets/models/player.iqm");
    raylib::helper::input::MouseHelper::setMouseCursor(MOUSE_CURSOR_CROSSHAIR);
    auto texture = std::make_shared<raylib::texture::RlTexture>("./assets/textures/allItems.png");
    raylib::model::RlModel boost("./assets/models/boost/boostSpeed.obj");
    boost.setMaterialTexture(texture);
    raylib::model::RlModel cpy = boost;

    raylib::helper::AudioHelper::initAudioDevice();
    raylib::audio::RlMusic music = raylib::audio::RlMusic("./assets/sounds/soundcpy.wav");

    //std::cout << anim.getCount() << std::endl;
    while (window->isOpen()) {
        raylib::helper::draw::DrawHelper::beginDrawing();
        raylib::helper::draw::DrawHelper::clearBackground(RlColor::White);
        raylib::helper::draw::DrawTextHelper::drawFps(10, 10, 30);
        camera.update();
        raylib::helper::draw::DrawHelper::beginMode3D(camera);
        raylib::helper::draw::Draw3DHelper::drawGrid({9, 9}, 1.0f);
        raylib::helper::draw::DrawModelHelper::drawModel(boost);
        raylib::helper::draw::DrawModelHelper::drawModel(model, {-2, 0, -2}, 0.5f, RlColor::White);
        anim.incrementFrameCount();
        anim.update(0);
        raylib::helper::draw::DrawModelHelper::drawModel(cpy, {3, 3, 3}, 2, RlColor::White);

        if (raylib::helper::input::KeyboardHelper::isKeyPressed(KEY_R))
            camera.reset();
        raylib::helper::draw::DrawHelper::endMode3D();
        raylib::helper::draw::DrawHelper::endDrawing();
    }

    raylib::helper::AudioHelper::closeAudioDevice();
    return (0);
}
