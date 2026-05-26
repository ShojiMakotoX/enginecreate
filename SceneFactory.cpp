#include "SceneFactory.h"
#include "BootScene.h"
#include "TitleScene.h"
#include "PlayScene.h"

void SceneFactroy::SceneOpen(SCENE_NAME scenename)
{
	switch (scenename)
	{
	case SCENE_NAME::BOOT:
		new BootScene();
		break;
	case SCENE_NAME::TITLE:
		new TitleScene();
		break;
	case SCENE_NAME::PLAY:
		new PlayScene();
		break;
	default:
		break;
	
	}
}
