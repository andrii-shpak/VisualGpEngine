#include "Entity.h"

Entity::Entity(const std::string &name) : name(name)
{
    jobs = new std::vector<Job*>();
}
Entity::~Entity() {
    for(Job* job : *jobs)
        delete job;

    jobs->clear();
    delete jobs;
}

void Entity::RemoveJob(Job *jobToRemove)//can we avoid pointer here
{
    jobs->erase(find(jobs->begin(),jobs->end(),jobToRemove));
    delete jobToRemove;
}

void Entity::Update() {
    for(Job* job : *jobs)
        job->Update();
}

void Entity::Render() {
    for(Job* job : *jobs)
        job->Render();
}







