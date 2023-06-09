#pragma once
#include"../libs/frameWork/object.h"

class TitleObject :public Object {
public:
	TitleObject(Scene* sc)	;
	~TitleObject()	override;
	void Init()		override { Object::Init(); }
	void Update()	override { Object::Update(); }
	void Draw()		override { Object::Draw(); }

	/// <summary>
	/// 終了するキーを押したか
	/// </summary>
	/// <param name="true	">押した</param>
	/// <param name="false	">押してない</param>
	/// <returns></returns>
	bool EndKeyInput()		;

private:
};