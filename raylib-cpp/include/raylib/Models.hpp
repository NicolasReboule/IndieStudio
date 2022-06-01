/*
** EPITECH PROJECT, 2022
** Model.hpp
** File description:
** Model.hpp
*/

#ifndef INDIESTUDIO_MODELS_HPP
#define INDIESTUDIO_MODELS_HPP

#include <raylib.h>
#include <string>

namespace raylib {
    class Models {
    public:

        // Basic geometric 3D shapes drawing functions
        static void drawLine3D(Vector3 startPos, Vector3 endPos, Color color);                                    // Draw a line in 3D world space
        static void drawPoint3D(Vector3 position, Color color);                                                   // Draw a point in 3D space, actually a small line
        static void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color); // Draw a circle in 3D world space
        static void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color);                              // Draw a color-filled triangle (vertex in counter-clockwise order!)
        static void drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color);                           // Draw a triangle strip defined by points
        static void drawCube(Vector3 position, float width, float height, float length, Color color);             // Draw cube
        static void drawCubeV(Vector3 position, Vector3 size, Color color);                                       // Draw cube (Vector version)
        static void drawCubeWires(Vector3 position, float width, float height, float length, Color color);        // Draw cube wires
        static void drawCubeWiresV(Vector3 position, Vector3 size, Color color);                                  // Draw cube wires (Vector version)
        static void drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color); // Draw cube textured
        static void drawCubeTextureRec(Texture2D texture, Rectangle source, Vector3 position, float width, float height, float length, Color color); // Draw cube with a region of a texture
        static void drawSphere(Vector3 centerPos, float radius, Color color);                                     // Draw sphere
        static void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);            // Draw sphere with extended parameters
        static void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);         // Draw sphere wires
        static void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);        // Draw a cylinder/cone
        static void drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color);      // Draw a cylinder with base at startPos and top at endPos
        static void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);   // Draw a cylinder/cone wires
        static void drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color); // Draw a cylinder wires with base at startPos and top at endPos
        static void drawPlane(Vector3 centerPos, Vector2 size, Color color);                                      // Draw a plane XZ
        static void drawRay(Ray ray, Color color);                                                                // Draw a ray line
        static void drawGrid(int slices, float spacing);                                                          // Draw a grid (centered at (0, 0, 0))

        // Model loading/unloading functions
        static Model loadModel(const std::string &fileName);                                                             // Load model from files (meshes and materials)
        static Model loadModelFromMesh(Mesh mesh);                                                                // Load model from generated mesh (default material)
        static void unloadModel(Model model);                                                                     // Unload model (including meshes) from memory (RAM and/or VRAM)
        static void unloadModelKeepMeshes(Model model);                                                           // Unload model (but not meshes) from memory (RAM and/or VRAM)
        static BoundingBox getModelBoundingBox(Model model);                                                      // Compute model bounding box limits (considers all meshes)

        // Model drawing functions
        static void drawModel(Model model, Vector3 position, float scale, Color tint);                            // Draw a model (with texture if set)
        static void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint); // Draw a model with extended parameters
        static void drawModelWires(Model model, Vector3 position, float scale, Color tint);                       // Draw a model wires (with texture if set)
        static void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint); // Draw a model wires (with texture if set) with extended parameters
        static void drawBoundingBox(BoundingBox box, Color color);                                                // Draw bounding box (wires)
        static void drawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint);    // Draw a billboard texture
        static void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint); // Draw a billboard texture defined by source
        static void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint); // Draw a billboard texture defined by source and rotation

        // Mesh management functions
        void uploadMesh(Mesh *mesh, bool dynamic);                                                         // Upload mesh vertex data in GPU and provide VAO/VBO ids
        void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);                 // Update mesh vertex data in GPU for a specific buffer index
        void unloadMesh(Mesh mesh);                                                                        // Unload mesh data from CPU and GPU
        void drawMesh(Mesh mesh, Material material, Matrix transform);                                     // Draw a 3d mesh with material and transform
        void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);           // Draw multiple mesh instances with material and different transforms
        bool exportMesh(Mesh mesh, const std::string &fileName);                                                  // Export mesh data to file, returns true on success
        BoundingBox getMeshBoundingBox(Mesh mesh);                                                         // Compute mesh bounding box limits
        void genMeshTangents(Mesh *mesh);                                                                  // Compute mesh tangents
        void genMeshBinormals(Mesh *mesh);                                                                 // Compute mesh binormals

        // Mesh generation functions
        Mesh genMeshPoly(int sides, float radius);                                                         // Generate polygonal mesh
        Mesh genMeshPlane(float width, float length, int resX, int resZ);                                  // Generate plane mesh (with subdivisions)
        Mesh genMeshCube(float width, float height, float length);                                         // Generate cuboid mesh
        Mesh genMeshSphere(float radius, int rings, int slices);                                           // Generate sphere mesh (standard sphere)
        Mesh genMeshHemiSphere(float radius, int rings, int slices);                                       // Generate half-sphere mesh (no bottom cap)
        Mesh genMeshCylinder(float radius, float height, int slices);                                      // Generate cylinder mesh
        Mesh genMeshCone(float radius, float height, int slices);                                          // Generate cone/pyramid mesh
        Mesh genMeshTorus(float radius, float size, int radSeg, int sides);                                // Generate torus mesh
        Mesh genMeshKnot(float radius, float size, int radSeg, int sides);                                 // Generate trefoil knot mesh
        Mesh genMeshHeightmap(Image heightmap, Vector3 size);                                              // Generate heightmap mesh from image data
        Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);                                            // Generate cubes-based map mesh from image data

        // Material loading/unloading functions
        static Material *loadMaterials(const std::string &fileName, int *materialCount);                                 // Load materials from model file
        static Material loadMaterialDefault();                                                                // Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
        static void unloadMaterial(Material material);                                                            // Unload material from GPU memory (VRAM)
        static void setMaterialTexture(Material *material, int mapType, Texture2D texture);                       // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
        static void setModelMeshMaterial(Model *model, int meshId, int materialId);                               // Set material for a mesh

        // Model animations loading/unloading functions
        static ModelAnimation *loadModelAnimations(const std::string &fileName, unsigned int *animCount);                // Load model animations from file
        static void updateModelAnimation(Model model, ModelAnimation anim, int frame);                            // Update model animation pose
        static void unloadModelAnimation(ModelAnimation anim);                                                    // Unload animation data
        static void unloadModelAnimations(ModelAnimation* animations, unsigned int count);                        // Unload animation array data
        static bool isModelAnimationValid(Model model, ModelAnimation anim);                                      // Check model animation skeleton match

        // Collision detection functions
        bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2);        // Check collision between two spheres
        bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);                                      // Check collision between two bounding boxes
        bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius);                       // Check collision between box and sphere
        RayCollision getRayCollisionSphere(Ray ray, Vector3 center, float radius);                         // Get collision info between ray and sphere
        RayCollision getRayCollisionBox(Ray ray, BoundingBox box);                                         // Get collision info between ray and box
        RayCollision getRayCollisionModel(Ray ray, Model model);                                           // Get collision info between ray and model
        RayCollision getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform);                            // Get collision info between ray and mesh
        RayCollision getRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3);                 // Get collision info between ray and triangle
        RayCollision getRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4);         // Get collision info between ray and quad
    private:
    };
}

#endif //INDIESTUDIO_MODELS_HPP
