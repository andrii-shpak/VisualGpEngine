#ifndef LEARNOPENGL_ENTITY_H
#define LEARNOPENGL_ENTITY_H

#include "Job.h"
#include <iostream>
#include <vector>

class Entity {
private:
    std::string name;
    std::vector<Job*>* jobs;
public:
    explicit Entity(const std::string &name);

    virtual ~Entity();

    //template <class T,class = std::enable_if_t<std::is_base_of_v<Job, T>>> todo why error?
    template<class T>
    T* CreateJob();
    void RemoveJob(Job* job);
    void Update();

    void Render();
};

template<class T>
T* Entity::CreateJob() {
    T* job = new T();
    jobs->push_back(job);
    return job;
}

#endif
