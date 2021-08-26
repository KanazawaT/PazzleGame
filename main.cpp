#include "DxLib.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	ChangeWindowMode(TRUE);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	DrawPixel(320, 240, GetColor(255, 255, 255));	// 点を打つ

	DrawBox(0, 0, 320, 240, 0xffffff, TRUE);

	DrawBox(640, 480, 320, 240, 0xff0000, TRUE);

	//↓たみ
	//aaaaa:wq

	//↓felsen
	//न     म       स्      (ते)
	
	//↓disel

	//↓kiyo
	SetFontSize(64);                             //サイズを64に変更
	SetFontThickness(1);                         //太さを1に変更
	ChangeFont("HGS創英角ﾎﾟｯﾌﾟ体");                     //種類をHGS創英角ﾎﾟｯﾌﾟ体に変更
	ChangeFontType(DX_FONTTYPE_ANTIALIASING);     //アンチエイリアスフォントに変更
	DrawFormatString(0, 0, GetColor(0, 255, 0), "न     म       स्      (ते)"); // 文字を描画する


	//↓2403
	//أهلا

	WaitKey();				// キー入力待ち

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
