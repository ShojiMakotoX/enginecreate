#pragma once
#include "ObjectManager.h"

class ObjectBase
{
public://忘れるとprivate扱いになる
	ObjectBase()
	{
		ObjectManager::Push(this);
	}

	void Initlaize();//初期化
	virtual void Update();//更新
	void Draw();//描画
	void Release();//取り除く
};



