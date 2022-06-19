/*
** EPITECH PROJECT, 2022
** KinematicBody.hpp
** File description:
** KinematicBody.hpp
*/

#ifndef INDIESTUDIO_KINEMATICBODY_HPP
#define INDIESTUDIO_KINEMATICBODY_HPP

#include "StaticBody.hpp"

namespace gameengine::node::_3D {
    /**
     * @brief A kinematic body is a body that can move
     */
    class KinematicBody : public StaticBody {
    public:
        /**
         * @brief Construct a new Kinematic Body object
         * @param name the name of the body
         * @param model the model of the body
         */
        explicit KinematicBody(const std::string &name, const raylib::model::RlModel &model);

        /**
         * @brief Construct a new Kinematic Body object
         * @param name the name of the body
         * @param model the model of the body
         * @param texturePath the path of the texture
         */
        explicit KinematicBody(const std::string &name, const raylib::model::RlModel &model, const std::shared_ptr<raylib::texture::RlTexture> &texture);

        /**
         * @brief Destroy the Kinematic Body object
         */
        ~KinematicBody() override = default;

        /**
         * @brief Move the body and check collision
         * @param position the position to move to
         * @return if body moved
         */
        bool moveAndCollide(const Vector3f &position);
    };
}

#endif //INDIESTUDIO_KINEMATICBODY_HPP
