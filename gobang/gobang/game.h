#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW  3//define���峣������Ҫ��ֵ��
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void ShowBoard(char board[ROW][COL], int row, int col);
void PlayerRun(char board[ROW][COL], int row, int col);
void ComputerRun(char board[ROW][COL], int row, int col);
//���Ӯ*
//����Ӯ#
//ƽ��p
//����c
char JudgeWin(char board[ROW][COL], int row, int col);