#include "DxLib.h"
#include "pazzleStage.h"

#define MAP_WIDTH	50			// �}�b�v�̕�
#define MAP_HEIGHT	50			// �}�b�v�̏c����

void PazzleStage::main() {
	while (ProcessMessage() != -1) {//���C�����[�v�B���͑ҋ@�A�v���C���[�ړ���Escape�����ŏI���A�\��
		
	}
}

void PazzleStage::draw(int width, int height) {//�Q�[����ʂ̕\���B�v���C���[�ƔՖ�

	//width:��ʂ̕�
	//height:��ʂ̏c����

	ClearDrawScreen();


	//�w�i�\�� �ȉ��̂R�p�^�[���̂ǂꂩ��I��


	//�w�i�\���F�S��F
	DrawBox(0, 0, width, height, GetColor(200, 200, 200), TRUE);



	//�w�i�\���F�摜�\��t���iRPG���j

	image = LoadGraph("�摜�̃t�@�C����");  //�摜�t�@�C���̓ǂݍ���

	for (int i = 0; i < width / MAP_WIDTH; i++) {
		for (int j = 0; j < height / MAP_HEIGHT; j++) {
			DrawExtendGraph(i * MAP_WIDTH, j * MAP_HEIGHT, (i + 1) * MAP_WIDTH, (j  + 1) * MAP_HEIGHT, image, TRUE);  //�摜�t�@�C���̕\��
		}
	}
	DeleteGraph(image);  //�t�@�C���f�[�^�[����������


	//�w�i�\���F��Ղ̖�
	DrawBox(0, 0, width, height, GetColor(200, 200, 200), TRUE);

	for (int i = 1; i < width / MAP_WIDTH; i++) {
		DrawBox(i * MAP_WIDTH - 3, 0, i * MAP_WIDTH + 3, height, GetColor(20, 20, 20), TRUE);  //�c���̕\��
	}
	for (int j = 1; j < height / MAP_HEIGHT; j++) {
		DrawBox(0, j * MAP_HEIGHT - 3, width, j * MAP_HEIGHT + 3, GetColor(20, 20, 20), TRUE);  //�����̕\��
	}



	//�v���C���[�\��

	play = new player();  //player�N���X�� new ������

	play->draw();  //player�N���X��draw�֐������s����

	delete play;  //player�N���X�̃f�[�^����������



	ScreenFlip();
}