#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);
void draw_chessman(int type, char* tableline) {
	if (type == WHITE)
		printf("��");
	if (type == BLACK)
		printf("��");
	if (type == BLANK)
		printf("%s", tableline);//�˴�������һ������tableline,��Ϊ�˻������̸��ӷ���

}