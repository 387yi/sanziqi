#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("******* 1.play   0.exit****\n");
	printf("***************************\n");
}
void gam()
{
	//����-����߳���������Ϣ
	char board[ROWS][COLS] = {0};//ȫ���ո�
	char boards[ROWS][COLS] = {0};
	//��ʼ������;
	IntBoa(board, ROWS, COLS, '0');
	IntBoa(boards, ROWS, COLS, '*');
	//������
	buzhi(board, ROW, COL);
	//��ӡ����
	Displ(boards, ROW, COL);
	//����
	int zx = ROW * COL - zadan;
	while(zx) {
		pailei(board, ROW, COL);
		Displ(boards, ROW, COL);
		zx--;
	}
	if (zx == 0)
	{
		printf("��Ӯ��");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			gam();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("������ѡ��\n");
			break;
		}
		}
		if (input == 0)
			break;
	} while (1);
}
int main() {
	test();
	return 0;
}

