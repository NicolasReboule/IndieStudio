/*
** EPITECH PROJECT, 2022
** main.cpp
** File description:
** main.cpp
*/

#include <raylib/Raylib.hpp>

int main(int ac, char **av)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    raylib::Window::initWindow(screenWidth, screenHeight, "raylib [models] example - model animation");

    // Define the camera to look into our 3d world
    Camera camera = { 0 };
    camera.position = (Vector3){ 10.0f, 10.0f, 10.0f }; // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type

    Model model = raylib::RlModel::loadModel("../assets/guy.iqm");                    // Load the animated model mesh and basic data
    Texture2D texture = raylib::Texture::loadTexture("../assets/guytex.png");         // Load model texture and set material
    raylib::RlModel::setMaterialTexture(&model.materials[0], MATERIAL_MAP_DIFFUSE, texture);     // Set model material map texture

    Vector3 position = { 0.0f, 0.0f, 0.0f };            // Set model position

    // Load animation data
    unsigned int animsCount = 0;
    ModelAnimation *anims = raylib::RlModel::loadModelAnimations("../assets/guyanim.iqm", &animsCount);
    int animFrameCounter = 0;

    raylib::RlCamera::setCameraMode(camera, CAMERA_FREE); // Set free camera mode

    SetTargetFPS(60);                   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (raylib::Window::isOpen())        // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        raylib::RlCamera::updateCamera(&camera);

        // Play animation when spacebar is held down
        if (raylib::Keyboard::isKeyDown(KEY_SPACE))
        {
            animFrameCounter++;
            raylib::RlModel::updateModelAnimation(model, anims[0], animFrameCounter);
            if (animFrameCounter >= anims[0].frameCount) animFrameCounter = 0;
        }
        //----------------------------------------------------------------------------------

        // DrawHelper
        //----------------------------------------------------------------------------------
        raylib::DrawHelper::beginDrawing();

        raylib::DrawHelper::clearBackground(RAYWHITE);

        raylib::DrawHelper::beginMode3D(camera);

        raylib::RlModel::drawModelEx(model, position, (Vector3){1.0f, 0.0f, 0.0f }, -90.0f, (Vector3){1.0f, 1.0f, 1.0f }, WHITE);

        for (int i = 0; i < model.boneCount; i++)
        {
            raylib::RlModel::drawCube(anims[0].framePoses[animFrameCounter][i].translation, 0.2f, 0.2f, 0.2f, RED);
        }

        raylib::RlModel::drawGrid(10, 1.0f);         // DrawHelper a grid

        raylib::DrawHelper::endMode3D();

        raylib::Text::drawText("PRESS SPACE to PLAY MODEL ANIMATION", 10, 10, 20, MAROON);
        raylib::Text::drawText("(c) Guy IQM 3D model by @culacant", screenWidth - 200, screenHeight - 20, 10, GRAY);

        raylib::DrawHelper::endDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    raylib::Texture::unloadTexture(texture);     // Unload texture

    // Unload model animations data
    for (unsigned int i = 0; i < animsCount; i++) raylib::RlModel::unloadModelAnimation(anims[i]);
    RL_FREE(anims);

    raylib::RlModel::unloadModel(model);         // Unload model

    raylib::Window::closeWindow();              // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return (0);
}
