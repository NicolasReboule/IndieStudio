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
        static void initWindow(int width, int height, const std::string &title);              // Initialize window and OpenGL context
        static bool isOpen();                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        static void closeWindow();                                                 // Close window and unload OpenGL context
        static bool isWindowReady();                                               // Check if window has been initialized successfully
        static bool isWindowFullscreen();                                          // Check if window is currently fullscreen
        static bool isWindowHidden();                                              // Check if window is currently hidden (only PLATFORM_DESKTOP)
        static bool isWindowMinimized();                                           // Check if window is currently minimized (only PLATFORM_DESKTOP)
        static bool isWindowMaximized();                                           // Check if window is currently maximized (only PLATFORM_DESKTOP)
        static bool isWindowFocused();                                             // Check if window is currently focused (only PLATFORM_DESKTOP)
        static bool isWindowResized();                                             // Check if window has been resized last frame
        static bool isWindowState(unsigned int flag);                                  // Check if one specific window flag is enabled
        static void setWindowState(unsigned int flags);                                // Set window configuration state using flags
        static void clearWindowState(unsigned int flags);                              // Clear window configuration state flags
        static void toggleFullscreen();                                            // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
        static void maximizeWindow();                                              // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
        static void minimizeWindow();                                              // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
        static void restoreWindow();                                               // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
        static void setWindowIcon(Image image);                                        // Set icon for window (only PLATFORM_DESKTOP)
        static void setWindowTitle(const std::string &title);                                 // Set title for window (only PLATFORM_DESKTOP)
        static void setWindowPosition(int x, int y);                                   // Set window position on screen (only PLATFORM_DESKTOP)
        static void setWindowMonitor(int monitor);                                     // Set monitor for the current window (fullscreen mode)
        static void setWindowMinSize(int width, int height);                           // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
        static void setWindowSize(int width, int height);                              // Set window dimensions
        static std::shared_ptr<void *> getWindowHandle();                                            // Get native window handle
        static int getScreenWidth();                                               // Get current screen width
        static int getScreenHeight();                                              // Get current screen height
        static int getMonitorCount();                                              // Get number of connected monitors
        static int getCurrentMonitor();                                            // Get current connected monitor
        static Vector2 getMonitorPosition(int monitor);                                // Get specified monitor position
        static int getMonitorWidth(int monitor);                                       // Get specified monitor width (max available by monitor)
        static int getMonitorHeight(int monitor);                                      // Get specified monitor height (max available by monitor)
        static int getMonitorPhysicalWidth(int monitor);                               // Get specified monitor physical width in millimetres
        static int getMonitorPhysicalHeight(int monitor);                              // Get specified monitor physical height in millimetres
        static int getMonitorRefreshRate(int monitor);                                 // Get specified monitor refresh rate
        static Vector2 getWindowPosition();                                        // Get window position XY on monitor
        static Vector2 getWindowScaleDPI();                                        // Get window scale DPI factor
        static std::string getMonitorName(int monitor);                                // Get the human-readable, UTF-8 encoded name of the primary monitor
        static void setClipboardText(const std::string &text);                                // Set clipboard text content
        static std::string getClipboardText();                                     // Get clipboard text content

        // Cursor-related functions
        void showCursor();                                                  // Shows cursor
        void hideCursor();                                                  // Hides cursor
        bool isCursorHidden();                                              // Check if cursor is not visible
        void enableCursor();                                                // Enables cursor (unlock cursor)
        void disableCursor();                                               // Disables cursor (lock cursor)
        bool isCursorOnScreen();                                            // Check if cursor is on the screen

        // Drawing-related functions
        void clearBackground(Color color);                                      // Set background color (framebuffer clear color)
        void beginDrawing();                                                // Setup canvas (framebuffer) to start drawing
        void endDrawing();                                                  // End canvas drawing and swap buffers (double buffering)
        void beginMode2D(Camera2D camera);                                      // Begin 2D mode with custom camera (2D)
        void endMode2D();                                                   // Ends 2D mode with custom camera
        void beginMode3D(Camera3D camera);                                      // Begin 3D mode with custom camera (3D)
        void endMode3D();                                                   // Ends 3D mode and returns to default 2D orthographic mode
        void beginTextureMode(RenderTexture2D target);                          // Begin drawing to render texture
        void endTextureMode();                                              // Ends drawing to render texture
        void beginShaderMode(Shader shader);                                    // Begin custom shader drawing
        void endShaderMode();                                               // End custom shader drawing (use default shader)
        void beginBlendMode(int mode);                                          // Begin blending mode (alpha, additive, multiplied, subtract, custom)
        void endBlendMode();                                                // End blending mode (reset to default: alpha blending)
        void beginScissorMode(int x, int y, int width, int height);             // Begin scissor mode (define screen area for following drawing)
        void endScissorMode();                                              // End scissor mode
        void beginVrStereoMode(VrStereoConfig config);                          // Begin stereo rendering (requires VR simulator)
        void endVrStereoMode();                                             // End stereo rendering (requires VR simulator)
