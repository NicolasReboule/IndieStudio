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
        // VR stereo config functions for VR simulator
        static VrStereoConfig loadVrStereoConfig(VrDeviceInfo device);                 // Load VR stereo config for VR simulator device parameters
        static void unloadVrStereoConfig(VrStereoConfig config);                       // Unload VR stereo config

        // Screen-space-related functions
        static Ray getMouseRay(Vector2 mousePosition,Camera camera);                  // Get a ray trace from mouse position
        static Matrix getCameraMatrix(Camera camera);                                  // Get camera transform matrix (view matrix)
        static Matrix getCameraMatrix2D(Camera2D camera);                              // Get camera 2d transform matrix
        static Vector2 getWorldToScreen(Vector3 position,Camera camera);              // Get the screen space position for a 3d world space position
        static Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height); // Get size position for a 3d world space position
        static Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera);          // Get the screen space position for a 2d camera world space position
        static Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera);          // Get the world space position for a 2d camera screen space position

        // Timing-related functions
        static void setTargetFPS(int fps);                                             // Set target FPS (maximum)
        static int getFPS();                                                       // Get current FPS
        static float getFrameTime();                                               // Get time in seconds for last frame drawn (delta time)
        static double getTime();                                                   // Get elapsed time in seconds since InitWindow()

        // Misc. functions
        static int getRandomValue(int min, int max);                                   // Get a random value between min and max (both included)
        static void setRandomSeed(unsigned int seed);                                  // Set the seed for the random number generator
        static void takeScreenshot(const std::string &fileName);                              // Takes a screenshot of current screen (filename extension defines format)
        static void setConfigFlags(unsigned int flags);                                // Setup init configuration flags (view FLAGS)

//        void traceLog(int logLevel, const std::string &text, ...);                     // Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...)
        static void setTraceLogLevel(int logLevel);                                    // Set the current threshold (minimum) log level
        static void *memAlloc(int size);                                               // Internal memory allocator
        static void *memRealloc(void *ptr, int size);                                  // Internal memory reallocator
        static void memFree(void *ptr);                                                // Internal memory free

        // Set custom callbacks
        // WARNING: Callbacks setup is intended for advance users
        static void setTraceLogCallback(TraceLogCallback callback);                    // Set custom trace log
        static void setLoadFileDataCallback(LoadFileDataCallback callback);            // Set custom file binary data loader
        static void setSaveFileDataCallback(SaveFileDataCallback callback);            // Set custom file binary data saver
        static void setLoadFileTextCallback(LoadFileTextCallback callback);            // Set custom file text data loader
        static void setSaveFileTextCallback(SaveFileTextCallback callback);            // Set custom file text data saver

        // Files management functions
        static unsigned char *loadFileData(const std::string &fileName, unsigned int *bytesRead);     // Load file data as byte array (read)
        static void unloadFileData(unsigned char *data);                               // Unload file data allocated by LoadFileData()
        static bool saveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite); // Save data to file from byte array (write), returns true on success
        static std::string loadFileText(const std::string &fileName);                               // Load text data from file (read), returns a '\0' terminated string
        static void unloadFileText(char *text);                                        // Unload file text data allocated by LoadFileText()
        static bool saveFileText(const std::string &fileName, char *text);                    // Save text data to file (write), string must be '\0' terminated, returns true on success
        static bool fileExists(const std::string &fileName);                                  // Check if file exists
        static bool directoryExists(const std::string &dirPath);                              // Check if a directory path exists
        static bool isFileExtension(const std::string &fileName, const std::string &ext);            // Check file extension (including point: .png, .wav)
        static std::string getFileExtension(const std::string &fileName);                     // Get pointer to extension for a filename string (includes dot: '.png')
        static std::string getFileName(const std::string &filePath);                          // Get pointer to filename for a path string
        static std::string getFileNameWithoutExt(const std::string &filePath);                // Get filename string without extension (uses static string)
        static std::string getDirectoryPath(const std::string &filePath);                     // Get full path for a given fileName with path (uses static string)
        static std::string getPrevDirectoryPath(const std::string &dirPath);                  // Get previous directory path for a given path (uses static string)
        static std::string getWorkingDirectory();                                  // Get current working directory (uses static string)
        static char **getDirectoryFiles(const std::string &dirPath,int *count);              // Get filenames in a directory path (memory should be freed)
        static void clearDirectoryFiles();                                         // Clear directory files paths buffers (free memory)
        static bool changeDirectory(const std::string &dir);                                  // Change working directory, return true on success
        static bool isFileDropped();                                               // Check if a file has been dropped into window
        static char **getDroppedFiles(int *count);                                     // Get dropped files names (memory should be freed)
        static void clearDroppedFiles();                                           // Clear dropped files paths buffer (free memory)
        static long getFileModTime(const std::string &fileName);                              // Get file modification time (last write time)

        // Compression/Encoding functionality
        static unsigned char *compressData(unsigned char *data, int dataLength, int *compDataLength);        // Compress data (DEFLATE algorithm)
        static unsigned char *decompressData(unsigned char *compData, int compDataLength, int *dataLength);  // Decompress data (DEFLATE algorithm)
        static std::string encodeDataBase64(unsigned char *data, int dataLength,int *outputLength);         // Encode data to Base64 string
        static unsigned char *decodeDataBase64(unsigned char *data, int *outputLength);                      // Decode Base64 string data

        // Persistent <storage management
        static bool saveStorageValue(unsigned int position,int value);                // Save integer value to storage file (to defined position), returns true on success
        static int loadStorageValue(unsigned int position);                           // Load integer value from storage file (from defined position)

        // Misc.
        static void openURL(const std::string &url);                                          // Open URL with default system browser (if available)
    private:
    };
}

#endif //INDIESTUDIO_CORE_HPP
