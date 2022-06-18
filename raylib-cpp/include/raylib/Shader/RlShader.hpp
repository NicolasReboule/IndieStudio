/*
** EPITECH PROJECT, 2022
** RlShader.hpp
** File description:
** RlShader.hpp
*/

#ifndef INDIESTUDIO_RLSHADER_HPP
#define INDIESTUDIO_RLSHADER_HPP

#include "raylib/Texture/RlTexture.hpp"
#include <raylib.h>
#include <string>

namespace raylib::shader {
    /**
     * @brief Encapsultation of the raylib Shader
     * NOTE: Shader functionality is not available on OpenGL 1.1
     */
    class RlShader {
    public:
        /**
         * @brief Construct a new RlShader object
         */
        RlShader();

        /**
         * @brief Destroy the RlShader object
         */
        ~RlShader();

        /**
         * @brief Load a shader from a file
         * @param vsFileName the vertex shader file name
         * @param fsFileName the fragment shader file name
         */
        void load(const std::string &vsFileName, const std::string &fsFileName);

        /**
         * @brief Load a shader from code strings
         * @param vsCode the vertex shader code
         * @param fsCode the fragment shader code
         */
        void loadFromMemory(const std::string &vsCode, const std::string &fsCode);

        /**
         * @brief Get shader uniform location
         * @param uniformName to get
         * @return the location of the uniform
         */
        int getLocation(const std::string &uniformName);

        /**
         * @brief Get shader attribute location
         * @param attribName to get
         * @return the location of the attribute
         */
        int getLocationAttrib(const std::string &attribName);

        /**
         * @brief Set shader uniform value
         * @param locIndex to set
         * @param value to set
         * @param uniformType to set
         */
        void setValue(int locIndex, const void *value, int uniformType);

        /**
         * @brief Set shader uniform value vector
         * @param locIndex to set
         * @param value to set
         * @param uniformType to set
         * @param count to set
         */
        void setValueV(int locIndex, const void *value, int uniformType, int count);

        /**
         * @brief Set shader uniform value (matrix 4x4)
         * @param locIndex to set
         * @param mat to set
         */
        void setValueMatrix(int locIndex, const Matrix &mat);

        /**
         * @brief Set shader uniform value for texture (sampler2d)
         * @param locIndex to set
         * @param texture to set
         */
        void setValueTexture(int locIndex, const texture::RlTexture &texture);

        /**
         * @brief Get the raylib Shader's
         * @return the raylib Shader
         */
        const Shader &getShader() const;

    private:
        Shader _shader; /**< The raylib shader's */
    };
}

#endif //INDIESTUDIO_RLSHADER_HPP
