#pragma once
#include "player.h"

class PazzleStage {
private:
	int image;

	class player* play;

public:
	void main();//メインループ。入力待機、プレイヤー移動とEscape押下で終了、表示
	void draw(int width, int height);//ゲーム画面の表示。プレイヤーと盤面
};