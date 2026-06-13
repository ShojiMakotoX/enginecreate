#include "Stage.h"
#include "globals.h"


Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Update()
{
	//スクロール処理を入れる
	scrollY += 1.0f;
}

void Stage::Draw()
{
	DrawBox(0, 0, WIN_WIDTH, WIN_HEIGHT, GetColor(71, 136, 94), TRUE);
}
