#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void min_mult(int x, int y)//最大公约数，最小公倍数。
//{
//	int i = 0;
//	for (i = x; i >= 1; i--)
//	{
//		if (x % i == 0 && y % i == 0)
//			break;
//	}
//	printf( "%d" ,x*y / i);
//}
//int main()
//{
//	int ret = 0;
//	int input1 = 0;
//	int input2 = 0;
//	scanf("%d %d", &input1,&input2);
//	 min_mult(input1, input2);
//	//printf("%d", ret);
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n, i;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	for (i = m; i >= 1; i--)
//		if (m%i == 0 && n%i == 0)
//			break;
//	printf("%d\n", m*n/i);
//	return 0;
//}
//int main()
//{
//	char *a, str[20] = "I am a student!";
//	a = str; a = a + 10; printf("%s\n", a); return 0;
//}
//int ast(int x, int y, int * cp, int * dp)
//{
//	*cp = x + y; *dp = x - y; return 0;
//} int main()
//{
//	int a, b, c, d; a = 4; b = 3; ast(a, b, &c, &d); printf("%d %d\n", c, d); return 0;
//}
//void aver(int *arr)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ret += *(arr + i);
//	}
//	printf("%d\n" ,ret/10);
//}
//void min(int *arr)
//{
//	int i = 0;
//	for (i = 0; i < 10 - 1; i++)
//	{
//		int j = 0;
//		int tmp = 0;
//		for (j = 0; j < 10 - 1 -i;j++)
//		{
//			if (*arr > *(arr + 1))
//			{
//				*arr = tmp;
//				*arr = *(arr + 1);
//				*(arr + 1) = tmp;
//			}
//		}
//	}
//	printf("最小值为%d \n", *arr);
//	printf("最大值为%d\n", *(arr + 9));
//}
//int main()
//{
//	int arr[10] = { 10, 8, 9, 45, 65, 78, 98, 56, 75, 69 };
//	//printf("%d %d %d", aver(arr), min(arr), max(arr));
//	aver(arr);
//	min(arr);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		y = 0;
//	}
//	else if (x > 0 && x >= 10)
//	{
//		y = 2 * x;
//	}
//	else
//	{
//		y = x*x + 1;
//	}
//	printf("%d", y);
//	return 0;
//}
//int main()//perfect number
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 2; i < 1000; i++)
//	{
//		
//		int j = 0;
//		ret = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//				ret += j;
//		}
//		if (ret == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j, s, n; /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
//	printf("请输入所选范围上限：");
//	scanf("%d", &n); /* n的值由键盘输入*/
//	for (i = 2; i <= n; i++)
//	{
//		s = 0; /*保证每次循环时s的初值为0*/
//		for (j = 1; j<i; j++)
//		{
//			if (i%j == 0) /*判断j是否为i的因子*/
//				s += j;
//		}
//		if (s == i) /*判断因子这和是否和原数相等*/
//			printf("It's a perfect number:%d\n", i);
//	}
//	return 0;
//}