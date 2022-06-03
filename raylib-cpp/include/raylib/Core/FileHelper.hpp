/*
** EPITECH PROJECT, 2022
** FileHelper.hpp
** FileHelper description:
** FileHelper.hpp
*/

#ifndef INDIESTUDIO_FILEHELPER_HPP
#define INDIESTUDIO_FILEHELPER_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class FileHelper {
    public:
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

    private:
    };
}

#endif //INDIESTUDIO_FILEHELPER_HPP
