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

    class Bonus : public gameengine::node::_3D::StaticBody {
    public:
        enum BonusType {
            FIRE,
            BOMB,
            SPEED,
            GHOST
        };

        explicit Bonus(const std::string &name, const std::string &objPath);

        explicit Bonus(const std::string &name, const raylib::builder::RlMeshBuilder::MeshType &type,
              const std::string &texturePath);

        ~Bonus() override = default;

        void init() override;

        void update(const float &delta) override;

        BonusType getBonusType();

        void setBonusType(BonusType type);

    private:
        BonusType _type;
    };
}

#endif //INDIESTUDIO_BONUS_HPP
