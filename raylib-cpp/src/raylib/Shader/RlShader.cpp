/*
** EPITECH PROJECT, 2022
** IndieStudio
** FileHelper description:
** Shader
*/

#include "raylib/Shader/RlShader.hpp"

raylib::shader::RlShader::RlShader() : _shader()
{
    this->_shader.id = 0;
    this->_shader.locs = nullptr;
}

raylib::shader::RlShader::~RlShader()
{
    UnloadShader(this->_shader);
}

void raylib::shader::RlShader::load(const std::string &vsFileName, const std::string &fsFileName)
{
    this->_shader = LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

void raylib::shader::RlShader::loadFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    this->_shader = LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

int raylib::shader::RlShader::getLocation(const std::string &uniformName)
{
    return GetShaderLocation(this->_shader, uniformName.c_str());
}

int raylib::shader::RlShader::getLocationAttrib(const std::string &attribName)
{
    return GetShaderLocationAttrib(this->_shader, attribName.c_str());
}

void raylib::shader::RlShader::setValue(int locIndex, const void *value, int uniformType)
{
    SetShaderValue(this->_shader, locIndex, value, uniformType);
}

void raylib::shader::RlShader::setValueV(int locIndex, const void *value, int uniformType, int count)
{
    SetShaderValueV(this->_shader, locIndex, value, uniformType, count);
}

void raylib::shader::RlShader::setValueMatrix(int locIndex, const Matrix &mat)
{
    SetShaderValueMatrix(this->_shader, locIndex, mat);
}

void raylib::shader::RlShader::setValueTexture(int locIndex, const texture::RlTexture &texture)
{
    SetShaderValueTexture(this->_shader, locIndex, texture.get());
}

const Shader &raylib::shader::RlShader::getShader() const
{
    return this->_shader;
}
