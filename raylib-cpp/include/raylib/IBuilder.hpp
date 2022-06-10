/*
** EPITECH PROJECT, 2022
** IBuilder.hpp
** File description:
** IBuilder.hpp
*/

#ifndef INDIESTUDIO_IBUILDER_HPP
#define INDIESTUDIO_IBUILDER_HPP

namespace raylib {
    /**
     * @brief Interface for all the builder
     * @tparam T the class to build
     */
    template<typename T>
    class IBuilder {
    public:
        /**
         * @brief Will return an instance of the templated parameter
         * @tparam The class to build
         * @return the templated parameter
         * @attention Can throw some errors
         */
        virtual T build() = 0;
    };
}


#endif //INDIESTUDIO_IBUILDER_HPP
