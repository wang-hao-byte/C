#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void show_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c |" ,board[i][j]);
			//printf("---|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
}
void player_run(char board[ROW][COL], int row, int col)
{
	printf("玩家走->\n");
	/*int i = 0;
	int j = 0;*/
	int x = 0;
	int y = 0;
	printf("请输入坐标：\n");
	/*for (i = 0; i < row; i++)
	{
	for (j = 0; j < col; j++)
	{
	if (board[i][j] == ' ')
	{
	board[x - 1][y - 1] = '*';
	}
	}
	}

	}*/
	scanf("%d %d", &x, &y);
	while (1)
	{
		
		if (board[x - 1][y - 1] == '#')
		{
			//board[x - 1][y - 1] = '*';
			//break;
			//break;
		}

		else if (x > 3 || x < -1 || y > 3 || y < -1)
		{
			printf("输入错误，请重新输入\n");
			break;
		}
		else
		{
			board[x - 1][y - 1] = '*';

			break;
		}
	}
}
void computer_run(char board[ROW][COL], int row, int col)
{
	printf("电脑走->\n");
	int x = 0;
	int y = 0;
	x = rand() % ROW;
	y = rand() % COL;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char judge_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//int j = 0;
		//for (j = 0; j < col; j++)
		
			if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}
		
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	if (is_full(board, COL, ROW) == 1)
	{
		return 'Q';
	}
	return 'C';
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			/*else
				return 0;*/
		}
	}
		return 1;
}