//
        // VR stereo config functions for VR simulator
        VrStereoConfig loadVrStereoConfig(VrDeviceInfo device);                 // Load VR stereo config for VR simulator device parameters
        void unloadVrStereoConfig(VrStereoConfig config);                       // Unload VR stereo config
//
//         Shader management functions
        // NOTE: Shader functionality is not available on OpenGL 1.1
        Shader loadShader(const std::string &vsFileName, const std::string &fsFileName);      // Load shader from files and bind default locations
        Shader loadShaderFromMemory(const std::string &vsCode, const std::string &fsCode);    // Load shader from code strings and bind default locations
        int getShaderLocation(Shader shader, const std::string &uniformName);          // Get shader uniform location
        int getShaderLocationAttrib(Shader shader, const std::string &attribName);     // Get shader attribute location
        void setShaderValue(Shader shader, int locIndex, const void *value, int uniformType);               // Set shader uniform value
        void setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count);   // Set shader uniform value vector
        void setShaderValueMatrix(Shader shader, int locIndex, Matrix mat);         // Set shader uniform value (matrix 4x4)
        void setShaderValueTexture(Shader shader, int locIndex, Texture2D texture); // Set shader uniform value for texture (sampler2d)
        void unloadShader(Shader shader);                                       // Unload shader from GPU memory (VRAM)
//
        // Screen-space-related functions
        Ray getMouseRay(Vector2 mousePosition,Camera camera);                  // Get a ray trace from mouse position
        Matrix getCameraMatrix(Camera camera);                                  // Get camera transform matrix (view matrix)
        Matrix getCameraMatrix2D(Camera2D camera);                              // Get camera 2d transform matrix
        Vector2 getWorldToScreen(Vector3 position,Camera camera);              // Get the screen space position for a 3d world space position
        Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height); // Get size position for a 3d world space position
        Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera);          // Get the screen space position for a 2d camera world space position
        Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera);          // Get the world space position for a 2d camera screen space position
//
        // Timing-related functions
        void setTargetFPS(int fps);                                             // Set target FPS (maximum)
        int getFPS();                                                       // Get current FPS
        float getFrameTime();                                               // Get time in seconds for last frame drawn (delta time)
        double getTime();                                                   // Get elapsed time in seconds since InitWindow()
//
        // Misc. functions
        int getRandomValue(int min, int max);                                   // Get a random value between min and max (both included)
        void setRandomSeed(unsigned int seed);                                  // Set the seed for the random number generator
        void takeScreenshot(const std::string &fileName);                              // Takes a screenshot of current screen (filename extension defines format)
        void setConfigFlags(unsigned int flags);                                // Setup init configuration flags (view FLAGS)

//        void traceLog(int logLevel, const std::string &text, ...);                     // Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
        void setTraceLogLevel(int logLevel);                                    // Set the current threshold (minimum) log level
        void *memAlloc(int size);                                               // Internal memory allocator
        void *memRealloc(void *ptr, int size);                                  // Internal memory reallocator
        void memFree(void *ptr);                                                // Internal memory free
