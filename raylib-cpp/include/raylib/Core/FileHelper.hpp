/*
** EPITECH PROJECT, 2022
** FileHelper.hpp
** FileHelper description:
** FileHelper.hpp
*/

#ifndef INDIESTUDIO_FILEHELPER_HPP
#define INDIESTUDIO_FILEHELPER_HPP

#include <raylib.h>
#include <string>
#include <fstream>
#include <vector>
#include <filesystem>
#include <concepts>
#include <functional>

namespace raylib {
    /**
     * @brief Files management functions
     */
    class FileHelper {
    public:
        /**
         * @brief Load file data as byte array (read)
         * @param fileName the file name
         * @param bytesRead the number of bytes read
         * @return the byte array
         */
        static std::vector<unsigned char> loadFileData(const std::string &fileName);

        /**
         * @brief Load text data from file (read),
         * @param fileName the file name
         * @return the text data
         */
        static std::string loadFileText(const std::string &fileName);

        /**
         * @brief Save text data to file (write)
         * @param fileName the file name
         * @param text the text data
         * @return true on success
         */
        static bool saveFileText(const std::string &fileName, const std::string &text);

        /**
         * @brief Check if file exists
         * @param fileName the file name
         * @return true if file exists
         */
        static bool fileExists(const std::string &fileName);

        /**
         * @brief Check if directory exists
         * @param dirPath the directory path
         * @return true if directory exists
         */
        static bool directoryExists(const std::string &dirPath);

        /**
         * @brief Check if file extension is valid
         * @param fileName the file name
         * @param ext the extension
         * @return true if file extension is valid
         */
        static bool isFileExtension(const std::string &fileName, const std::string &ext);

        /**
         * @brief Get file extension
         * @param fileName the file name
         * @return the file extension
         */
        static std::string getFileExtension(const std::string &fileName);

        /**
         * @brief Get file name
         * @param filePath the file path
         * @return the file name
         */
        static std::string getFileName(const std::string &filePath);

        /**
         * @brief Get file name without extension
         * @param filePath the file path
         * @return the file name without extension
         */
        static std::string getFileNameWithoutExt(const std::string &filePath);

        /**
         * @brief Get directory path
         * @param filePath the file path
         * @return the directory path
         */
        static std::string getDirectoryPath(const std::string &filePath);

        /**
         * @brief Get previous directory path
         * @param dirPath the directory path
         * @return the previous directory path
         */
        static std::string getPrevDirectoryPath(const std::string &dirPath);

        /**
         * @brief Get working directory
         * @return the working directory
         */
        static std::string getWorkingDirectory();

        /**
         * @brief Get all files in directory
         * @param dirPath the directory path
         * @param count the number of files
         * @return the files
         */
        static std::vector<std::string> getDirectoryFiles(const std::string &dirPath);

        /**
         * @brief Get all files in directory with a filter
         * @param dirPath the directory path
         * @param filterFunction the filter function to apply (true to keep file)
         * If null, all files are kept
         * @return the files
         */
        static std::vector<std::string> getDirectoryFiles(const std::string &dirPath, const std::function<bool(const std::string &fileName)> &filterFunction);

        /**
         * @brief Change working directory
         * @param dir the directory
         * @return true on success
         */
        static void changeDirectory(const std::string &dir);

        /**
         * @brief Check if a file has been dropped on the window
         * @return true if a file has been dropped on the window
         */
        static bool isFileDropped();

        /**
         * @brief Get dropped files paths
         * @return the dropped files paths
         */
        static std::vector<std::string> getDroppedFiles();

        /**
         * @brief Get file modification time (last write time)
         * @param fileName the file name
         * @return the file modification time
         */
        static long long getFileModTime(const std::string &fileName);

    };
}

#endif //INDIESTUDIO_FILEHELPER_HPP
