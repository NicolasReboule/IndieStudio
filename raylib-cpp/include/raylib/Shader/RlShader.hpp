/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Shader
*/

#ifndef SHADER_HPP_
#define SHADER_HPP_

#include "raylib.h"
#include <string>

namespace raylib {

    class RlShader {
        public:
            // Shader management functions
            // NOTE: Shader functionality is not available on OpenGL 1.1
            RlShader();
            ~RlShader();
            void load(const std::string &vsFileName, const std::string &fsFileName);      // Load shader from files and bind default locations
            void loadFromMemory(const std::string &vsCode, const std::string &fsCode);    // Load shader from code strings and bind default locations
            int getLocation(const std::string &uniformName);          // Get shader uniform location
            int getLocationAttrib(const std::string &attribName);     // Get shader attribute location
            void setValue(int locIndex, const void *value, int uniformType);               // Set shader uniform value
            void setValueV(int locIndex, const void *value, int uniformType, int count);   // Set shader uniform value vector
            void setValueMatrix(int locIndex, Matrix mat);         // Set shader uniform value (matrix 4x4)
            void setValueTexture(int locIndex, Texture2D texture); // Set shader uniform value for texture (sampler2d)
        private:
            Shader _shader;
    };
}

#endif /* !SHADER_HPP_ */