//
        // Set custom callbacks
        // WARNING: Callbacks setup is intended for advance users
        void setTraceLogCallback(TraceLogCallback callback);                    // Set custom trace log
        void setLoadFileDataCallback(LoadFileDataCallback callback);            // Set custom file binary data loader
        void setSaveFileDataCallback(SaveFileDataCallback callback);            // Set custom file binary data saver
        void setLoadFileTextCallback(LoadFileTextCallback callback);            // Set custom file text data loader
        void setSaveFileTextCallback(SaveFileTextCallback callback);            // Set custom file text data saver
//
        // Files management functions
        unsigned char *loadFileData(const std::string &fileName, unsigned int *bytesRead);     // Load file data as byte array (read)
        void unloadFileData(unsigned char *data);                               // Unload file data allocated by LoadFileData()
        bool saveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite); // Save data to file from byte array (write), returns true on success
        std::string loadFileText(const std::string &fileName);                               // Load text data from file (read), returns a '\0' terminated string
        void unloadFileText(char *text);                                        // Unload file text data allocated by LoadFileText()
        bool saveFileText(const std::string &fileName, char *text);                    // Save text data to file (write), string must be '\0' terminated, returns true on success
        bool fileExists(const std::string &fileName);                                  // Check if file exists
        bool directoryExists(const std::string &dirPath);                              // Check if a directory path exists
        bool isFileExtension(const std::string &fileName, const std::string &ext);            // Check file extension (including point: .png, .wav)
        std::string getFileExtension(const std::string &fileName);                     // Get pointer to extension for a filename string (includes dot: '.png')
        std::string getFileName(const std::string &filePath);                          // Get pointer to filename for a path string
        std::string getFileNameWithoutExt(const std::string &filePath);                // Get filename string without extension (uses static string)
        std::string getDirectoryPath(const std::string &filePath);                     // Get full path for a given fileName with path (uses static string)
        std::string getPrevDirectoryPath(const std::string &dirPath);                  // Get previous directory path for a given path (uses static string)
        std::string getWorkingDirectory();                                  // Get current working directory (uses static string)
        char **getDirectoryFiles(const std::string &dirPath,int *count);              // Get filenames in a directory path (memory should be freed)
        void clearDirectoryFiles();                                         // Clear directory files paths buffers (free memory)
        bool changeDirectory(const std::string &dir);                                  // Change working directory, return true on success
        bool isFileDropped();                                               // Check if a file has been dropped into window
        char **getDroppedFiles(int *count);                                     // Get dropped files names (memory should be freed)
        void clearDroppedFiles();                                           // Clear dropped files paths buffer (free memory)
        long getFileModTime(const std::string &fileName);                              // Get file modification time (last write time)
        //
        // Compression/Encoding functionality
        unsigned char *compressData(unsigned char *data, int dataLength, int *compDataLength);        // Compress data (DEFLATE algorithm)
        unsigned char *decompressData(unsigned char *compData, int compDataLength, int *dataLength);  // Decompress data (DEFLATE algorithm)
        std::string EncodeDataBase64(const unsigned char *data, int dataLength,int *outputLength);         // Encode data to Base64 string
        unsigned char *decodeDataBase64(unsigned char *data, int *outputLength);                      // Decode Base64 string data
//
        // Persistent <storage management
        bool saveStorageValue(unsigned int position,int value);                // Save integer value to storage file (to defined position), returns true on success
        int loadStorageValue(unsigned int position); >                           // Load integer value from storage file (from defined position)
//
        // Misc.
        void openURL(const std::string &url);                                          // Open URL with default system browser (if available)
//
        // Input-related functions: keyboard
        bool isKeyPressed(int key);                                             // Check if a key has been pressed once
        bool isKeyDown(int key);                                                // Check if a key is being pressed
        bool isKeyReleased(int key);                                            // Check if a key has been released once
        bool isKeyUp(int key);                                                  // Check if a key is NOT being pressed
        void setExitKey(int key);                                               // Set a custom key to exit program (default is ESC)
        int getKeyPressed();                                                // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
        int getCharPressed();                                               // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
