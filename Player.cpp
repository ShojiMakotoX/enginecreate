#include "Player.h"

Player::Player()
{
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
	DrawBox(200, 200, 300, 300, GetColor(255, 0, 0), TRUE);
}
