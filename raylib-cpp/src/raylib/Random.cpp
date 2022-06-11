/*
** EPITECH PROJECT, 2022
** Random.cpp
** File description:
** Random.cpp
*/

#include "raylib/Random.hpp"

short raylib::Random::generate(short min, short max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_int_distribution<short> uniform_dist(min, max);
    return uniform_dist(gen);
}

int raylib::Random::generate(int min, int max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_int_distribution<int> uniform_dist(min, max);
    return uniform_dist(gen);
}

long raylib::Random::generate(long min, long max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_int_distribution<long> uniform_dist(min, max);
    return uniform_dist(gen);
}

std::size_t raylib::Random::generateSizeT(std::size_t min, std::size_t max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_int_distribution<std::size_t> uniform_dist(min, max);
    return uniform_dist(gen);
}

double raylib::Random::generate(double min, double max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_real_distribution<double> uniform_dist(min, max);
    return uniform_dist(gen);
}

float raylib::Random::generate(float min, float max)
{
    std::default_random_engine gen(this->_random_device());
    std::uniform_real_distribution<float> uniform_dist(min, max);
    return uniform_dist(gen);
}
