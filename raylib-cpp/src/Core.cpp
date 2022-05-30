/*
** EPITECH PROJECT, 2022
** Window.cpp
** File description:
** Window.cpp
*/

#include "raylib/Core.hpp"

// Window-related functions

void raylib::Core::initWindow(int width, int height, const std::string &title)
{
    InitWindow(width, height, title.c_str());
}

bool raylib::Core::isOpen()
{
    return !WindowShouldClose();
}

void raylib::Core::closeWindow()
{
    CloseWindow();
}

bool raylib::Core::isWindowReady()
{
    return IsWindowReady();
}

bool raylib::Core::isWindowFullscreen()
{
    return IsWindowFullscreen();
}

bool  raylib::Core::isWindowHidden()
{
    return IsWindowHidden();
}

bool raylib::Core::isWindowMaximized()
{
    return IsWindowMaximized();
}

bool raylib::Core::isWindowMinimized()
{
    return IsWindowMinimized();
}

bool raylib::Core::isWindowFocused()
{
    return IsWindowFocused();
}

bool raylib::Core::isWindowResized()
{
    return IsWindowResized();
}

bool raylib::Core::isWindowState(unsigned int flag)
{
    return IsWindowState(flag);
}

void raylib::Core::setWindowState(unsigned int flags)
{
    SetWindowState(flags);
}

void raylib::Core::clearWindowState(unsigned int flags)
{
    ClearWindowState(flags);
}

void raylib::Core::toggleFullscreen()
{
    ToggleFullscreen();
}

void raylib::Core::maximizeWindow()
{
    MaximizeWindow();
}

void raylib::Core::minimizeWindow()
{
    MinimizeWindow();
}

void raylib::Core::restoreWindow()
{
    RestoreWindow();
}

void raylib::Core::setWindowIcon(Image image)
{
    SetWindowIcon(image);
}

void raylib::Core::setWindowTitle(const std::string &title)
{
    SetWindowTitle(title.c_str());
}

void raylib::Core::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}

void raylib::Core::setWindowMonitor(int monitor)
{
    SetWindowMonitor(monitor);
}

void raylib::Core::setWindowMinSize(int width, int height)
{
    SetWindowMinSize(width, height);
}

void raylib::Core::setWindowSize(int width, int height)
{
    SetWindowSize(width, height);
}

std::shared_ptr<void *> raylib::Core::getWindowHandle()
{
    return std::make_shared<void *>(GetWindowHandle());
}

int raylib::Core::getScreenWidth()
{
    return GetScreenWidth();
}

int raylib::Core::getScreenHeight()
{
    return GetScreenHeight();
}

int raylib::Core::getMonitorCount()
{
    return GetMonitorCount();
}

int raylib::Core::getCurrentMonitor()
{
    return GetCurrentMonitor();
}

Vector2 raylib::Core::getMonitorPosition(int monitor)
{
    return GetMonitorPosition(monitor);
}

int raylib::Core::getMonitorWidth(int monitor)
{
    return GetMonitorWidth(monitor);
}

int raylib::Core::getMonitorHeight(int monitor)
{
    return GetMonitorHeight(monitor);
}

int raylib::Core::getMonitorPhysicalWidth(int monitor)
{
    return GetMonitorPhysicalWidth(monitor);
}

int raylib::Core::getMonitorPhysicalHeight(int monitor)
{
    return GetMonitorPhysicalHeight(monitor);
}

int raylib::Core::getMonitorRefreshRate(int monitor)
{
    return GetMonitorRefreshRate(monitor);
}

Vector2 raylib::Core::getWindowPosition()
{
    return GetWindowPosition();
}

Vector2 raylib::Core::getWindowScaleDPI()
{
    return GetWindowScaleDPI();
}

std::string raylib::Core::getMonitorName(int monitor)
{
    return GetMonitorName(monitor);
}

void raylib::Core::setClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

std::string raylib::Core::getClipboardText()
{
    return GetClipboardText();
}

// Cursor-related functions

void raylib::Core::showCursor()
{
    ShowCursor();
}

void raylib::Core::hideCursor()
{
    HideCursor();
}

bool raylib::Core::isCursorHidden()
{
    return IsCursorHidden();
}

void raylib::Core::enableCursor()
{
    EnableCursor();
}

void raylib::Core::disableCursor()
{
    DisableCursor();
}

bool raylib::Core::isCursorOnScreen()
{
    return IsCursorOnScreen();
}

// Drawing-related functions

void raylib::Core::clearBackground(Color color)
{
    ClearBackground(color);
}

void raylib::Core::beginDrawing()
{
    BeginDrawing();
}

void raylib::Core::endDrawing()
{
    EndDrawing();
}

void raylib::Core::beginMode2D(Camera2D camera)
{
    BeginMode2D(camera);
}

