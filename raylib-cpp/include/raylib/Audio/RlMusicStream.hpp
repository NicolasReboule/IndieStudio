/*
** EPITECH PROJECT, 2022
** RlMusicStream.hpp
** FileHelper description:
** RlMusicStream.hpp
*/

#ifndef INDIESTUDIO_RLMUSICSTREAM_HPP
#define INDIESTUDIO_RLMUSICSTREAM_HPP

#include <raylib.h>
#include <string>

namespace raylib::audio {
    /**
     * @brief Encapulation of the raylib Music
     */
    class RlMusicStream {
    public:
        /**
         * @brief Construct a new RlMusicStream object from a file
         * @param fileName the file name
         */
        explicit RlMusicStream(const std::string &fileName);

        /**
         * @brief Construct a new RlMusicStream object from data
         * @param fileType the file type
         * @param data the data
         * @param dataSize the data size
         */
        explicit RlMusicStream(const std::string &fileType, unsigned char *data, const int &dataSize);

        /**
         * @brief Destroy the RlMusicStream object
         */
        ~RlMusicStream();

        /**
         * @brief Play the music stream
         */
        void play();

        /**
         * @brief Check if the music stream is playing
         * @return true if the music stream is playing
         */
        bool isPlaying();

        /**
         * @brief Updates buffers for music streaming
         */
        void update();

        /**
         * @brief Stop the music stream playing
         */
        void stop();

        /**
         * @brief Pause the music stream playing
         */
        void pause();

        /**
         * @brief Resume the music stream playing
         */
        void resume();

        /**
         * @brief Seek the music stream to a position in seconds (set the current playing position)
         * @param position the position
         */
        void seek(const float &position);

        /**
         * @brief Set the volume of the music stream (1.0 is max level)
         * @param volume the volume
         */
        void setVolume(const float &volume);

        /**
         * @brief Get the volume of the music stream
         * @return the volume
         */
        const float &getVolume() const;

        /**
         * @brief Set pitch for a music (1.0 is base level)
         * @param pitch the pitch
         */
        void setPitch(const float &pitch);

        /**
         * @brief Get music time length (in seconds)
         * @return the time length
         */
        float getTimeLength();

        /**
         * @brief Get current music time played (in seconds)
         * @return the time played
         */
        float getTimePlayed();

    private:
        Music _music; /**< The raylib Music */
        float _volume; /**< The volume of the music */
    };
}

#endif //INDIESTUDIO_RLMUSICSTREAM_HPP
