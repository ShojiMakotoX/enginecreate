#include "ObjectManager.h"
#include "ObjectBase.h"
#include <list>

namespace 
{
	//リストを作る
	std::list<ObjectBase*>* objects;
}

void ObjectManager::Push(ObjectBase *obj)
{
	//値をpush_backに入れる
	objects->push_back(obj);
}
