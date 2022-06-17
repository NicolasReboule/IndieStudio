/*
** EPITECH PROJECT, 2022
** RlWave.hpp
** FileHelper description:
** RlWave.hpp
*/

#ifndef INDIESTUDIO_RLWAVE_HPP
#define INDIESTUDIO_RLWAVE_HPP

#include "raylib/Audio/RlSound.hpp"
#include <raylib.h>
#include <string>
#include <vector>

namespace raylib::audio {
    /**
     * @brief Encapsulation of the raylib Wave
     */
    class RlWave {
    public:
        /**
         * @brief Default constructor
         */
        RlWave() : _wave(), _samplesPtr(nullptr) {}

        /**
         * @brief Construct a new RlWave object from the raylib wave
         * @param wave the raylib wave
         */
        explicit RlWave(const Wave &wave);

        /**
         * @brief Construct a new RlWave object
         * @param path the path of the wave (.wav)
         */
        explicit RlWave(const std::string &path);

        /**
         * @brief Construct a new RlWave object
         * @param fileType the type of the wave
         * @param fileData the data of the wave
         * @param dataSize the size of the data
         * Please don't use this, I don't like raw pointer
         */
        explicit RlWave(const std::string &fileType, const unsigned char *fileData, int dataSize);

        /**
         * @brief Destroy the RlWave object
         */
        ~RlWave();

        /**
         * @brief Get the raylib wave
         * @return the raylib wave
         */
        Wave &getWave();

        /**
         * @brief Get the raylib wave
         * @return the raylib wave
         */
        const Wave &getWave() const;

        /**
         * @brief Export wave data to file
         * @param fileName the name of the file
         * @return true if the wave has been exported
         */
        bool exportWave(const std::string &fileName);

        /**
         * @brief Export wave sample data to code (.h)
         * @param fileName the name of the file
         * @return true if the wave has been exported
         */
        bool exportWaveAsCode(const std::string &fileName);

        /**
         * @brief Create a RlSound from the wave
         * @return the RlSound
         */
        raylib::audio::RlSound toSound() const;

        /**
         * @brief Convert wave data to desired format
         * @param sampleRate the sample rate
         * @param sampleSize the sample size
         * @param channels the number of channels
         */
        void format(const int &sampleRate, const int &sampleSize, const int &channels);

        /**
         * @brief Copy the RlWave
         * @return the RlWave
         */
        RlWave copy();

        /**
         * @brief Crop a wave to defined samples range
         * @param initSample the initial sample
         * @param finalSample the final sample
         */
        void crop(const int &initSample, const int &finalSample);

        /**
         * @brief Load samples data from wave as a floats array
         * @return the samples data
         */
        std::vector<float> getSamples();

    private:
        Wave _wave; /**< The raylib wave */
        std::vector<float> _samples; /**< The samples data */
        float *_samplesPtr; /**< The samples pointer data */
    };
}

#endif //INDIESTUDIO_RLWAVE_HPP
