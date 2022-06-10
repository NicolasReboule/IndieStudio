/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include <GameEngine/GameEngine.hpp>
#include <GameEngine/myStaticBody.hpp>
#include <GameEngine/myButton.hpp>
#include <GameEngine/MainScene.hpp>


int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();
    auto audioManager = GameEngine::AudioManager::getInstance();
    auto sceneManager = GameEngine::SceneManager::getInstance();

    window->createWindow("Bomberman", 720, 720, 60);
    raylib::RlCamera camera;

    std::shared_ptr<GameEngine::MainScene> mainScene = std::make_shared<GameEngine::MainScene>();
    sceneManager->addScene(mainScene);

    sceneManager->changeScene("main");

    while (window->isOpen()) {

        sceneManager->update();
        sceneManager->drawAll(camera);

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
