#ifndef LEARNOPENGL_RENDERCOMMANDBUFFER_H
#define LEARNOPENGL_RENDERCOMMANDBUFFER_H


#include "RenderCommand.h"

class RenderCommandBuffer {
public:
    void AddCommand(RenderCommand* cmd);
};


#endif
