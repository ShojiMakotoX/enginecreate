#pragma once

enum SCENE_NAME//大文字のほうがいい　理由　enumは定数だから
{
	BOOT,//一番最初に呼ばれる
	TITLE,
	PLAY
};

class SceneFactroy
{
public:
	void SceneOpen(SCENE_NAME scenename);//変数は頭文字小文字
};