/*
** EPITECH PROJECT, 2022
** AbstractBase.hpp
** File description:
** AbstractBase.hpp
*/

#ifndef INDIESTUDIO_ABSTRACTBASE_HPP
#define INDIESTUDIO_ABSTRACTBASE_HPP

#include <raylib/Raylib.hpp>

namespace gameengine::node {
    /**
     * @brief AbstractBase is the base class for all the nodes
     */
    class AbstractBase {
    public:
        /**
         * @brief Construct a new Abstract Base object with a name
         * @param name the name of the node
         */
        explicit AbstractBase(const std::string &name);

        /**
         * @brief Copy constructor
         */
        AbstractBase(const AbstractBase &) = default;

        /**
         * @brief Destroy the Abstract Base object
         */
        virtual ~AbstractBase() = default;

        /**
         * @brief Init the node
         */
        virtual void init() = 0;

        /**
         * @brief Update the node
         * @param delta the delta time
         */
        virtual void update(const float &delta) = 0;

        /**
         * @brief Draw the node
         */
        virtual void draw() = 0;

        /**
         * @brief Get the rotation degrees
         * @return the rotation degrees
         */
        virtual float getRotationDegrees() const = 0;

        /**
         * @brief Get the name
         * @return the name
         */
        const std::string &getName() const;

        /**
         * @brief Get the group of the node
         * @return the group
         */
        const std::string &getGroup() const;

        /**
         * @brief Set the group of the node
         * @param group the new group
         */
        void setGroup(const std::string &group);

        /**
         * @brief If the node is active
         * @return true if the node is active
         */
        const bool &isHiding() const;

        /**
         * @brief Set if the node is active
         * @param value the new value
         */
        void setHiding(bool value);

    protected:
        bool _hiding = false; /**< If the node is active */
        std::string _name; /**< The name of the node */
        std::string _group; /**< The name of the group */
    };
}

std::ostream &operator<<(std::ostream &os, const gameengine::node::AbstractBase &abstractBase);

#endif //INDIESTUDIO_ABSTRACTBASE_HPP