//
        // Input-related functions: gamepads
        bool isGamepadAvailable(int gamepad);                                   // Check if a gamepad is available
        const std::string getGamepadName(int gamepad);                                // Get gamepad internal name id
        bool isGamepadButtonPressed(int gamepad, int button);                   // Check if a gamepad button has been pressed once
        bool isGamepadButtonDown(int gamepad,int button);                      // Check if a gamepad button is being pressed
        bool isGamepadButtonReleased(int gamepad, int button);                  // Check if a gamepad button has been released once
        bool isGamepadButtonUp(int gamepad,int button);                        // Check if a gamepad button is NOT being pressed
        int getGamepadButtonPressed();                                      // Get the last gamepad button pressed
        int getGamepadAxisCount(int gamepad);                                   // Get gamepad axis count for a gamepad
        float getGamepadAxisMovement(int gamepad, int axis);                    // Get axis movement value for a gamepad axis
        int setGamepadMappings(const std::string &mappings);                           // Set internal gamepad mappings (SDL_GameControllerDB)
//
        // Input-related functions: mouse
        bool isMouseButtonPressed(int button);                                  // Check if a mouse button has been pressed once
        bool isMouseButtonDown(int button);                                     // Check if a mouse button is being pressed
        bool isMouseButtonReleased(int button);                                 // Check if a mouse button has been released once
        bool isMouseButtonUp(int button);                                       // Check if a mouse button is NOT being pressed
        int getMouseX();                                                    // Get mouse position X
        int getMouseY();                                                    // Get mouse position Y
        Vector2 getMousePosition();                                         // Get mouse position XY
        Vector2 getMouseDelta();                                            // Get mouse delta between frames
        void setMousePosition(int x, int y);                                    // Set mouse position XY
        void setMouseOffset(int offsetX, int offsetY);                          // Set mouse offset
        void setMouseScale(float scaleX, float scaleY);                         // Set mouse scaling
        float getMouseWheelMove();                                          // Get mouse wheel movement Y
        void setMouseCursor(int cursor);                                        // Set mouse cursor
//
        // Input-related functions: touch
        int getTouchX();                                                    // Get touch position X for touch point 0 (relative to screen size)
        int getTouchY();                                                    // Get touch position Y for touch point 0 (relative to screen size)
        Vector2 getTouchPosition(int index);                                    // Get touch position XY for a touch point index (relative to screen size)
        int getTouchPointId(int index);                                         // Get touch point identifier for given index
        int getTouchPointCount();                                           // Get number of touch points
//
        // Gestures and Touch Handling Functions (Module: rgestures)
        void setGesturesEnabled(unsigned int flags);                            // Enable a set of gestures using flags
        bool isGestureDetected(int gesture);                                    // Check if a gesture have been detected
        int getGestureDetected();                                           // Get latest detected gesture
        float getGestureHoldDuration();                                     // Get gesture hold time in milliseconds
        Vector2 getGestureDragVector();                                     // Get gesture drag vector
        float getGestureDragAngle();                                        // Get gesture drag angle
        Vector2 getGesturePinchVector();                                    // Get gesture pinch delta
        float getGesturePinchAngle();                                       // Get gesture pinch angle
//
        // Camera System Functions (Module: rcamera)
        void setCameraMode(Camera camera, int mode);                            // Set camera mode (multiple camera modes available)
        void updateCamera(Camera *camera);                                      // Update camera position for selected mode

        void setCameraPanControl(int keyPan);                                   // Set camera pan key to combine with mouse movement (free camera)
        void setCameraAltControl(int keyAlt);                                   // Set camera alt key to combine with mouse movement (free camera)
        void setCameraSmoothZoomControl(int keySmoothZoom);                     // Set camera smooth zoom key to combine with mouse (free camera)
        void setCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown); // Set camera move controls (1st person and 3rd person cameras)
    private:
    };
}

#endif //INDIESTUDIO_CORE_HPP
