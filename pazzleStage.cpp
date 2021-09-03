#include "DxLib.h"
#include "pazzleStage.h"

#define MAP_WIDTH	50			// マップの幅
#define MAP_HEIGHT	50			// マップの縦長さ

void PazzleStage::main() {
	while (ProcessMessage() != -1) {//メインループ。入力待機、プレイヤー移動とEscape押下で終了、表示
		
	}
}

void PazzleStage::draw(int width, int height) {//ゲーム画面の表示。プレイヤーと盤面

	//width:画面の幅
	//height:画面の縦長さ

	ClearDrawScreen();


	//背景表示：全一色
	DrawBox(0, 0, width, height, GetColor(200, 200, 200), TRUE);  //



	//背景表示：画像貼り付け（RPG風）

	image = LoadGraph("画像のファイル先");  //画像ファイルの読み込み

	for (int i = 0; i < width / MAP_WIDTH; i++) {
		for (int j = 0; j < height / MAP_HEIGHT; j++) {
			DrawExtendGraph(i * MAP_WIDTH, j * MAP_HEIGHT, (i + 1) * MAP_WIDTH, (j  + 1) * MAP_HEIGHT, image, TRUE);  //画像ファイルの表示
		}
	}
	DeleteGraph(image);  //ファイルデーターを手放す


	//背景表示：碁盤の目
	DrawBox(0, 0, width, height, GetColor(200, 200, 200), TRUE);

	for (int i = 0; i < width / MAP_WIDTH; i++) {
		for (int j = 0; j < height / MAP_HEIGHT; j++) {
			DrawBox(i * MAP_WIDTH - 3, j * MAP_HEIGHT - 3, i * MAP_WIDTH + 3, j * MAP_HEIGHT + 3, GetColor(20, 20, 20), TRUE);
		}
	}

	ScreenFlip();
}