#pragma once
#include "position.h"

class Player {
private:
	Position pos;
public:
	void setPoint(int, int);//�v���C���[�̍��W������
	void move();//�L�[�{�[�hor�R���g���[�����͓ǂ�Ńv���C���[�ړ�
	void draw();//�\��(ScreenFlip�s�v)
};