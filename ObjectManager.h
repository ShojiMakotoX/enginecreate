#pragma once

class ObjectBase;
namespace ObjectManager
{
	void Initlaize();//初期化
	void Update();//更新
	void Draw();//描画
	void Release();//取り除く
	void Push(ObjectBase * obj);//配列に入れるための関数

}
