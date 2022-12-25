#ifndef LEARNOPENGL_RENDERMESHJOB_H
#define LEARNOPENGL_RENDERMESHJOB_H

#include "../../Core/Job.h"

class RenderMeshJob : public Job{
public:
    void Update() override;
    void SetMesh(Mesh &mesh);
    void SetMaterial(Material &material);
};

#endif
