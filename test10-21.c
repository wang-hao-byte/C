#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void min_mult(int x, int y)//���Լ������С��������
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
//	printf("��СֵΪ%d \n", *arr);
//	printf("���ֵΪ%d\n", *(arr + 9));
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
//	int i, j, s, n; /*����i����ѡ������Χ��j���Ƴ�����Χ��s��¼�ۼ�����֮��*/
//	printf("��������ѡ��Χ���ޣ�");
//	scanf("%d", &n); /* n��ֵ�ɼ�������*/
//	for (i = 2; i <= n; i++)
//	{
//		s = 0; /*��֤ÿ��ѭ��ʱs�ĳ�ֵΪ0*/
//		for (j = 1; j<i; j++)
//		{
//			if (i%j == 0) /*�ж�j�Ƿ�Ϊi������*/
//				s += j;
//		}
//		if (s == i) /*�ж���������Ƿ��ԭ�����*/
//			printf("It's a perfect number:%d\n", i);
//	}
//	return 0;
//}