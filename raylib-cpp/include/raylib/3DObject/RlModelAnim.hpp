/*
** EPITECH PROJECT, 2022
** RlModelAnim.hpp
** FileHelper description:
** RlModelAnim.hpp
*/

#ifndef INDIESTUDIO_RLMODELANIM_HPP
#define INDIESTUDIO_RLMODELANIM_HPP

#include <raylib.h>
#include "RlModel.hpp"
#include <string>

namespace raylib {
    class RlModelAnim {
    public:
        // Model animations loading/unloading functions
        explicit RlModelAnim(Model model, const std::string &fileName, unsigned int count);
        ~RlModelAnim();

        void update(unsigned int anim);
        void unload(unsigned int anim);
        bool animationIsValid(unsigned int anim);

   /*     ModelAnimation *loadModelAnimations(const std::string &fileName, unsigned int *animCount);                // Load model animations from file
        void updateModelAnimation(Model model, ModelAnimation anim, int frame);                            // Update model animation pose
        void unloadModelAnimation(ModelAnimation anim);                                                    // Unload animation data
        void unloadModelAnimations(ModelAnimation* anim, unsigned int count);                        // Unload animation array data
        bool isModelAnimationValid(Model model, ModelAnimation anim);   */                                   // Check model animation skeleton match
    private:
        Model model;
        ModelAnimation *animations;
        unsigned int count;
        int frameCount;
    };
}

#endif //INDIESTUDIO_RLMODELANIM_HPP
