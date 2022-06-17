/*
** EPITECH PROJECT, 2022
** RlAudioStream.hpp
** FileHelper description:
** RlAudioStream.hpp
*/

#ifndef INDIESTUDIO_RLAUDIOSTREAM_HPP
#define INDIESTUDIO_RLAUDIOSTREAM_HPP

#include <raylib.h>

namespace raylib {
    /**
     * @brief Encapsulation of the raylib AudioStream
     */
    class RlAudioStream {
    public:
        /**
         * @brief Construct a new RlAudioStream object, Init audio stream (to stream raw audio pcm data)
         * @param sampleRate the sample rate of the stream
         * @param sampleSize the sample size of the stream
         * @param channels the number of channels of the stream
         */
        explicit RlAudioStream(const unsigned int &sampleRate, const unsigned int &sampleSize, const unsigned int &channels);

        /**
         * @brief Destroy the RlAudioStream object
         */
        ~RlAudioStream();

        /**
         * @brief Update audio stream buffers with data
         * @param data the data to update the stream with
         * @param samplesCount the number of samples to update the stream with
         */
        void update(const void *data, const int &samplesCount);

        /**
         * @brief Check if any audio stream buffers requires refill
         * @return true if the stream is processed
         */
        bool isProcessed();

        /**
         * @brief Play the audio stream
         */
        void play();

        /**
         * @brief Pause the audio stream
         */
        void pause();

        /**
         * @brief Resume the audio stream
         */
        void resume();

        /**
         * @brief Check if the audio stream is playing
         * @return true if the stream is playing
         */
        bool isPlaying();

        /**
         * @brief Stop the audio stream
         */
        void stop();

        /**
         * @brief Set the volume of the audio stream (1.0 is max level)
         * @param volume the volume to set the stream to
         */
        void setVolume(float volume);

        /**
         * @brief Get the volume of the audio stream
         * @return the volume of the stream
         */
        const float &getVolume() const;

        /**
         * @brief Set the pitch of the audio stream (1.0 is base level)
         * @param pitch the pitch to set the stream to
         */
        void setPitch(const float &pitch);

    private:
        AudioStream _stream; /**< The raylib AudioStream */
        float _volume; /**< The volume of the audiostream */
    };
}

#endif //INDIESTUDIO_RLAUDIOSTREAM_HPP
