#ifndef LEARNOPENGL_JOB_H
#define LEARNOPENGL_JOB_H

#include "../Render/Data/Mesh.h"
#include "../Render/Data/Material.h"

class Job {
public:
    Job();
    virtual ~Job();

    virtual void Update() = 0;
    virtual void Render();
};

#endif
