#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void IntBoa(char board[ROWS][COLS], int rows, int cols, char ex)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ex;
		}
	}
}
void Displ(char boards[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=col; i++)
	{
		printf("%d", i);
		for (j = 1; i <=row; j++)
		{
			printf("%c ", boards[i][j]);
		}
	}
}
void buzhi(char board[ROWS][COLS], int row, int col)
{
	int x = rand() * 9 + 1;
	int y = rand() * 9 + 1;
	int zadan1 = zadan;
	while (zadan1)
	{
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			zadan1--;
		}	
	}
}
char fanhui(char board[ROWS][COLS], int x, int y)
{
	int rst = 0;
	int i = 0;
	int j = 0;
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] +
		board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] +
		board[x + 1][y + 1] + board[x - 1][y] - 8 * '0';
}
char shenti(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (fanhui(board, i, j) ==0)
			{
				fanhui(board, i, j);
				return shenti(board, i, j);
			}
			else
			{
				return fanhui(board, i, j);
				break;
			}
		}
	}
}
void pailei(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入下的坐标：》");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row || y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{

				printf("你被炸死了");
				break;
			}
			else if (board[x][y] == '0')
			{
				board[x][y] = fanhui(board,x,y);
				if (fanhui(board, x, y) == 0)
				{
					shenti(board, x, y);
				}
				break;
			}
		}
		else
		{
			printf("输出区域不合法");
		}
	}
}
