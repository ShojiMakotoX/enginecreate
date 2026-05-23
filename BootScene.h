#pragma once
#include "ObjectBase.h"
class BootScene :
    public ObjectBase
{
public:

    BootScene();
    ~BootScene();
    void Update()override;
    void Draw()override;
};

