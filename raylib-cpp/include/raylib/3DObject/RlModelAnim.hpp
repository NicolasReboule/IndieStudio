/*
** EPITECH PROJECT, 2022
** RlModelAnim.hpp
** FileHelper description:
** RlModelAnim.hpp
*/

#ifndef INDIESTUDIO_RLMODELANIM_HPP
#define INDIESTUDIO_RLMODELANIM_HPP

#include "RlModel.hpp"
#include <raylib.h>
#include <string>

namespace raylib {
    /**
     * @brief Model animation class (iqm)
     */
    class RlModelAnim {
    public:
        /**
         * @brief Create a new RlModelAnimation (support only iqm)
         * @param model the model to animate
         * @param fileName the file name of the animation
         */
        explicit RlModelAnim(const RlModel &model, const std::string &fileName);

        /**
         * @brief Unload the model animation
         */
        ~RlModelAnim();

        /**
         * @brief Update the animation
         * @param animIndex the index of the animation to update
         */
        void update(const unsigned int &animIndex);

        /**
         * @brief Draw the animation
         * @param animIndex the index of the animation to draw
         */
        void unload(const unsigned int &animIndex);

        /**
         * @brief Check if the animation index is a valid index. Check model animation skeleton match
         * @param animIndex the index to check
         * @return true if the index is valid
         */
        bool animationIndexIsValid(const unsigned int &animIndex);

        /**
         * @brief Get the number of animation
         * @return the number of animation
         */
        unsigned int getCount() const;

    private:
        const RlModel &_model; /**< A reference to the model to animate */
        std::vector<ModelAnimation> _animations; /**< A vector containing all the iqm animations */
        ModelAnimation *_anims; /**< A pointer to the raylib iqm animations */
        unsigned int _count; /**< The number of animations loaded from the iqm */
        int _frameCount; /**< The actual frame index of the current animation */
    };
}

#endif //INDIESTUDIO_RLMODELANIM_HPP
