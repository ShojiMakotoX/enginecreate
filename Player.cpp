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

	}
}

void Player::Draw()
{
	DrawBox(200, 200, 300, 300, GetColor(255, 0, 0), TRUE);
}
