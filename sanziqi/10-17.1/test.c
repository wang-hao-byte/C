#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("***    1  .play  ******\n");
	printf("***    0  .exit  ******\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board,ROW,COL);
	show_board(board, COL, ROW);
	while (1)//必须写入循环，否则只可以执行一步。
	{
		player_run(board, ROW, COL);
		show_board(board, COL, ROW);
		ret = judge_win(board, COL, ROW);
		if (ret != 'C')//如果不是平局，跳出循环不再执行
		{
			break;
		}
		computer_run(board, ROW, COL);
		show_board(board, COL, ROW);
		ret = judge_win(board, COL, ROW);
		if (ret != 'C')//如果不是平局，跳出循环不再执行
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
int main()
{
	menu();
	int input = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:

				break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
	return 0;
}