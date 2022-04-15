#include<windows.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define zadan 10


void IntBoa(char board[ROWS][COLS], int row, int col, char ex);
void Displ(char boards[ROWS][COLS], int row, int col);
void buzhi(char board[ROWS][COLS], int row, int col);
void pailei(char board[ROWS][COLS], int row, int col);
char fanhui(char board[ROWS][COLS], int x, int y);
char shenti(char board[ROWS][COLS], int x, int y);