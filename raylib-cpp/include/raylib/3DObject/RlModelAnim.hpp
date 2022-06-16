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
        explicit RlModelAnim(const RlModel &model, const std::string &fileName);
        ~RlModelAnim();

        void update(const unsigned int &animIndex);
        void unload(const unsigned int &animIndex);

        bool animationIsValid(unsigned int animIndex);

        unsigned int getCount() const;

        /*     ModelAnimation *loadModelAnimations(const std::string &fileName, unsigned int *animCount);                // Load _model _animations from file
             void updateModelAnimation(Model _model, ModelAnimation anim, int frame);                            // Update _model animation pose
             void unloadModelAnimation(ModelAnimation anim);                                                    // Unload animation data
             void unloadModelAnimations(ModelAnimation* anim, unsigned int _count);                        // Unload animation array data
             bool isModelAnimationValid(Model _model, ModelAnimation anim);   */                                   // Check _model animation skeleton match
    private:
        RlModel &_model;
        std::vector<ModelAnimation> _animations;
        unsigned int _count;
        int _frameCount;
    };
}

#endif //INDIESTUDIO_RLMODELANIM_HPP
