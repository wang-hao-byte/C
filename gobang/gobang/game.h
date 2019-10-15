#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW  3//define定义常量不需要赋值号
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void ShowBoard(char board[ROW][COL], int row, int col);
void PlayerRun(char board[ROW][COL], int row, int col);
void ComputerRun(char board[ROW][COL], int row, int col);
//玩家赢*
//电脑赢#
//平局p
//继续c
char JudgeWin(char board[ROW][COL], int row, int col);