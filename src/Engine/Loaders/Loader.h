#ifndef LEARNOPENGL_LOADER_H
#define LEARNOPENGL_LOADER_H

#include <string>
#include <vector>
#include "IAsset.h"

template <class T>
class Loader {
private:
    std::vector<IAsset*>* cache;
protected:
    virtual T* OnLoad(std::string& path) = 0;
public:
    Loader();
    virtual ~Loader();
    T* Load(std::string& path);
};

template<class T>
Loader<T>::Loader() {
    cache = new std::vector<IAsset*>();
}

template<class T>
Loader<T>::~Loader() {
    for(IAsset* job : *cache)
        delete job;

    cache->clear();
    delete cache;
}

template<class T>
T *Loader<T>::Load(std::string &path) {
    T* product = OnLoad(path);
    return product;
}

#endif
