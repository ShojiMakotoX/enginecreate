#pragma once
#include "ObjectBase.h"
class Stage :
    public ObjectBase
{
public:
    Stage();
    ~Stage();
    void Update()override;
    void Draw()override;
private:
    VECTOR pos_;
    VECTOR vel_;
};

