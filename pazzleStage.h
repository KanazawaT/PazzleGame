#pragma once
#include "player.h"

class PazzleStage {
private:
	int image;

	class player* play;

public:
	void main();//���C�����[�v�B���͑ҋ@�A�v���C���[�ړ���Escape�����ŏI���A�\��
	void draw(int width, int height);//�Q�[����ʂ̕\���B�v���C���[�ƔՖ�
};