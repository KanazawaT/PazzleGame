#pragma once
#include "position.h"

class Player {
private:
	Position pos;
public:
	void setPoint(int, int);//プレイヤーの座標初期化
	void move();//キーボードorコントローラ入力読んでプレイヤー移動
	void draw();//表示(ScreenFlip不要)
};