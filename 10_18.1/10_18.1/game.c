#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char board[ROWS][COLS], int row, int col ,int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void show_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		
			printf("%d ", i);
		
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	/*int x = rand() % row + 1;
	int y = rand() % col + 1;*/
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}int get_mine_count(char board[ROWS][COLS], int x, int y)
{
return 	board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x = 1][y + 1] -8*'0';

}
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (row*col-EASY_COUNT)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，再见\n");
				show_board(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';
				show_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("排雷成功\n");
	}
}