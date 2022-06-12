/*
** EPITECH PROJECT, 2022
** RlWave.hpp
** FileHelper description:
** RlWave.hpp
*/

#ifndef INDIESTUDIO_RLWAVE_HPP
#define INDIESTUDIO_RLWAVE_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class RlWave {
    public:
        // Wave/RlSound loading/unloading functions
        Wave loadWave(const std::string &fileName);                                            // Load wave data from file
        Wave loadWaveFromMemory(const std::string &fileType, const unsigned char *fileData, int dataSize); // Load wave from memory buffer         // Load sound from wave data
        void unloadWave(Wave wave);                                                     // Unload wave data
        bool exportWave(Wave wave, const std::string &fileName);                               // Export wave data to file, returns true on success
        bool exportWaveAsCode(Wave wave, const std::string &fileName);                         // Export wave sample data to code (.h), returns true on success
    private:
    };
}

#endif //INDIESTUDIO_RLWAVE_HPP
