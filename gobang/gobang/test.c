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
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");
	}
     
	else
	{
		printf("ƽ��");
	}
}
void meau()//�˵�
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
	printf("������\n");
	meau();
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	Test();
	return 0;
}