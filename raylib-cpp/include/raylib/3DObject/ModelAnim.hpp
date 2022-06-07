/*
** EPITECH PROJECT, 2022
** ModelAnim.hpp
** FileHelper description:
** ModelAnim.hpp
*/

#ifndef INDIESTUDIO_MODELANIM_HPP
#define INDIESTUDIO_MODELANIM_HPP

#include "raylib.h"
#include <string>

namespace raylib {
    class ModelAnim {
    public:
        // Model animations loading/unloading functions
        ModelAnim(Model model, const std::string &fileName, unsigned int *animCount);
        ~ModelAnim();

        void update(unsigned int anim, int frame);
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
        unsigned int *count;
    };
}

#endif //INDIESTUDIO_MODELANIM_HPP
