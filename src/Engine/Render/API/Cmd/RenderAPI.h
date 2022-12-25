#ifndef LEARNOPENGL_RENDERAPI_H
#define LEARNOPENGL_RENDERAPI_H


#include "../../Data/Mesh.h"
#include "../../Data/Material.h"
#include "RenderCommandBuffer.h"

//Singleton
class RenderAPI {
public:
    void RunCommandBuffer(RenderCommandBuffer cmd);
};


#endif
