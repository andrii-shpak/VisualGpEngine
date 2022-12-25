#include "Engine.h"

Engine::Engine()
{
    entities = new std::vector<Entity*>();
}

Engine::~Engine()
{
    for (Entity* obj : *entities)
        delete obj;
    entities->clear();
    delete entities;
}

Entity *Engine::CreateEntity(std::string& name)
{
    Entity* entity = new Entity(name);
    entities->push_back(entity);
    return entity;
}

void Engine::Update() {
    for (Entity* obj : *entities)
        obj->Update();
}

void Engine::Render() {
    for (Entity* obj : *entities)
        obj->Render();
}


