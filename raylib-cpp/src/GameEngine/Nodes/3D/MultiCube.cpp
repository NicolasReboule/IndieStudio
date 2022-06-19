/*
** EPITECH PROJECT, 2022
** MultiCube.cpp
** File description:
** MultiCube.cpp
*/

#include "GameEngine/Nodes/3D/MultiCube.hpp"

gameengine::node::_3D::MultiCube::MultiCube(const std::string &name, const Vector3f &size, \
const std::shared_ptr<raylib::texture::RlTexture> &texture)
    : StaticBody(name, raylib::model::RlModel(raylib::builder::RlMeshBuilder()
    .setMeshType(raylib::builder::RlMeshBuilder::MeshType::MeshCube).setWidth(size.x).setHeight(size.y).setLength(size.z).build()), texture), _size(size)
{
    this->_model.setMaterialTexture(texture, 0, MATERIAL_MAP_CUBEMAP);
    this->_texture = texture;
}

void gameengine::node::_3D::MultiCube::draw()
{
    StaticBody::draw();
    /*float x = this->getPosition().x;
    float y = this->getPosition().y;
    float z = this->getPosition().z;
    const RlColor &color = RlColor::White;
    float &width = this->_size.x;
    float &height = this->_size.y;
    float &length = this->_size.z;

    GlStateManager::pushMatrix();

    rlCheckRenderBatchLimit(36);

    rlBegin(RL_QUADS);
    rlColor4ub(color.getRed(), color.getGreen(), color.getBlue(), color.getAlpha());

    // NOTE: Enable texture 1 for Front, Back
    rlEnableTexture(this->_texture->getID());
    rlEnableTextureCubemap(this->_texture->getID());

    // Front Face
    // Normal Pointing Towards Viewer
    rlNormal3f(0.0f, 0.0f, 1.0f);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x - width / 2, y - height / 2, z + length / 2);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x + width / 2, y - height / 2, z + length / 2);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x + width / 2, y + height / 2, z + length / 2);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x - width / 2, y + height / 2, z + length / 2);

    // Back Face
    // Normal Pointing Away From Viewer
    rlNormal3f(0.0f, 0.0f, -1.0f);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x - width / 2, y - height / 2, z - length / 2);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x - width / 2, y + height / 2, z - length / 2);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x + width / 2, y + height / 2, z - length / 2);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x + width / 2, y - height / 2, z - length / 2);

    // NOTE: Enable texture 2 for Top, Bottom, Left and Right

    // Top Face
    // Normal Pointing Up
    rlNormal3f(0.0f, 1.0f, 0.0f);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x - width / 2, y + height / 2, z - length / 2);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x - width / 2, y + height / 2, z + length / 2);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x + width / 2, y + height / 2, z + length / 2);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x + width / 2, y + height / 2, z - length / 2);

    // Bottom Face
    // Normal Pointing Down
    rlNormal3f(0.0f, -1.0f, 0.0f);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x - width / 2, y - height / 2, z - length / 2);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x + width / 2, y - height / 2, z - length / 2);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x + width / 2, y - height / 2, z + length / 2);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x - width / 2, y - height / 2, z + length / 2);

    // Right face
    // Normal Pointing Right
    rlNormal3f(1.0f, 0.0f, 0.0f);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x + width / 2, y - height / 2, z - length / 2);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x + width / 2, y + height / 2, z - length / 2);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x + width / 2, y + height / 2, z + length / 2);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x + width / 2, y - height / 2, z + length / 2);

    // Left Face
    // Normal Pointing Left
    rlNormal3f(-1.0f, 0.0f, 0.0f);

    // Bottom Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 0.0f);
    rlVertex3f(x - width / 2, y - height / 2, z - length / 2);

    // Bottom Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 0.0f);
    rlVertex3f(x - width / 2, y - height / 2, z + length / 2);

    // Top Right Of The Texture and Quad
    rlTexCoord2f(1.0f, 1.0f);
    rlVertex3f(x - width / 2, y + height / 2, z + length / 2);

    // Top Left Of The Texture and Quad
    rlTexCoord2f(0.0f, 1.0f);
    rlVertex3f(x - width / 2, y + height / 2, z - length / 2);
    rlEnd();

    rlDisableTexture();

    GlStateManager::popMatrix();*/
}
