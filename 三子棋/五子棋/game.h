#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
char IsWin(char board[ROW][COL], int row, int col);
void draw_chessman(int type, char* tableline) {
	if (type == WHITE)
		printf("●");
	if (type == BLACK)
		printf("○");
	if (type == BLANK)
		printf("%s", tableline);//此处传入另一个参数tableline,是为了绘制棋盘更加方便

}