#include "ObjectManager.h"
#include "ObjectBase.h"
#include <list>

namespace 
{
	//リストを作る（型を作っただけ）
	std::list<ObjectBase*>* objects;

	//住所を作成
	SceneFactroy* factory;
	SCENE_NAME nowscene;
	SCENE_NAME nextscene;




}

void ObjectManager::Initlaize()
{
	//実態を作って、中身を入れる
	objects = new std::list<ObjectBase*>;
	factory = new SceneFactroy();
	factory->SceneOpen(BOOT);//BootSceneの呼ぶ場所はここ

	
}

void ObjectManager::Update()
{
	for (ObjectBase* obj : *objects)
	{
		if (obj == nullptr)
		{
			continue;
		}
		else
		{
			obj->Update();
		}
	}

	//auto = 自動で型を合わせてくれる
	for (auto itr = objects->begin(); itr != objects->end();)
	{
		ObjectBase* obj = *itr;
		if (obj->IsDead())
		{
			//erase　指定した要素をリストから消して、次の要素を返す
			//メモリの中には動いていないけど、クラス生きている　＝　使っていないクラスがメモリ内に

			itr = objects->erase(itr);
		}
		else
		{
			itr++;
		}
	}



	//
	if (nowscene != nextscene)
	{
		for (ObjectBase* obj : *objects)
		{
			//全てのシーンをデストロイする
			obj->DestroyMe();
		}
		factory->SceneOpen(nextscene);
		nowscene = nextscene;
	}
}

void ObjectManager::Draw()
{
	for (ObjectBase* obj : *objects)
	{
		if (obj == nullptr)
		{
			continue;
		}
		else
		{
			obj->Draw();
		}
	}
}

void ObjectManager::Release()
{
}

void ObjectManager::Push(ObjectBase *obj)
{
	//値をpush_backに入れる
	objects->push_back(obj);
}

void ObjectManager::SceneSlect(SCENE_NAME scenename)
{
	//次のシーンへ
	nextscene = scenename;
}
