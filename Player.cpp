#include "Player.h"

Player::Player()
{
	pos_ = VECTOR(100, 100);
}

Player::~Player()
{
}

void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_LEFT))
	{
		pos_.x -= 1.0f;
	}
	if (CheckHitKey(KEY_INPUT_RIGHT))
	{
		pos_.x += 1.0f;
	}

}

void Player::Draw()
{
	DrawBox(pos_.x, pos_.y, pos_.x+100, pos_.y+100, GetColor(255, 0, 0), TRUE);
}
