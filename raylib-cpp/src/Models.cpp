/*
** EPITECH PROJECT, 2022
** Model.cpp
** File description:
** Model.cpp
*/

#include "raylib/Models.hpp"

// Basic geometric 3D shapes drawing functions

void raylib::Models::drawLine3D(Vector3 startPos, Vector3 endPos, Color color)
{
    DrawLine3D(startPos, endPos, color);
}

void raylib::Models::drawPoint3D(Vector3 position, Color color)
{
    DrawPoint3D(position, color);
}

void raylib::Models::drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
{
    DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

void raylib::Models::drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
{
    DrawTriangle3D(v1, v2, v3, color);
}

void raylib::Models::drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color)
{
    DrawTriangleStrip3D(points, pointsCount, color);
}

void raylib::Models::drawCube(Vector3 position, float width, float height, float length, Color color)
{
    DrawCube(position, width, height, length, color);
}

void raylib::Models::drawCubeV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeV(position, size, color);
}

void raylib::Models::drawCubeWires(Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeWires(position, width, height, length, color);
}

void raylib::Models::drawCubeWiresV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeWiresV(position, size, color);
}

void raylib::Models::drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTexture(texture, position, width, height, length, color);
}

void raylib::Models::drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTextureRec(texture, source, position, width, height, length, color);
}

void raylib::Models::drawSphere(Vector3 centerPos, float radius, Color color)
{
    DrawSphere(centerPos, radius, color);
}

void raylib::Models::drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereEx(centerPos, radius, rings, slices, color);
}

void raylib::Models::drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereWires(centerPos, radius, rings, slices, color);
}

void raylib::Models::drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

void raylib::Models::drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void raylib::Models::drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

void raylib::Models::drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)
{
    DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void raylib::Models::drawPlane(Vector3 centerPos, Vector2 size, Color color)
{
    DrawPlane(centerPos, size, color);
}

void raylib::Models::drawRay(Ray ray, Color color)
{
    DrawRay(ray, color);
}

void raylib::Models::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}

// Model loading/unloading functions

Model raylib::Models::loadModel(const std::string &fileName)
{
    return LoadModel(fileName.c_str());
}

Model raylib::Models::loadModelFromMesh(Mesh mesh)
{
    return LoadModelFromMesh(mesh);
}

void raylib::Models::unloadModel(Model model)
{
    UnloadModel(model);
}

void raylib::Models::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}

BoundingBox raylib::Models::getModelBoundingBox(Model model)
{
    return GetModelBoundingBox(model);
}

// Model drawing functions

void raylib::Models::drawModel(Model model, Vector3 position, float scale, Color tint)
{
    DrawModel(model, position, scale, tint);
}

void raylib::Models::drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void raylib::Models::drawModelWires(Model model, Vector3 position, float scale, Color tint)
{
    DrawModelWires(model, position, scale, tint);
}

void raylib::Models::drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void raylib::Models::drawBoundingBox(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
}

void raylib::Models::drawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint)
{
    DrawBillboard(camera, texture, position, size, tint);
}

void raylib::Models::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)
{
    DrawBillboardRec(camera, texture, source, position, size, tint);
}

void raylib::Models::drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)
{
    DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint);
}

// Mesh management functions

void raylib::Models::uploadMesh(Mesh *mesh, bool dynamic)
{
    UploadMesh(mesh, dynamic);
}

void raylib::Models::updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset)
{
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

void raylib::Models::unloadMesh(Mesh mesh)
{
    UnloadMesh(mesh);
}

void raylib::Models::drawMesh(Mesh mesh, Material material, Matrix transform)
{
    DrawMesh(mesh, material, transform);
}

void raylib::Models::drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances)
{
    DrawMeshInstanced(mesh, material, transforms, instances);
}

bool raylib::Models::exportMesh(Mesh mesh, const std::string &fileName)
{
    return ExportMesh(mesh, fileName.c_str());
}

BoundingBox raylib::Models::getMeshBoundingBox(Mesh mesh)
{
    return GetMeshBoundingBox(mesh);
}

