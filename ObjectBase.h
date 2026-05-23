#pragma once
#include "ObjectManager.h"
#include "DxLib.h"

class ObjectBase
{
public://忘れるとprivate扱いになる
	ObjectBase()
	{
		isDead = false;//処理順番を意識すると、先に処理されるべきなのがこれ
		ObjectManager::Push(this);
	}

	void Initlaize();//初期化
	virtual void Update();//更新
	virtual void Draw();//描画
	void Release();//取り除く
	void DestroyMe()
	{
		isDead = true;
	}
	bool IsDead()
	{
		return isDead;
	}
protected:
	bool isDead;//死なせる
	
	
};