void raylib::Core::endMode2D()
{
    EndMode2D();
}

void raylib::Core::beginMode3D(Camera3D camera)
{
    BeginMode3D(camera);
}

void raylib::Core::endMode3D()
{
    EndMode3D();
}

void raylib::Core::beginTextureMode(RenderTexture2D target)
{
    BeginTextureMode(target);
}

void raylib::Core::endTextureMode()
{
    EndTextureMode();
}

void raylib::Core::beginShaderMode(Shader shader)
{
    BeginShaderMode(shader);
}

void raylib::Core::endShaderMode()
{
    EndShaderMode();
}

void raylib::Core::beginBlendMode(int mode)
{
    BeginBlendMode(mode);
}

void raylib::Core::endBlendMode()
{
    EndBlendMode();
}

void raylib::Core::beginScissorMode(int x, int y, int width, int height)
{
    BeginScissorMode(x, y, width, height);
}

void raylib::Core::endScissorMode()
{
    EndScissorMode();
}

void raylib::Core::beginVrStereoMode(VrStereoConfig config)
{
    BeginVrStereoMode(config);
}

void raylib::Core::endVrStereoMode()
{
    EndVrStereoMode();
}

// VR stereo config functions for VR simulator

VrStereoConfig raylib::Core::loadVrStereoConfig(VrDeviceInfo device)
{
    return LoadVrStereoConfig(device);
}

void raylib::Core::unloadVrStereoConfig(VrStereoConfig config)
{
    UnloadVrStereoConfig(config);
}

// Shader management functions

Shader raylib::Core::loadShader(const std::string &vsFileName, const std::string &fsFileName)
{
    return LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

Shader raylib::Core::loadShaderFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    return LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

int raylib::Core::getShaderLocation(Shader shader, const std::string &uniformName)
{
    return GetShaderLocation(shader, uniformName.c_str());
}

int raylib::Core::getShaderLocationAttrib(Shader shader, const std::string &attribName)
{
    return GetShaderLocationAttrib(shader, attribName.c_str());
}

void raylib::Core::setShaderValue(Shader shader, int locIndex, const void *value, int uniformType)
{
    SetShaderValue(shader, locIndex, value, uniformType);
}

void raylib::Core::setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count)
{
    SetShaderValueV(shader, locIndex, value, uniformType, count);
}

void raylib::Core::setShaderValueMatrix(Shader shader, int locIndex, Matrix mat)
{
    SetShaderValueMatrix(shader, locIndex, mat);
}

void raylib::Core::setShaderValueTexture(Shader shader, int locIndex, Texture2D texture)
{
    SetShaderValueTexture(shader, locIndex, texture);
}

void raylib::Core::unloadShader(Shader shader)
{
    UnloadShader(shader);
}

// Screen-space-related functions

Ray raylib::Core::getMouseRay(Vector2 mousePosition, Camera camera)
{
    return GetMouseRay(mousePosition, camera);
}

Matrix raylib::Core::getCameraMatrix(Camera camera)
{
    return GetCameraMatrix(camera);
}

Matrix raylib::Core::getCameraMatrix2D(Camera2D camera)
{
    return GetCameraMatrix2D(camera);
}

Vector2 raylib::Core::getWorldToScreen(Vector3 position, Camera camera)
{
    return GetWorldToScreen(position, camera);
}

Vector2 raylib::Core::getWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
{
    return GetWorldToScreenEx(position, camera, width, height);
}

Vector2 raylib::Core::getWorldToScreen2D(Vector2 position, Camera2D camera)
{
    return GetWorldToScreen2D(position, camera);
}

Vector2 raylib::Core::getScreenToWorld2D(Vector2 position, Camera2D camera)
{
    return GetScreenToWorld2D(position, camera);
}

// Timing-related functions

void raylib::Core::setTargetFPS(int fps)
{
    SetTargetFPS(fps);
}

int raylib::Core::getFPS()
{
    return GetFPS();
}

float raylib::Core::getFrameTime()
{
    return GetFrameTime();
}

double raylib::Core::getTime()
{
    return GetTime();
}

// Misc. functions

int raylib::Core::getRandomValue(int min, int max)
{
    return GetRandomValue(min, max);
}

void raylib::Core::setRandomSeed(unsigned int seed)
{
    SetRandomSeed(seed);
}

void raylib::Core::takeScreenshot(const std::string &fileName)
{
    TakeScreenshot(fileName.c_str());
}

void raylib::Core::setConfigFlags(unsigned int flags)
{
    SetConfigFlags(flags);
}

//void raylib::Core::traceLog(int logLevel, const std::string &text, ...)
//{
//    TraceLog(logLevel, text, );
//}

void raylib::Core::setTraceLogLevel(int logLevel)
{
    SetTraceLogLevel(logLevel);
}

void *raylib::Core::memAlloc(int size)
{
    return MemAlloc(size);
}

