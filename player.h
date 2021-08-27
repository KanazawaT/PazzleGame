#pragma once

class Player {
private:
	int x;//プレイヤーのx座標
	int y;//プレイヤーのy座標
public:
	void setPoint(int, int);//プレイヤーの座標初期化
	void move();//キーボードorコントローラ入力読んでプレイヤー移動
	void draw();//表示(ScreenFlip不要)
};