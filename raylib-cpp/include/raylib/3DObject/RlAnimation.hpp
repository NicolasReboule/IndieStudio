/*
** EPITECH PROJECT, 2022
** RlAnimation.h
** File description:
** RlAnimation.h
*/

#ifndef INDIESTUDIO_RLANIMATION_HPP
#define INDIESTUDIO_RLANIMATION_HPP

#include <string>
#include <vector>
#include "raylib/Core/FileHelper.hpp"
#include <raylib.h>

namespace raylib {
    /**
     * @brief Animation class
     */
    class RlAnimation {
    public:
        /**
         * @brief Construct a new RlAnimation object
         * @param animationDir the animation dir path
         * @param extension the extension of animation files
         */
        explicit RlAnimation(const std::string &animationDir,  const std::string &extension);

        /**
         * @brief Destroy the RlAnimation object
         */
        ~RlAnimation();

        /**
         * @brief Update the animation
         */
        void update();

        /**
         * @brief get models of the animation
         * @return a vector of models
         */
        const std::vector<Model> &getAnimationModels() const;

        /**
         * @brief Get the number of frames of the animation
         * It's just a call to getAnimationModels().size()
         * @return the number of frames
         */
        std::size_t getAnimationsSize() const;

        /**
         * @brief Get the frame
         * @return the frame
         */
        const unsigned int &getFrame() const;

    private:
        std::vector<Model> _animationModels; /** All the models for the animation */
        unsigned int _frame; /** The frame index of the current model */
    };
}
#endif //INDIESTUDIO_RLANIMATION_HPP