void *raylib::Core::memRealloc(void *ptr, int size)
{
    return MemRealloc(ptr, size);
}

void raylib::Core::memFree(void *ptr)
{
    MemFree(ptr);
}

// Set custom callbacks

void raylib::Core::setTraceLogCallback(TraceLogCallback callback)
{
    SetTraceLogCallback(callback);
}

void raylib::Core::setLoadFileDataCallback(LoadFileDataCallback callback)
{
    SetLoadFileDataCallback(callback);
}

void raylib::Core::setSaveFileDataCallback(SaveFileDataCallback callback)
{
    SetSaveFileDataCallback(callback);
}

void raylib::Core::setLoadFileTextCallback(LoadFileTextCallback callback)
{
    SetLoadFileTextCallback(callback);
}

void raylib::Core::setSaveFileTextCallback(SaveFileTextCallback callback)
{
    SetSaveFileTextCallback(callback);
}

// Files management functions

unsigned char *raylib::Core::loadFileData(const std::string &fileName, unsigned int *bytesRead)
{
    return LoadFileData(fileName.c_str(), bytesRead);
}

void raylib::Core::unloadFileData(unsigned char *data)
{
    UnloadFileData(data);
}

bool raylib::Core::saveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite)
{
    return SaveFileData(fileName.c_str(), data, bytesToWrite);
}

std::string raylib::Core::loadFileText(const std::string &fileName)
{
    return std::string(LoadFileText(fileName.c_str()));
}

void raylib::Core::unloadFileText(char *text)
{
    UnloadFileText(text);
}

bool raylib::Core::saveFileText(const std::string &fileName, char *text)
{
    return SaveFileText(fileName.c_str(), text);
}

bool raylib::Core::fileExists(const std::string &fileName)
{
    return FileExists(fileName.c_str());
}

bool raylib::Core::directoryExists(const std::string &dirPath)
{
    return DirectoryExists(dirPath.c_str());
}

bool raylib::Core::isFileExtension(const std::string &fileName, const std::string &ext)
{
    return IsFileExtension(fileName.c_str(), ext.c_str());
}

std::string raylib::Core::getFileExtension(const std::string &fileName)
{
    return std::string(GetFileExtension(fileName.c_str()));
}

std::string raylib::Core::getFileName(const std::string &filePath)
{
    return std::string(GetFileName(filePath.c_str()));
}

std::string raylib::Core::getFileNameWithoutExt(const std::string &filePath)
{
    return std::string(GetFileNameWithoutExt(filePath.c_str()));
}

std::string raylib::Core::getDirectoryPath(const std::string &filePath)
{
    return std::string(GetDirectoryPath(filePath.c_str()));
}

std::string raylib::Core::getPrevDirectoryPath(const std::string &dirPath)
{
    return std::string(GetPrevDirectoryPath(dirPath.c_str()));
}

std::string raylib::Core::getWorkingDirectory()
{
    return std::string(GetWorkingDirectory());
}

char **raylib::Core::getDirectoryFiles(const std::string &dirPath, int *count)
{
    return GetDirectoryFiles(dirPath.c_str(), count);
}

void raylib::Core::clearDirectoryFiles()
{
    ClearDirectoryFiles();
}

bool raylib::Core::changeDirectory(const std::string &dir)
{
    return ChangeDirectory(dir.c_str());
}

bool raylib::Core::isFileDropped()
{
    return IsFileDropped();
}

char **raylib::Core::getDroppedFiles(int *count)
{
    return GetDroppedFiles(count);
}

void raylib::Core::clearDroppedFiles()
{
    ClearDroppedFiles();
}

long raylib::Core::getFileModTime(const std::string &fileName)
{
    return GetFileModTime(fileName.c_str());
}

// Compression/Encoding functionality

unsigned char *raylib::Core::compressData(unsigned char *data, int dataLength, int *compDataLength)
{
    return CompressData(data, dataLength, compDataLength);
}

unsigned char *raylib::Core::decompressData(unsigned char *compData, int compDataLength, int *dataLength)
{
    return DecompressData(compData, compDataLength, dataLength);
}

std::string raylib::Core::encodeDataBase64(unsigned char *data, int dataLength, int *outputLength)
{
    return std::string(EncodeDataBase64(data, dataLength, outputLength));
}

unsigned char *raylib::Core::decodeDataBase64(unsigned char *data, int *outputLength)
{
    return DecodeDataBase64(data, outputLength);
}

// Persistent storage management

bool raylib::Core::saveStorageValue(unsigned int position, int value)
{
    return SaveStorageValue(position, value);
}

int raylib::Core::loadStorageValue(unsigned int position)
{
    return LoadStorageValue(position);
}

// Misc.

void raylib::Core::openURL(const std::string &url)
{
    OpenURL(url.c_str());
}

