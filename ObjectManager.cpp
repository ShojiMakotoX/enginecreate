#include "ObjectManager.h"
#include "ObjectBase.h"
#include <list>

namespace 
{
	//リストを作る（型を作っただけ）
	std::list<ObjectBase*>* objects;
}

void ObjectManager::Initlaize()
{
	//実態を作って、中身を入れる
	objects = new std::list<ObjectBase*>;
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
}

void ObjectManager::Draw()
{
}

void ObjectManager::Release()
{
}

void ObjectManager::Push(ObjectBase *obj)
{
	//値をpush_backに入れる
	objects->push_back(obj);
}
