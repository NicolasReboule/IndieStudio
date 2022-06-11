/*
** EPITECH PROJECT, 2022
** Random.hpp
** File description:
** Random.hpp
*/

#ifndef INDIESTUDIO_RANDOM_HPP
#define INDIESTUDIO_RANDOM_HPP

#include <random>

namespace raylib {
    /**
     * @brief Random class
     */
    class Random {
    public:
        /**
         * @brief Construct a new Random object, default constructor
         */
        Random() = default;

        /**
         * @brief Generate a random short using the std::default_random_engine & uniform_int_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random short number
         */
        short generate(short min, short max);

        /**
         * @brief Generate a random int using the std::default_random_engine & uniform_int_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random int number
         */
        int generate(int min, int max);

        /**
         * @brief Generate a random long using the std::default_random_engine & uniform_int_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random long number
         */
        long generate(long min, long max);

        /**
         * @brief Generate a random std::size_t using the std::default_random_engine & uniform_int_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random std::size_t number
         */
        std::size_t generateSizeT(std::size_t min, std::size_t max);

        /**
         * @brief Generate a random double using the std::default_random_engine & uniform_real_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random double number
         */
        double generate(double min, double max);

        /**
         * @brief Generate a random float using the std::default_random_engine & uniform_real_distribution
         * @param min the minimum value
         * @param max the maximum value
         * @return a random float number
         */
        float generate(float min, float max);

    private:
        std::random_device _random_device;
    };
}

using Random = raylib::Random;

#endif //INDIESTUDIO_RANDOM_HPP
