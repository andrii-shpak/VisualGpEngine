#ifndef LEARNOPENGL_ENGINE_H
#define LEARNOPENGL_ENGINE_H

#include <iostream>
#include <vector>
#include "Entity.h"

class Engine {
private:
    std::vector<Entity*>* entities;
public:
    explicit Engine();
    virtual ~Engine();

    Entity* CreateEntity(std::string& name);

    void Update();
    void Render();
};


#endif
