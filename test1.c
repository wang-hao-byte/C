#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\n", arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//趟数。
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//比较
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j] ;
//				arr[j] = arr[j + 1];
//				arr[j = 1] = tmp;
//			}
//		}
//	}
//
//}
//void print(int arr ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每趟比较的对数。
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void fac(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		static int ret = 1;//static可以保留上次调用结束的值
//		ret *= i;
//		printf("%d的阶乘为 %d\n",i, ret);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入阶乘数");
//	scanf("%d", &n);
//	fac(n);
//	return 0;
//}
//求最大公约数算法
//求两个自然数的最大公约数设两个变量{ \displaystyle M }和{ \displaystyle N }
//如果{ \displaystyle M<N }，则交换{ \displaystyle M }和{ \displaystyle N }
//{\displaystyle M}被{ \displaystyle N }除，得到余数{ \displaystyle R }
//判断{ \displaystyle R = 0 }，正确则{ \displaystyle N }即为“最大公约数”，否则下一步
//将{ \displaystyle N }赋值给{ \displaystyle M }，将{ \displaystyle R }赋值给{ \displaystyle N }，重做第一步。
//void Max_com(int m, int n)//最大公约数非递归算法
//{
//	int i = 0;
//	for (i = m; i >= 1; i--)
//	{
//		if (m%i == 0 && n%i == 0)
//			break;
//	}
//	printf("最大公约数：%d\n", i);
	/*if (m >= n)
	{
		int r = m%n;
		if (r == 0)
		{
			printf("最大公约数：%d", n);
		}
		else
		{
			m = n;
			n = r;
			return m%n;
		}
	}
	else
	{

		int tmp = m;
		m = n;
		n = tmp;

	}*/
//}
//int Max_com(int n, int m)
//{
//	if (n%m == 0)
//		return m;
//	else
//		return Max_com(m, n%m);
//}
//int Max_com(int a, int b)//递归求最大公约数
//{
//	if (a%b == 0)
//		return b;
//	return Max_com(b, a%b);
//}
//int Min_com(int x, int y)
//{
//    int ret = x*y/Max_com(x,y);
//	return ret;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入m的值\n");
//	scanf("%d", &m);
//	printf("请输入n的值\n");
//	scanf("%d", &n);
//	printf("最大公约数：%d\n" ,(Max_com(m, n)));
//	printf("最小公倍数; %d \n,(Min_com(m,n))");
//	return 0;
//}