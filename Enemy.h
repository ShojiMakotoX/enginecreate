#pragma once
#include "ObjectBase.h"
class Enemy :
    public ObjectBase
{
public:
    Enemy();
    ~Enemy();
    void Update()override;
    void Draw()override;
private:
    VECTOR pos_;
    VECTOR vel_;
};

