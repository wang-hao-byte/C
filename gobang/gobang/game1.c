#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
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
void ShowBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
}
void PlayerRun(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请输入坐标：\n");
	while (1)
	{
		printf("玩家走->\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入。\n");
		}
	}

}
void ComputerRun(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("电脑走->\n");
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = "#";
				break;
		}
	}
}
//char JudgeWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < row; i++)
//	{
//		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[0][i] != ' ')
//		{
//			return board[0][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
//	{
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[0][3] && board[3][0] != ' ')
//	{
//		return board[0][2];
//	}
	/*if (IsFull(board, ROW, COL) == 1)
	{
		return 'p';
	}
	return 'c';*/
}
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			else
				return 1;
		}
	}
}
