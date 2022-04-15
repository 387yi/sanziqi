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
	//数组-存放走出的棋盘信息
	char board[ROWS][COLS] = {0};//全部空格
	char boards[ROWS][COLS] = {0};
	//初始化棋盘;
	IntBoa(board, ROWS, COLS, '0');
	IntBoa(boards, ROWS, COLS, '*');
	//布置雷
	buzhi(board, ROW, COL);
	//打印棋盘
	Displ(boards, ROW, COL);
	//排雷
	int zx = ROW * COL - zadan;
	while(zx) {
		pailei(board, ROW, COL);
		Displ(boards, ROW, COL);
		zx--;
	}
	if (zx == 0)
	{
		printf("你赢了");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：》");
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
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("请重新选择\n");
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

