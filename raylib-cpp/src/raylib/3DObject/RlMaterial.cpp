/*
** EPITECH PROJECT, 2022
** Material.cpp
** FileHelper description:
** Material.cpp
*/

#include "raylib/3DObject/RlMaterial.hpp"

raylib::model::RlMaterial::RlMaterial(const std::string &fileName) : _material(LoadMaterialDefault())
{
}

raylib::model::RlMaterial::RlMaterial(Material &material) : _material(material)
{
}

raylib::model::RlMaterial::~RlMaterial()
{
    UnloadMaterial(this->_material);
}

const Material &raylib::model::RlMaterial::getMaterial() const
{
    return this->_material;
}

Material &raylib::model::RlMaterial::getMaterial()
{
    return this->_material;
}

//REMOVED raylib is bad
/*std::vector<raylib::model::RlMaterial> raylib::model::RlMaterial::loadMaterials(const std::string &fileName)
{
    std::vector<raylib::model::RlMaterial> rlMaterials;
    if (!raylib::helper::FileHelper::isFileExtension(fileName, ".mtl")) {
        TRACELOG(LOG_WARNING, "FILEIO: [%s] Failed to load material file", fileName);
        return rlMaterials;
    }

    unsigned int count = 0;
    tinyobj_material_t *mats = nullptr;

    int result = tinyobj_parse_mtl_file(&mats, &count, fileName.c_str());
    if (result != TINYOBJ_SUCCESS) {
        TRACELOG(LOG_WARNING, "MATERIAL: [%s] Failed to parse materials file", fileName);
        return rlMaterials;
    }

    std::vector<Material> materials;
    for (unsigned int i = 0; i < count; i++) {
        // Init material to default
        // NOTE: Uses default shader, which only supports MATERIAL_MAP_DIFFUSE
        materials[i] = LoadMaterialDefault();

        // Get default texture, in case no texture is defined
        // NOTE: rlgl default texture is a 1x1 pixel UNCOMPRESSED_R8G8B8A8
        materials[i].maps[MATERIAL_MAP_DIFFUSE].texture = {rlGetTextureIdDefault(), 1, 1, 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};

        if (mats[i].diffuse_texname != nullptr)
            materials[i].maps[MATERIAL_MAP_DIFFUSE].texture = LoadTexture(mats[i].diffuse_texname);  //char *diffuse_texname; // map_Kd

        materials[i].maps[MATERIAL_MAP_DIFFUSE].color = {
            (unsigned char) (mats[i].diffuse[0] * 255.0f),
            (unsigned char) (mats[i].diffuse[1] * 255.0f),
            (unsigned char) (mats[i].diffuse[2] * 255.0f),
            255
        }; //float diffuse[3];
        materials[i].maps[MATERIAL_MAP_DIFFUSE].value = 0.0f;

        if (mats[i].specular_texname != nullptr)
            materials[i].maps[MATERIAL_MAP_SPECULAR].texture = LoadTexture(mats[i].specular_texname);  //char *specular_texname; // map_Ks
        materials[i].maps[MATERIAL_MAP_SPECULAR].color = {
            (unsigned char) (mats[i].specular[0] * 255.0f),
            (unsigned char) (mats[i].specular[1] * 255.0f),
            (unsigned char) (mats[i].specular[2] * 255.0f),
            255
        }; //float specular[3];
        materials[i].maps[MATERIAL_MAP_SPECULAR].value = 0.0f;

        if (mats[i].bump_texname != nullptr)
            materials[i].maps[MATERIAL_MAP_NORMAL].texture = LoadTexture(mats[i].bump_texname);  //char *bump_texname; // map_bump, bump
        materials[i].maps[MATERIAL_MAP_NORMAL].color = WHITE;
        materials[i].maps[MATERIAL_MAP_NORMAL].value = mats[i].shininess;

        materials[i].maps[MATERIAL_MAP_EMISSION].color = {
            (unsigned char) (mats[i].emission[0] * 255.0f),
            (unsigned char) (mats[i].emission[1] * 255.0f),
            (unsigned char) (mats[i].emission[2] * 255.0f),
            255
        }; //float emission[3];

        if (mats[i].displacement_texname != nullptr)
            materials[i].maps[MATERIAL_MAP_HEIGHT].texture = LoadTexture(mats[i].displacement_texname); //char *displacement_texname; // disp
    }
    tinyobj_materials_free(mats, count);

    // Set materials shader to default (DIFFUSE, SPECULAR, NORMAL)
    for (unsigned int i = 0; i < count; i++) {
        materials[i].shader.id = rlGetShaderIdDefault();
        materials[i].shader.locs = rlGetShaderLocsDefault();
    }

    for (auto &material: materials)
        rlMaterials.emplace_back(material);
    return rlMaterials;
}*/
