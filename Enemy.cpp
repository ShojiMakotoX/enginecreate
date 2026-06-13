#include "Enemy.h"

Enemy::Enemy()
{
	pos_ = VECTOR(200, 200);
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	//弾を発射させて、当たり判定すればいけるかな
}

void Enemy::Draw()
{
	DrawBox(pos_.x, pos_.y, pos_.x + 100, pos_.y + 100, GetColor(255, 0, 0), TRUE);
}
