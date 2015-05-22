#include"MarioMain.h"
#include<Game.h>
#include<Input.h>
#include<GameElements.h>

namespace
{
	//敵キャラなどの変数はここに書ける
	Instant teki;

}

//初期化
void MarioGame::Initialize()
{
	Base::Initialize();
	SetTitleText("市大マリオ"); //ウィンドウタイトルに表示する文字列

	//ここから初期化処理
	teki.Initialize();
	teki.LoadTextureFromFile(m_graphics, "Resource\\teki.bmp");


}

//ゲームループ（処理はここに書いていく）
void MarioGame::GameLoop()
{
	Base::GameLoop();

	//ここからゲーム本体処理

	//入力例
	if (m_input.IsKeyPressed('A'))
	{
		MessageBox(nullptr,"Aが押されました","Message",MB_OK);
	}

	//敵を動かす
	teki.AMove(200, 200);

}

//描画
void MarioGame::Draw()
{
	if (BeginDrawing() == true)
	{
		//ここに描画処理を書く
		teki.Draw(m_graphics);

	}
	EndDrawing();
}