#include "player.h"
#include "DxLib.h"

void Player::setPoint(int x, int y) {//プレイヤーの座標初期化
	this->pos.setP(x, y);
	//この関数基本的過ぎて単体テストできないやんけ
}

void Player::move() {//キーボードorコントローラ入力読んでプレイヤー移動

}

void Player::draw() {//表示(ScreenFlip不要)
	//ScreenFlip();//裏画面の表示を表に持ってくる。これがないと表示されないがこの関数では必要ないのでデバッグ用に使って詳しくはググって
}