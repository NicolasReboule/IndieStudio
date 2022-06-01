/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Shader
*/

#include "raylib/Shaders.hpp"

raylib::Shaders::Shaders()
{
}

raylib::Shaders::~Shaders()
{
}

// Shader management functions

Shader raylib::Shaders::loadShader(const std::string &vsFileName, const std::string &fsFileName)
{
    return LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

Shader raylib::Shaders::loadShaderFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    return LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

int raylib::Shaders::getShaderLocation(Shader shader, const std::string &uniformName)
{
    return GetShaderLocation(shader, uniformName.c_str());
}

int raylib::Shaders::getShaderLocationAttrib(Shader shader, const std::string &attribName)
{
    return GetShaderLocationAttrib(shader, attribName.c_str());
}

void raylib::Shaders::setShaderValue(Shader shader, int locIndex, const void *value, int uniformType)
{
    SetShaderValue(shader, locIndex, value, uniformType);
}

void raylib::Shaders::setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count)
{
    SetShaderValueV(shader, locIndex, value, uniformType, count);
}

void raylib::Shaders::setShaderValueMatrix(Shader shader, int locIndex, Matrix mat)
{
    SetShaderValueMatrix(shader, locIndex, mat);
}

void raylib::Shaders::setShaderValueTexture(Shader shader, int locIndex, Texture2D texture)
{
    SetShaderValueTexture(shader, locIndex, texture);
}

void raylib::Shaders::unloadShader(Shader shader)
{
    UnloadShader(shader);
}
