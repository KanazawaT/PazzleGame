#include "player.h"
#include "DxLib.h"

void Player::setPoint(int x, int y) {//�v���C���[�̍��W������

}

void Player::move() {//�L�[�{�[�hor�R���g���[�����͓ǂ�Ńv���C���[�ړ�

}

void Player::draw() {//�\��(ScreenFlip�s�v)
	int charSize = 5;

	int x =this->pos.getX();
	int y = this->pos.getY();

	DrawCircle(x, y, charSize, GetColor(255, 255, 255), 1);

	//ScreenFlip();//����ʂ̕\����\�Ɏ����Ă���B���ꂪ�Ȃ��ƕ\������Ȃ������̊֐��ł͕K�v�Ȃ��̂Ńf�o�b�O�p�Ɏg���ďڂ����̓O�O����

}