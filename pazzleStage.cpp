#include "DxLib.h"
#include "pazzleStage.h"

void PazzleStage::main() {
	while (ProcessMessage() != -1) {//���C�����[�v�B���͑ҋ@�A�v���C���[�ړ���Escape�����ŏI���A�\��
		
	}
}

void PazzleStage::draw() {//�Q�[����ʂ̕\���B�v���C���[�ƔՖ�
	ClearDrawScreen();
	ScreenFlip();
}