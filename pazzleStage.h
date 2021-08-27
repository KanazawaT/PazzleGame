#pragma once
#include "player.h"

class PazzleStage {
private:
public:
	void main();//メインループ。入力待機、プレイヤー移動とEscape押下で終了、表示
	void draw();//ゲーム画面の表示。プレイヤーと盤面
};