#ifndef LEARNOPENGL_MESHLOADER_H
#define LEARNOPENGL_MESHLOADER_H


#include "Loader.h"
#include "../Render/Data/Mesh.h"

class MeshLoader : public Loader<Mesh>{
protected:
    Mesh* OnLoad(std::string &path) override;
};


#endif
