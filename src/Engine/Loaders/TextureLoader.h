#ifndef LEARNOPENGL_TEXTURELOADER_H
#define LEARNOPENGL_TEXTURELOADER_H

#include "../Render/Data/Texture.h"
#include "Loader.h"

class TextureLoader : public Loader<Texture>
{
protected:
    Texture *OnLoad(std::string &path) override;
};

#endif