void raylib::Models::genMeshTangents(Mesh *mesh)
{
    GenMeshTangents(mesh);
}

void raylib::Models::genMeshBinormals(Mesh *mesh)
{
    GenMeshBinormals(mesh);
}

// Mesh generation functions

Mesh raylib::Models::genMeshPoly(int sides, float radius)
{
    return GenMeshPoly(sides, radius);
}

Mesh raylib::Models::genMeshPlane(float width, float length, int resX, int resZ)
{
    return GenMeshPlane(width, length, resX, resZ);
}

Mesh raylib::Models::genMeshCube(float width, float height, float length)
{
    return GenMeshCube(width, height, length);
}

Mesh raylib::Models::genMeshSphere(float radius, int rings, int slices)
{
    return GenMeshSphere(radius, rings, slices);
}

Mesh raylib::Models::genMeshHemiSphere(float radius, int rings, int slices)
{
    return GenMeshHemiSphere(radius, rings, slices);
}

Mesh raylib::Models::genMeshCylinder(float radius, float height, int slices)
{
    return GenMeshCylinder(radius, height, slices);
}

Mesh raylib::Models::genMeshCone(float radius, float height, int slices)
{
    return GenMeshCone(radius, height, slices);
}

Mesh raylib::Models::genMeshTorus(float radius, float size, int radSeg, int sides)
{
    return GenMeshTorus(radius, size, radSeg, sides);
}

Mesh raylib::Models::genMeshKnot(float radius, float size, int radSeg, int sides)
{
    return GenMeshKnot(radius, size, radSeg, sides);
}

Mesh raylib::Models::genMeshHeightmap(Image heightmap, Vector3 size)
{
    return GenMeshHeightmap(heightmap, size);
}

Mesh raylib::Models::genMeshCubicmap(Image cubicmap, Vector3 cubeSize)
{
    return GenMeshCubicmap(cubicmap, cubeSize);
}

// Material loading/unloading functions

Material *raylib::Models::loadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

Material raylib::Models::loadMaterialDefault(void)
{
    return LoadMaterialDefault();
}

void raylib::Models::unloadMaterial(Material material)
{
    UnloadMaterial(material);
}

void raylib::Models::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}

void raylib::Models::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}

// Model animations loading/unloading functions

ModelAnimation *raylib::Models::loadModelAnimations(const std::string &fileName, unsigned int *animCount)
{
    return LoadModelAnimations(fileName.c_str(), animCount);
}

void raylib::Models::updateModelAnimation(Model model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(model, anim, frame);
}

void raylib::Models::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}

void raylib::Models::unloadModelAnimations(ModelAnimation *animations, unsigned int count)
{
    UnloadModelAnimations(animations, count);
}

bool raylib::Models::isModelAnimationValid(Model model, ModelAnimation anim)
{
    return IsModelAnimationValid(model, anim);
}

// Collision detection functions

bool raylib::Models::checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
{
    return CheckCollisionSpheres(center1, radius1, center2, radius2);
}

bool raylib::Models::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
    return CheckCollisionBoxes(box1, box2);
}

bool raylib::Models::checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
{
    return CheckCollisionBoxSphere(box, center, radius);
}

RayCollision raylib::Models::getRayCollisionSphere(Ray ray, Vector3 center, float radius)
{
    return GetRayCollisionSphere(ray, center, radius);
}

RayCollision raylib::Models::getRayCollisionBox(Ray ray, BoundingBox box)
{
    return GetRayCollisionBox(ray, box);
}

RayCollision raylib::Models::getRayCollisionModel(Ray ray, Model model)
{
    return GetRayCollisionModel(ray, model);
}

RayCollision raylib::Models::getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)
{
    return GetRayCollisionMesh(ray, mesh, transform);
}

RayCollision raylib::Models::getRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
{
    return GetRayCollisionTriangle(ray, p1, p2, p3);
}

RayCollision raylib::Models::getRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
{
    return GetRayCollisionQuad(ray, p1, p2, p3, p4);
}
