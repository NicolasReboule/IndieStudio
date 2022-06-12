/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Shader
*/

#include "raylib/Shader/RlShader.hpp"

raylib::RlShader::RlShader() : _shader()
{
    this->_shader.id = 0;
    this->_shader.locs = nullptr;
}

raylib::RlShader::~RlShader()
{
    UnloadShader(this->_shader);
}

void raylib::RlShader::load(const std::string &vsFileName, const std::string &fsFileName)
{
    this->_shader = LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

void raylib::RlShader::loadFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    this->_shader = LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

int raylib::RlShader::getLocation(const std::string &uniformName)
{
    return GetShaderLocation(this->_shader, uniformName.c_str());
}

int raylib::RlShader::getLocationAttrib(const std::string &attribName)
{
    return GetShaderLocationAttrib(this->_shader, attribName.c_str());
}

void raylib::RlShader::setValue(int locIndex, const void *value, int uniformType)
{
    SetShaderValue(this->_shader, locIndex, value, uniformType);
}

void raylib::RlShader::setValueV(int locIndex, const void *value, int uniformType, int count)
{
    SetShaderValueV(this->_shader, locIndex, value, uniformType, count);
}

void raylib::RlShader::setValueMatrix(int locIndex, const Matrix &mat)
{
    SetShaderValueMatrix(this->_shader, locIndex, mat);
}

void raylib::RlShader::setValueTexture(int locIndex, const RlTexture &texture)
{
    SetShaderValueTexture(this->_shader, locIndex, texture.get());
}

const Shader &raylib::RlShader::getShader() const
{
    return this->_shader;
}
