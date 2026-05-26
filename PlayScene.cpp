#include "PlayScene.h"

PlayScene::PlayScene()
{
}

PlayScene::~PlayScene()
{
}

void PlayScene::Update()
{
}

void PlayScene::Draw()
{
	DrawBox(200, 200, 300, 300, GetColor(255, 0, 0), TRUE);
}
