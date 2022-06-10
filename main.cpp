/*
** EPITECH PROJECT, 2022
** main.cpp
** FileHelper description:
** main.cpp
*/

#include <raylib/Raylib.hpp>

int main(int ac, char **av)
{
    auto window = raylib::RlWindow::getInstance();
    window->createWindow("toto", 1920, 1080);
    raylib::CoreHelper::setFramerateLimit(60);
    //    raylib::RlFont font;
    //    raylib::Text text("Hello", font);
    raylib::RlMeshBuilder mesh;
    mesh.setMeshType(raylib::RlMeshBuilder::MeshCube);
    mesh.setWidth(10);
    mesh.setLength(10);
    mesh.setHeight(10);
    raylib::RlModel cube(mesh.build(), "../assets/Brick.png");
//    raylib::RlModel model("../assets/player.iqm", "");
//    raylib::RlModelAnim anim(model.getModel(), "../assets/player.iqm", 1);
    //    text.setPosition((Vector2) {860, 540});
    //    text.setColor(RED);
    //    text->setFontSize(100);
    //    text->setTextSpacing(20);
    Camera camera = {0};
    camera.position = (Vector3) {10.0f, 10.0f, 10.0f}; // Camera position
    camera.target = (Vector3) {0.0f, 0.0f, 0.0f};      // Camera looking at point
    camera.up = (Vector3) {0.0f, 1.0f, 0.0f};          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;
    while (raylib::RlWindow::getInstance()->isOpen()) {
        //        if (raylib::KeyboardHelper::isKeyDown(KEY_SPACE))
        //            anim.update(0);
        raylib::DrawHelper::beginDrawing();
        raylib::DrawHelper::clearBackground(BLACK);
        raylib::DrawHelper::beginMode3D(camera);
        raylib::ModelHelper::drawModel(cube);
        //        raylib::ModelHelper::drawModel(model, (Vector3f){ 0.0f, 0.0f, 0.0f }, 3.0f, WHITE);
        raylib::DrawHelper::endMode3D();
        //      raylib::TextHelper::drawText(text);
        raylib::DrawHelper::endDrawing();
    }
    return (0);
}

