#pragma once

class Player {
private:
	int x;//�v���C���[��x���W
	int y;//�v���C���[��y���W
public:
	void setPoint(int, int);//�v���C���[�̍��W������
	void move();//�L�[�{�[�hor�R���g���[�����͓ǂ�Ńv���C���[�ړ�
	void draw();//�\��(ScreenFlip�s�v)
};