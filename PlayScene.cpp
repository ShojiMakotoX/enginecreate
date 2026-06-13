#include "PlayScene.h"
#include "Player.h"
#include "Enemy.h"
#include "Stage.h"


PlayScene::PlayScene()
{
	new Stage();
	new Player();
	new Enemy();
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
	DrawFormatString(100, 100, GetColor(255, 255, 255), "game", TRUE);
}
