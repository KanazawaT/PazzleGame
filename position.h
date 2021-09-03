#pragma once

class Position {
private:
	int x;//x座標
	int y;//y座標
public:
	void setP(int, int);//プレイヤーの座標初期化
	int getX();
	int getY();
};