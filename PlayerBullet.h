#pragma once
#include "ObjectBase.h"
class PlayerBullet :
    public ObjectBase
{
public:
    PlayerBullet();
    ~PlayerBullet();
    void Update()override;
    void Draw()override;
private:
    VECTOR pos_;
    VECTOR vel_;
};

