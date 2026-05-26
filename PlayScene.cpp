#include "PlayScene.h"
#include "Player.h"

PlayScene::PlayScene()
{
	new Player();
}

PlayScene::~PlayScene()
{
}

void PlayScene::Update()
{
	if (CheckHitKey(KEY_INPUT_B))
	{
		ObjectManager::SceneSlect(SCENE_NAME::TITLE);
	}
}

void PlayScene::Draw()
{
	DrawFormatString(100, 100, GetColor(255, 255, 255), "Game", FALSE);
}
