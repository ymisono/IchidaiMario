/*
当たり判定関連のあれやこれ
衝突判定と
衝突応答両方いれる
*/
#pragma once
#include"MyTypes.h"
#include<GameElements.h>

namespace Inferno
{
	//衝突検出
	bool IsPointInsideRect(const int x, const int y, const Rect& r);
	bool IsPointInsideRect(const Vec2<int>& v, const Rect& r);

	bool IsRect1HittingRect2(const Rect& r1, const Rect& r2);
	bool IsRect1NotHittingRect2(const Rect& r1, const Rect& r2);

	//衝突応答
	Vec2<int> KeepSubInsideRect(const Rect& r1, const Rect& r2);

}
