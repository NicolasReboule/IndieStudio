/*
** EPITECH PROJECT, 2022
** BonusRange.hpp
** File description:
** BonusRange.hpp
*/

#ifndef INDIESTUDIO_BONUSRANGE_HPP
#define INDIESTUDIO_BONUSRANGE_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class BonusRange : public gameengine::StaticBody {
    public:
        //Magma(const std::string &name, const std::string &objPath, const std::string &playerOwner);
        BonusRange(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~BonusRange() override = default;

        void ready() override;

        void update(float delta) override;
    };
}

#endif //INDIESTUDIO_BONUSRANGE_HPP
