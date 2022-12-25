#ifndef LEARNOPENGL_LIGHTJOB_H
#define LEARNOPENGL_LIGHTJOB_H

#include "../../Core/Job.h"

class LightJob : public Job{
public:
    void Update() override;
    void Render() override;
};


#endif
