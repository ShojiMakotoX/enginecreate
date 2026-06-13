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
	//スクロールできたら取り入れたいけど…
}

void Stage::Draw()
{
	DrawBox(0, 0, WIN_WIDTH, WIN_HEIGHT, GetColor(71, 136, 94), TRUE);
}
