#include "TitleScene.h"
#include "ObjectManager.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

void TitleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		ObjectManager::SceneSlect(SCENE_NAME::PLAY);
	}
}

void TitleScene::Draw()
{
	DrawFormatString(200, 300, GetColor(255, 255, 255), "Press Space to Start.", FALSE);
}
