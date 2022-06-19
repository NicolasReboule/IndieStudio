/*
** EPITECH PROJECT, 2022
** RlAnimation.h
** File description:
** RlAnimation.h
*/

#ifndef INDIESTUDIO_RLANIMATION_HPP
#define INDIESTUDIO_RLANIMATION_HPP

#include "raylib/Core/FileHelper.hpp"
#include "raylib/exception/RaylibException.hpp"
#include "RlModel.hpp"
#include <string>
#include <vector>
#include <raylib.h>

namespace raylib {

    namespace ex {
        /**
         * @brief Exception thrown when an animation is not found
         */
        class RlAnimationException : public raylib::ex::RaylibException {
        public:
            /**
             * @brief Construct a new RlAnimationException object
             * @param message the message
             */
            explicit RlAnimationException(const std::string &message) : RaylibException("[RlAnimation] " + message) {}
        };
    }

    namespace model {
        /**
         * @brief Animation class using multiple models
         */
        class RlAnimation {
        public:
            /**
             * @brief Default constructor
             */
            RlAnimation() : _isLoaded(false), _frame(0) {}

            /**
             * @brief Construct a new RlAnimation object
             * @param animationDir the animation dir path
             * @param extension the extension of animation files
             * @throws RlAnimationException if the animation dir is not found
             */
            explicit RlAnimation(const std::string &animationDir,  const std::string &extension);

            /**
             * @brief Update the animation
             */
            void update();

            /**
             * @brief get models of the animation
             * @return a vector of models
             */
            const std::vector<RlModel> &getAnimationModels() const;

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

            /**
             * @brief Check if the animations has been loaded
             * @return true if the animations has been loaded
             */
            const bool &isLoaded() const;

        private:
            bool _isLoaded; /**< If the animations has been laoded*/
            std::vector<RlModel> _animationModels; /** All the models for the animation */
            unsigned int _frame; /** The frame index of the current model */
        };
    }

}
#endif //INDIESTUDIO_RLANIMATION_HPP
