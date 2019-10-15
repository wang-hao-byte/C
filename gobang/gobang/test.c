#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	//ShowBoard(board, ROW, COL);
	//PlayerRun(board, ROW, COL);
	//ComputerRun(board, ROW, COL);
	int ret = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		ShowBoard(board, ROW, COL);
		PlayerRun(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ComputerRun(board, ROW, COL);
		ret = JudgeWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret =='*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");
	}
     
	else
	{
		printf("平局");
	}
}
void meau()//菜单
{
	printf("***********************\n"); 
	printf("****   1. paly   ******\n");
	printf("****   0. exit   ******\n");
	printf("***********************\n");
}

void Test()
{
	
	int input = 0;
	do{
	printf("请输入\n");
	meau();
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	Test();
	return 0;
}