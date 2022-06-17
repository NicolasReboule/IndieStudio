/*
** EPITECH PROJECT, 2022
** Bonus.hpp
** File description:
** Bonus.hpp
*/

#ifndef INDIESTUDIO_BONUS_HPP
#define INDIESTUDIO_BONUS_HPP

#include "GameEngine/GameEngine.hpp"

namespace indie {

    class Bonus : public gameengine::StaticBody {
    public:
        enum BonusType {
            FIRE,
            BOMB,
            SPEED,
            GHOST
        };

        Bonus(const std::string &name, const std::string &objPath);
        Bonus(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        ~Bonus() override = default;

        void ready() override;

        void update(float delta) override;

        BonusType getBonusType();

        void setBonusType(BonusType type);
    private:
        BonusType _type;
    };
}

#endif //INDIESTUDIO_BONUS_HPP
