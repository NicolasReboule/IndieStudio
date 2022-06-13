/*
** EPITECH PROJECT, 2022
** KinematicBody.hpp
** File description:
** KinematicBody.hpp
*/

#ifndef INDIESTUDIO_KINEMATICBODY_HPP
#define INDIESTUDIO_KINEMATICBODY_HPP

#include "GameEngine/Nodes/StaticBody.hpp"

namespace GameEngine {

    class KinematicBody : public StaticBody{
    public:
        KinematicBody(const std::string &name, const raylib::RlMeshBuilder::MeshType &type, const std::string &texturePath);
        KinematicBody(const std::string &name, const std::string &modelPath, const std::string &texturePath);
        ~KinematicBody() override = default;

        void moveAndCollide(Vector3f position);
    private:
    };
}

#endif //INDIESTUDIO_KINEMATICBODY_HPP
