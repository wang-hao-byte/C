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
	while (1)//����д��ѭ��������ֻ����ִ��һ����
	{
		player_run(board, ROW, COL);
		show_board(board, COL, ROW);
		ret = judge_win(board, COL, ROW);
		if (ret != 'C')//�������ƽ�֣�����ѭ������ִ��
		{
			break;
		}
		computer_run(board, ROW, COL);
		show_board(board, COL, ROW);
		ret = judge_win(board, COL, ROW);
		if (ret != 'C')//�������ƽ�֣�����ѭ������ִ��
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
			printf("�����������������\n");
			break;
		}
	}
	return 0;
}