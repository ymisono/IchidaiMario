/*
MarioMain.h
�}���I�{�̂̃w�_�[
*/
#pragma once
#include<Game.h>
#include<Input.h>


class MarioGame : public Inferno::Game
{
public:
	bool Initialize();
	bool GameLoop();

private:
	//�e���Ăׂ�悤��
	typedef Game Base;
};