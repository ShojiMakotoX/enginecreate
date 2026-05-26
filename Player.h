#pragma once
#include "ObjectBase.h"
#include <vector>

class Player :
    public ObjectBase
{
    Player();
    ~Player();
    void Update()override;
    void Draw()override;
private:
    VECTOR pos_;
    VECTOR vel_;


};

