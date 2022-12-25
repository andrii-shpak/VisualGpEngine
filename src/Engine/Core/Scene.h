#ifndef LEARNOPENGL_SCENE_H
#define LEARNOPENGL_SCENE_H


#include "Engine.h"
#include "../Render/Data/Mesh.h"
#include "../Render/Data/Material.h"

class Scene {
private:
    Engine* engine;

public:
    Scene();
    virtual ~Scene();

    void Update();
    void Render();

    Entity *SpawnSceneObject(std::string& name, Mesh& mesh, Material& material);
};


#endif
