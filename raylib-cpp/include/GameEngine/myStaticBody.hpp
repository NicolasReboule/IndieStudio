/*
** EPITECH PROJECT, 2022
** myStaticBody.hpp
** File description:
** myStaticBody.hpp
*/

#ifndef INDIESTUDIO_MYSTATICBODY_HPP
#define INDIESTUDIO_MYSTATICBODY_HPP

#include "GameEngine/Nodes/StaticBody.hpp"

namespace GameEngine {

    class myStaticBody : public StaticBody {
    public:
        myStaticBody(const std::string& modelPath, const std::string& texturePath);
        ~myStaticBody() override = default;

        void update() override;
        void ready() override;
    private:
    };
}

#endif //INDIESTUDIO_MYSTATICBODY_HPP
