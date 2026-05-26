#pragma once
#include "ObjectBase.h"
class PlayScene :
    public ObjectBase
{
public:
    PlayScene();
    ~PlayScene();
    void Update()override;
    void Draw()override;

};

