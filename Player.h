#pragma once
#include "ObjectBase.h"

class Player :
    public ObjectBase
{
    Player();
    ~Player();
    void Update()override;
    void Draw()override;
private:


};

