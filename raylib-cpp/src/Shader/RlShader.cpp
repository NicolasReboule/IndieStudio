/*
** EPITECH PROJECT, 2022
** IndieStudio
** File description:
** Shader
*/

#include "raylib/Shader/RlShader.hpp"

raylib::RlShader::RlShader()
{
}

raylib::RlShader::~RlShader()
{
}

// Shader management functions

Shader raylib::RlShader::loadShader(const std::string &vsFileName, const std::string &fsFileName)
{
    return LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

Shader raylib::RlShader::loadShaderFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    return LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

int raylib::RlShader::getShaderLocation(Shader shader, const std::string &uniformName)
{
    return GetShaderLocation(shader, uniformName.c_str());
}

int raylib::RlShader::getShaderLocationAttrib(Shader shader, const std::string &attribName)
{
    return GetShaderLocationAttrib(shader, attribName.c_str());
}

void raylib::RlShader::setShaderValue(Shader shader, int locIndex, const void *value, int uniformType)
{
    SetShaderValue(shader, locIndex, value, uniformType);
}

void raylib::RlShader::setShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count)
{
    SetShaderValueV(shader, locIndex, value, uniformType, count);
}

void raylib::RlShader::setShaderValueMatrix(Shader shader, int locIndex, Matrix mat)
{
    SetShaderValueMatrix(shader, locIndex, mat);
}

void raylib::RlShader::setShaderValueTexture(Shader shader, int locIndex, Texture2D texture)
{
    SetShaderValueTexture(shader, locIndex, texture);
}

void raylib::RlShader::unloadShader(Shader shader)
{
    UnloadShader(shader);
}
