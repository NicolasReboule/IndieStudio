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

        explicit Bonus(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        ~Bonus() override = default;

        void init() override;

        void update(const float &delta) override;

        const BonusType &getBonusType() const;

        void setBonusType(const BonusType &type);

    private:
        BonusType _type;
    };
}

#endif //INDIESTUDIO_BONUS_HPP
