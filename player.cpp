#include "player.h"
#include "DxLib.h"

void Player::setPoint(int x, int y) {//プレイヤーの座標初期化

}

void Player::move() {//キーボードorコントローラ入力読んでプレイヤー移動

}

void Player::draw() {//表示(ScreenFlip不要)
	int charSize = 5;

	int x =this->pos.getX();
	int y = this->pos.getY();

	DrawCircle(x, y, charSize, GetColor(255, 255, 255), 1);

	//ScreenFlip();//裏画面の表示を表に持ってくる。これがないと表示されないがこの関数では必要ないのでデバッグ用に使って詳しくはググって

}