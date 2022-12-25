#ifndef LEARNOPENGL_RENDERWRAPPER_H
#define LEARNOPENGL_RENDERWRAPPER_H


#include "../../Data/Texture.h"

class RenderWrapper {
public:
    void SetRenderTarget(const Texture &texture);
    void SetFloat();
    void SetVector();
    void SetMatrix();
    void SetTexture();
    void SetVertices();
    void SetIndices();
};


#endif
