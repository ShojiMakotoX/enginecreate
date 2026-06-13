#include "Player.h"
#include "PlayerBullet.h"
#include "globals.h"

Player::Player()
{
	pos_ = VECTOR(100, 500);
}

Player::~Player()
{
}

void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_LEFT))
	{
		pos_.x -= 3.0f;
		if (pos_.x < WIN_WIDTH)
		{
			pos_.x = 0.0f;
		}
	}
	if (CheckHitKey(KEY_INPUT_RIGHT))
	{
		pos_.x += 3.0f;
		if (pos_.x > WIN_WIDTH)
		{
			pos_.x = WIN_WIDTH;
		}
	}
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		new PlayerBullet();
	}

}

void Player::Draw()
{
	DrawBox(pos_.x, pos_.y, pos_.x + 50, pos_.y + 50, GetColor(0, 0, 255), TRUE);
}
