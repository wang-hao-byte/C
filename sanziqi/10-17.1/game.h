#include<stdio.h>
#define ROW  3
#define COL 3
void init_board(char board[ROW][COL], int row, int col);
void show_board(char board[ROW][COL], int row, int col);
void player_run(char board[ROW][COL], int row, int col);
void computer_run(char board[ROW][COL], int row, int col);
#include<time.h>
#include<stdlib.h>
//玩家赢*
//电脑赢#
//平局'Q;
//继续“C”
char judge_win(char board[ROW][COL], int row, int col);