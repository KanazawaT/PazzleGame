#include "DxLib.h"
#include "pazzleStage.h"

void PazzleStage::main() {
	while (ProcessMessage() != -1) {//メインループ。入力待機、プレイヤー移動とEscape押下で終了、表示
		
	}
}

void PazzleStage::draw() {//ゲーム画面の表示。プレイヤーと盤面
	ClearDrawScreen();
	ScreenFlip();
}