// Input-related functions: keyboard

bool raylib::Core::isKeyPressed(int key)
{
    return IsKeyPressed(key);
}

bool raylib::Core::isKeyDown(int key)
{
    return IsKeyDown(key);
}

bool raylib::Core::isKeyReleased(int key)
{
    return IsKeyReleased(key);
}

bool raylib::Core::isKeyUp(int key)
{
    return IsKeyUp(key);
}

void raylib::Core::setExitKey(int key)
{
    SetExitKey(key);
}

int raylib::Core::getKeyPressed()
{
    return GetKeyPressed();
}

int raylib::Core::getCharPressed()
{
    return GetCharPressed();
}

// Input-related functions: gamepads

bool raylib::Core::isGamepadAvailable(int gamepad)
{
    return IsGamepadAvailable(gamepad);
}

const std::string raylib::Core::getGamepadName(int gamepad)
{
    return std::string(GetGamepadName(gamepad));
}

bool raylib::Core::isGamepadButtonPressed(int gamepad, int button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool raylib::Core::isGamepadButtonDown(int gamepad, int button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool raylib::Core::isGamepadButtonReleased(int gamepad, int button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool raylib::Core::isGamepadButtonUp(int gamepad, int button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int raylib::Core::getGamepadButtonPressed()
{
    return getGamepadButtonPressed();
}

int raylib::Core::getGamepadAxisCount(int gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float raylib::Core::getGamepadAxisMovement(int gamepad, int axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int raylib::Core::setGamepadMappings(const std::string &mappings)
{
    return SetGamepadMappings(mappings.c_str());
}

// Input-related functions: mouse

bool raylib::Core::isMouseButtonPressed(int button)
{
    return IsMouseButtonPressed(button);
}

bool raylib::Core::isMouseButtonDown(int button)
{
    return IsMouseButtonDown(button);
}

bool raylib::Core::isMouseButtonReleased(int button)
{
    return IsMouseButtonReleased(button);
}

bool raylib::Core::isMouseButtonUp(int button)
{
    return IsMouseButtonUp(button);
}

int raylib::Core::getMouseX()
{
    return GetMouseX();
}

int raylib::Core::getMouseY()
{
    return GetMouseY();
}

Vector2 raylib::Core::getMousePosition()
{
    return GetMousePosition();
}

Vector2 raylib::Core::getMouseDelta()
{
    return GetMouseDelta();
}

void raylib::Core::setMousePosition(int x, int y)
{
    SetMousePosition(x, y);
}

void raylib::Core::setMouseOffset(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void raylib::Core::setMouseScale(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float raylib::Core::getMouseWheelMove()
{
    return GetMouseWheelMove();
}

void raylib::Core::setMouseCursor(int cursor)
{
    SetMouseCursor(cursor);
}

// Input-related functions: touch
int raylib::Core::getTouchX()
{
    return GetTouchX();
}

int raylib::Core::getTouchY()
{
    return GetTouchY();
}

Vector2 raylib::Core::getTouchPosition(int index)
{
    return GetTouchPosition(index);
}

int raylib::Core::getTouchPointId(int index)
{
    return GetTouchPointId(index);
}

int raylib::Core::getTouchPointCount()
{
    return GetTouchPointCount();
}

// Gestures and Touch Handling Functions (Module: rgestures)

void raylib::Core::setGesturesEnabled(unsigned int flags)
{
    SetGesturesEnabled(flags);
}

bool raylib::Core::isGestureDetected(int gesture)
{
    return IsGestureDetected(gesture);
}

int raylib::Core::getGestureDetected()
{
    return GetGestureDetected();
}

float raylib::Core::getGestureHoldDuration()
{
    return GetGestureHoldDuration();
}

Vector2 raylib::Core::getGestureDragVector()
{
    return GetGestureDragVector();
}

float raylib::Core::getGestureDragAngle()
{
    return GetGestureDragAngle();
}

Vector2 raylib::Core::getGesturePinchVector()
{
    return GetGesturePinchVector();
}

float raylib::Core::getGesturePinchAngle()
{
    return GetGesturePinchAngle();
}

// Camera System Functions (Module: rcamera)

void raylib::Core::setCameraMode(Camera camera, int mode)
{
    SetCameraMode(camera, mode);
}

void raylib::Core::updateCamera(Camera *camera)
{
    UpdateCamera(camera);
}

void raylib::Core::setCameraPanControl(int keyPan)
{
    SetCameraPanControl(keyPan);
}

void raylib::Core::setCameraAltControl(int keyAlt)
{
    SetCameraAltControl(keyAlt);
}

void raylib::Core::setCameraSmoothZoomControl(int keySmoothZoom)
{
    SetCameraSmoothZoomControl(keySmoothZoom);
}

void raylib::Core::setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
    SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}
