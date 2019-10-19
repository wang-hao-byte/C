#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board(mine,ROWS,COLS,'0');
	init_board(show,ROWS,COLS ,'*');
	//show_board(mine, ROW, COL);
	show_board(show, ROW, COL);
	set_mine(mine, ROW, COL);
	//show_board(mine, ROW, COL);
	find_mine(mine, show, ROW, COL);
}
void menu()
{
	printf("*********************\n");
	printf("***     1.  play*****\n");
	printf("***     0.  exit*****\n");
	printf("*********************\n");
}
void Test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			break;
		default :
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input); 
}
int main()
{
	Test();
	return 0;
}