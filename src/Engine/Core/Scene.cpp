#include "Scene.h"
#include "Jobs/TransformJob.h"
#include "../Render/Jobs/RenderMeshJob.h"

Scene::Scene()
{
    engine = new Engine();
}

Scene::~Scene() {
    delete engine;
}

void Scene::Update()
{
    engine->Update();
}

void Scene::Render()
{
    engine->Render();
}

Entity *Scene::SpawnSceneObject(std::string& name, Mesh& mesh, Material& material)
{
    Entity* obj = engine->CreateEntity(name);

    obj->CreateJob<TransformJob>();

    RenderMeshJob* render = obj->CreateJob<RenderMeshJob>();
    render->SetMesh(mesh);
    render->SetMaterial(material);

    return obj;
}


