#pragma once
#include "ObjectManager.h"

class ObjectBase 
{
	ObjectBase()
	{
		ObjectManager::Push(this);
	};
};



