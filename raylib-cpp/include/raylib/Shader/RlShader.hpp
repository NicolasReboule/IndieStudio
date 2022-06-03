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
            Shader loadShader(const std::string &vsFileName, const std::string &fsFileName);      // Load shader from files and bind default locations
            Shader loadShaderFromMemory(const std::string &vsCode, const std::string &fsCode);    // Load shader from code strings and bind default locations
            int getShaderLocation(Shader shader, const std::string &uniformName);          // Get shader uniform location
            int getShaderLocationAttrib(Shader shader, const std::string &attribName);     // Get shader attribute location
            void setShaderValue(Shader shader, int locIndex, const void *value, int uniformType);               // Set shader uniform value
            void setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count);   // Set shader uniform value vector
            void setShaderValueMatrix(Shader shader, int locIndex, Matrix mat);         // Set shader uniform value (matrix 4x4)
            void setShaderValueTexture(Shader shader, int locIndex, Texture2D texture); // Set shader uniform value for texture (sampler2d)
            void unloadShader(Shader shader);                                       // Unload shader from GPU memory (VRAM)
        private:
    };
}

#endif /* !SHADER_HPP_ */
