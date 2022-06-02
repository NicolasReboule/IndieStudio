/*
** EPITECH PROJECT, 2022
** ModelAnim.hpp
** File description:
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
        static ModelAnimation *loadModelAnimations(const std::string &fileName, unsigned int *animCount);                // Load model animations from file
        static void updateModelAnimation(Model model, ModelAnimation anim, int frame);                            // Update model animation pose
        static void unloadModelAnimation(ModelAnimation anim);                                                    // Unload animation data
        static void unloadModelAnimations(ModelAnimation* animations, unsigned int count);                        // Unload animation array data
        static bool isModelAnimationValid(Model model, ModelAnimation anim);                                      // Check model animation skeleton match
    private:
    };
}

#endif //INDIESTUDIO_MODELANIM_HPP
