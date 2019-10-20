#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fibonacci(int n)
//{
//	if (n >= 2)
//	{
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//	else if (n = 2)
//		return 1;
//	else
//		return 0;
//
//}
//void change()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 0; i <= 1000000; i++)
//	{
//		n = i - fibonacci();
//	}
//}
//int main()
//{
//	int k = 0;//求第k个
//	/*printf("请输入要求的斐波那契数\n");*/
//	scanf("%d", &k);
//	//int ret = fibonacci(k);
////	/*printf("%d\n", ret);*/
////
////	return 0;
////}
//int mix_mult(int x,int y)
//{
//	//int z = 1;
//	///*int n = 0;
//	//int i = 0;*/
//	//while (z==1)
//	//{
//	//	int tmp = 0;
//	//	if (x > y)
//	//	{
//	//		z = x / y;
//	//		z = x / z;
//	//	}
//	//	else if (x<y)
//	//	{
//	//		x = tmp;
//	//		x = y;
//	//		y = tmp;
//	//		z = x / y;
//	//		z = x / z;
//	//	}
//	//	else
//	//	{
//	//		return x*y;
//	//	}
//	//	
//	//}
//
//	//int z = x / y;
//	return (x*y) /1;
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	scanf("%d %d", &input1, &input2);
//	int ret = mix_mult(input1, input2);
//	//int ret = sum(input1, input2);
//	printf("%d", ret);
//	return 0;
//}
int main()
{
	char s[6] = { "ABCDEF" };
	printf("%d", sizeof(s) / sizeof(s[0]));
	return 0;
}
