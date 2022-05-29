/*
** EPITECH PROJECT, 2022
** Core.hpp
** File description:
** Core.hpp
*/

#ifndef INDIESTUDIO_CORE_HPP
#define INDIESTUDIO_CORE_HPP

#include <raylib.h>
#include <string>
#include <memory>

namespace raylib {

    class Core {
    public:

        // Window-related functions
        static void initWindow(int width, int height, const char *title);              // Initialize window and OpenGL context
        static bool windowShouldClose(void);                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        static void closeWindow(void);                                                 // Close window and unload OpenGL context
        static bool isWindowReady(void);                                               // Check if window has been initialized successfully
        static bool isWindowFullscreen(void);                                          // Check if window is currently fullscreen
        static bool isWindowHidden(void);                                              // Check if window is currently hidden (only PLATFORM_DESKTOP)
        static bool isWindowMinimized(void);                                           // Check if window is currently minimized (only PLATFORM_DESKTOP)
        static bool isWindowMaximized(void);                                           // Check if window is currently maximized (only PLATFORM_DESKTOP)
        static bool isWindowFocused(void);                                             // Check if window is currently focused (only PLATFORM_DESKTOP)
        static bool isWindowResized(void);                                             // Check if window has been resized last frame
        static bool isWindowState(unsigned int flag);                                  // Check if one specific window flag is enabled
        static void setWindowState(unsigned int flags);                                // Set window configuration state using flags
        static void clearWindowState(unsigned int flags);                              // Clear window configuration state flags
        static void toggleFullscreen(void);                                            // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
        static void maximizeWindow(void);                                              // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
        static void minimizeWindow(void);                                              // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
        static void restoreWindow(void);                                               // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
        static void setWindowIcon(Image image);                                        // Set icon for window (only PLATFORM_DESKTOP)
        static void setWindowTitle(const std::string &title);                                 // Set title for window (only PLATFORM_DESKTOP)
        static void setWindowPosition(int x, int y);                                   // Set window position on screen (only PLATFORM_DESKTOP)
        static void setWindowMonitor(int monitor);                                     // Set monitor for the current window (fullscreen mode)
        static void setWindowMinSize(int width, int height);                           // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
        static void setWindowSize(int width, int height);                              // Set window dimensions
        static std::shared_ptr<void *> getWindowHandle(void);                                            // Get native window handle
        static int getScreenWidth(void);                                               // Get current screen width
        static int getScreenHeight(void);                                              // Get current screen height
        static int getMonitorCount(void);                                              // Get number of connected monitors
        static int getCurrentMonitor(void);                                            // Get current connected monitor
        static Vector2 getMonitorPosition(int monitor);                                // Get specified monitor position
        static int getMonitorWidth(int monitor);                                       // Get specified monitor width (max available by monitor)
        static int getMonitorHeight(int monitor);                                      // Get specified monitor height (max available by monitor)
        static int getMonitorPhysicalWidth(int monitor);                               // Get specified monitor physical width in millimetres
        static int getMonitorPhysicalHeight(int monitor);                              // Get specified monitor physical height in millimetres
        static int getMonitorRefreshRate(int monitor);                                 // Get specified monitor refresh rate
        static Vector2 getWindowPosition(void);                                        // Get window position XY on monitor
        static Vector2 getWindowScaleDPI(void);                                        // Get window scale DPI factor
        static std::string getMonitorName(int monitor);                                // Get the human-readable, UTF-8 encoded name of the primary monitor
        static void setClipboardText(const std::string &text);                                // Set clipboard text content
        static std::string getClipboardText(void);                                     // Get clipboard text content

//        // Cursor-related functions
//        void showCursor(void);                                                  // Shows cursor
//        void HideCursor(void);                                                  // Hides cursor
//        bool IsCursorHidden(void);                                              // Check if cursor is not visible
//        void EnableCursor(void);                                                // Enables cursor (unlock cursor)
//        void DisableCursor(void);                                               // Disables cursor (lock cursor)
//        bool IsCursorOnScreen(void);                                            // Check if cursor is on the screen
//
//        // Drawing-related functions
//        void clearBackground(Color color);                                      // Set background color (framebuffer clear color)
//        void BeginDrawing(void);                                                // Setup canvas (framebuffer) to start drawing
//        void EndDrawing(void);                                                  // End canvas drawing and swap buffers (double buffering)
//        void BeginMode2D(Camera2D camera);                                      // Begin 2D mode with custom camera (2D)
//        void EndMode2D(void);                                                   // Ends 2D mode with custom camera
//        void BeginMode3D(Camera3D camera);                                      // Begin 3D mode with custom camera (3D)
//        void EndMode3D(void);                                                   // Ends 3D mode and returns to default 2D orthographic mode
//        void BeginTextureMode(RenderTexture2D target);                          // Begin drawing to render texture
//        void EndTextureMode(void);                                              // Ends drawing to render texture
//        void BeginShaderMode(Shader shader);                                    // Begin custom shader drawing
//        void EndShaderMode(void);                                               // End custom shader drawing (use default shader)
//        void BeginBlendMode(int mode);                                          // Begin blending mode (alpha, additive, multiplied, subtract, custom)
//        void EndBlendMode(void);                                                // End blending mode (reset to default: alpha blending)
//        void BeginScissorMode(int x, int y, int width, int height);             // Begin scissor mode (define screen area for following drawing)
//        void EndScissorMode(void);                                              // End scissor mode
//        void BeginVrStereoMode(VrStereoConfig config);                          // Begin stereo rendering (requires VR simulator)
//        void EndVrStereoMode(void);                                             // End stereo rendering (requires VR simulator)
//
//        // VR stereo config functions for VR simulator
//        VrStereoConfig LoadVrStereoConfig(VrDeviceInfo device);                 // Load VR stereo config for VR simulator device parameters
//        void UnloadVrStereoConfig(VrStereoConfig config);                       // Unload VR stereo config
//
//        // Shader management functions
//        // NOTE: Shader functionality is not available on OpenGL 1.1
//        Shader LoadShader(const char *vsFileName, const char *fsFileName);      // Load shader from files and bind default locations
//        Shader LoadShaderFromMemory(const char *vsCode, const char *fsCode);    // Load shader from code strings and bind default locations
//        int getShaderLocation(Shader shader, const char *uniformName);          // Get shader uniform location
//        int getShaderLocationAttrib(Shader shader, const char *attribName);     // Get shader attribute location
//        void setShaderValue(Shader shader, int locIndex, const void *value, int uniformType);               // Set shader uniform value
//        void setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count);   // Set shader uniform value vector
//        void setShaderValueMatrix(Shader shader, int locIndex, Matrix mat);         // Set shader uniform value (matrix 4x4)
//        void setShaderValueTexture(Shader shader, int locIndex, Texture2D texture); // Set shader uniform value for texture (sampler2d)
//        void UnloadShader(Shader shader);                                       // Unload shader from GPU memory (VRAM)
//
//        // Screen-space-related functions
//        Ray GetMouseRay(Vector2 mousePosition,Camera camera);                  // Get a ray trace from mouse position
//        Matrix GetCameraMatrix(Camera camera);                                  // Get camera transform matrix (view matrix)
//        Matrix GetCameraMatrix2D(Camera2D camera);                              // Get camera 2d transform matrix
//        Vector2 getWorldToScreen(Vector3 position,Camera camera);              // Get the screen space position for a 3d world space position
//        Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height); // Get size position for a 3d world space position
//        Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera);          // Get the screen space position for a 2d camera world space position
//        Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera);          // Get the world space position for a 2d camera screen space position
//
//        // Timing-related functions
//        void setTargetFPS(int fps);                                             // Set target FPS (maximum)
//        int getFPS(void);                                                       // Get current FPS
//        float GetFrameTime(void);                                               // Get time in seconds for last frame drawn (delta time)
//        double GetTime(void);                                                   // Get elapsed time in seconds since InitWindow()
//
//        // Misc. functions
//        int getRandomValue(int min, int max);                                   // Get a random value between min and max (both included)
//        void setRandomSeed(unsigned int seed);                                  // Set the seed for the random number generator
//        void takeScreenshot(const char *fileName);                              // Takes a screenshot of current screen (filename extension defines format)
//        void setConfigFlags(unsigned int flags);                                // Setup init configuration flags (view FLAGS)
//
//        void traceLog(int logLevel, const char *text, ...);                     // Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
//        void setTraceLogLevel(int logLevel);                                    // Set the current threshold (minimum) log level
//        void *MemAlloc(int size);                                               // Internal memory allocator
//        void *MemRealloc(void *ptr, int size);                                  // Internal memory reallocator
//        void memFree(void *ptr);                                                // Internal memory free
//
//        // Set custom callbacks
//        // WARNING: Callbacks setup is intended for advance users
//        void setTraceLogCallback(TraceLogCallback callback);                    // Set custom trace log
//        void setLoadFileDataCallback(LoadFileDataCallback callback);            // Set custom file binary data loader
//        void setSaveFileDataCallback(SaveFileDataCallback callback);            // Set custom file binary data saver
//        void setLoadFileTextCallback(LoadFileTextCallback callback);            // Set custom file text data loader
//        void setSaveFileTextCallback(SaveFileTextCallback callback);            // Set custom file text data saver
//
//        // Files management functions
//        unsigned char *LoadFileData(const char *fileName, unsigned int *bytesRead);     // Load file data as byte array (read)
//        void UnloadFileData(unsigned char *data);                               // Unload file data allocated by LoadFileData()
//        bool SaveFileData(const char *fileName, void *data, unsigned int bytesToWrite); // Save data to file from byte array (write), returns true on success
//        char *LoadFileText(const char *fileName);                               // Load text data from file (read), returns a '\0' terminated string
//        void UnloadFileText(char *text);                                        // Unload file text data allocated by LoadFileText()
//        bool SaveFileText(const char *fileName, char *text);                    // Save text data to file (write), string must be '\0' terminated, returns true on success
//        bool FileExists(const char *fileName);                                  // Check if file exists
//        bool DirectoryExists(const char *dirPath);                              // Check if a directory path exists
//        bool IsFileExtension(const char *fileName, const char *ext);            // Check file extension (including point: .png, .wav)
//        const char *getFileExtension(const char *fileName);                     // Get pointer to extension for a filename string (includes dot: '.png')
//        const char *getFileName(const char *filePath);                          // Get pointer to filename for a path string
//        const char *getFileNameWithoutExt(const char *filePath);                // Get filename string without extension (uses static string)
//        const char *getDirectoryPath(const char *filePath);                     // Get full path for a given fileName with path (uses static string)
//        const char *getPrevDirectoryPath(const char *dirPath);                  // Get previous directory path for a given path (uses static string)
//        const char *getWorkingDirectory(void);                                  // Get current working directory (uses static string)
//        char **GetDirectoryFiles(const char *dirPath,int *count);              // Get filenames in a directory path (memory should be freed)
//        void clearDirectoryFiles(void);                                         // Clear directory files paths buffers (free memory)
//        bool ChangeDirectory(const char *dir);                                  // Change working directory, return true on success
//        bool IsFileDropped(void);                                               // Check if a file has been dropped into window
//        char **GetDroppedFiles(int *count);                                     // Get dropped files names (memory should be freed)
//        void clearDroppedFiles(void);                                           // Clear dropped files paths buffer (free memory)
//        long GetFileModTime(const char *fileName);                              // Get file modification time (last write time)
//
//        // Compression/Encoding functionality
//        unsigned char *CompressData(unsigned char *data, int dataLength, int *compDataLength);        // Compress data (DEFLATE algorithm)
//        unsigned char *DecompressData(unsigned char *compData, int compDataLength, int *dataLength);  // Decompress data (DEFLATE algorithm)
//        char *EncodeDataBase64(const unsigned char *data, int dataLength,int *outputLength);         // Encode data to Base64 string
//        unsigned char *DecodeDataBase64(unsigned char *data,int *outputLength);                      // Decode Base64 string data
//
//        // Persistent storage management
//        bool SaveStorageValue(unsigned int position,int value);                // Save integer value to storage file (to defined position), returns true on success
//        int LoadStorageValue(unsigned int position);                            // Load integer value from storage file (from defined position)
//
//        // Misc.
//        void OpenURL(const char *url);                                          // Open URL with default system browser (if available)
//
//        // Input-related functions: keyboard
//        bool IsKeyPressed(int key);                                             // Check if a key has been pressed once
//        bool IsKeyDown(int key);                                                // Check if a key is being pressed
//        bool IsKeyReleased(int key);                                            // Check if a key has been released once
//        bool IsKeyUp(int key);                                                  // Check if a key is NOT being pressed
//        void setExitKey(int key);                                               // Set a custom key to exit program (default is ESC)
//        int getKeyPressed(void);                                                // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
//        int getCharPressed(void);                                               // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
//
//        // Input-related functions: gamepads
//        bool IsGamepadAvailable(int gamepad);                                   // Check if a gamepad is available
//        const char *getGamepadName(int gamepad);                                // Get gamepad internal name id
//        bool IsGamepadButtonPressed(int gamepad, int button);                   // Check if a gamepad button has been pressed once
//        bool IsGamepadButtonDown(int gamepad,int button);                      // Check if a gamepad button is being pressed
//        bool IsGamepadButtonReleased(int gamepad, int button);                  // Check if a gamepad button has been released once
//        bool IsGamepadButtonUp(int gamepad,int button);                        // Check if a gamepad button is NOT being pressed
//        int getGamepadButtonPressed(void);                                      // Get the last gamepad button pressed
//        int getGamepadAxisCount(int gamepad);                                   // Get gamepad axis count for a gamepad
//        float GetGamepadAxisMovement(int gamepad, int axis);                    // Get axis movement value for a gamepad axis
//        int SetGamepadMappings(const char *mappings);                           // Set internal gamepad mappings (SDL_GameControllerDB)
//
//        // Input-related functions: mouse
//        bool IsMouseButtonPressed(int button);                                  // Check if a mouse button has been pressed once
//        bool IsMouseButtonDown(int button);                                     // Check if a mouse button is being pressed
//        bool IsMouseButtonReleased(int button);                                 // Check if a mouse button has been released once
//        bool IsMouseButtonUp(int button);                                       // Check if a mouse button is NOT being pressed
//        int getMouseX(void);                                                    // Get mouse position X
//        int getMouseY(void);                                                    // Get mouse position Y
//        Vector2 getMousePosition(void);                                         // Get mouse position XY
//        Vector2 getMouseDelta(void);                                            // Get mouse delta between frames
//        void setMousePosition(int x, int y);                                    // Set mouse position XY
//        void setMouseOffset(int offsetX, int offsetY);                          // Set mouse offset
//        void setMouseScale(float scaleX, float scaleY);                         // Set mouse scaling
//        float GetMouseWheelMove(void);                                          // Get mouse wheel movement Y
//        void setMouseCursor(int cursor);                                        // Set mouse cursor
//
//        // Input-related functions: touch
//        int getTouchX(void);                                                    // Get touch position X for touch point 0 (relative to screen size)
//        int getTouchY(void);                                                    // Get touch position Y for touch point 0 (relative to screen size)
//        Vector2 getTouchPosition(int index);                                    // Get touch position XY for a touch point index (relative to screen size)
//        int getTouchPointId(int index);                                         // Get touch point identifier for given index
//        int getTouchPointCount(void);                                           // Get number of touch points
//
//        // Gestures and Touch Handling Functions (Module: rgestures)
//        void setGesturesEnabled(unsigned int flags);                            // Enable a set of gestures using flags
//        bool IsGestureDetected(int gesture);                                    // Check if a gesture have been detected
//        int getGestureDetected(void);                                           // Get latest detected gesture
//        float GetGestureHoldDuration(void);                                     // Get gesture hold time in milliseconds
//        Vector2 getGestureDragVector(void);                                     // Get gesture drag vector
//        float GetGestureDragAngle(void);                                        // Get gesture drag angle
//        Vector2 getGesturePinchVector(void);                                    // Get gesture pinch delta
//        float GetGesturePinchAngle(void);                                       // Get gesture pinch angle
//
//        // Camera System Functions (Module: rcamera)
//        void setCameraMode(Camera camera, int mode);                            // Set camera mode (multiple camera modes available)
//        void UpdateCamera(Camera *camera);                                      // Update camera position for selected mode
//
//        void setCameraPanControl(int keyPan);                                   // Set camera pan key to combine with mouse movement (free camera)
//        void setCameraAltControl(int keyAlt);                                   // Set camera alt key to combine with mouse movement (free camera)
//        void setCameraSmoothZoomControl(int keySmoothZoom);                     // Set camera smooth zoom key to combine with mouse (free camera)
//        void setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown); // Set camera move controls (1st person and 3rd person cameras)
    private:
    };
}

#endif //INDIESTUDIO_CORE_HPP
