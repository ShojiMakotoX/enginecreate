#pragma once
#include "ObjectBase.h"
class TitleScene :
    public ObjectBase
{
public:
    TitleScene();
    ~TitleScene();
    void Update()override;
    void Draw()override;
};

