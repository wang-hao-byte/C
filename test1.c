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
//	//������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//�Ƚ�
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
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿ�˱ȽϵĶ�����
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
//		static int ret = 1;//static���Ա����ϴε��ý�����ֵ
//		ret *= i;
//		printf("%d�Ľ׳�Ϊ %d\n",i, ret);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������׳���");
//	scanf("%d", &n);
//	fac(n);
//	return 0;
//}
//�����Լ���㷨
//��������Ȼ�������Լ������������{ \displaystyle M }��{ \displaystyle N }
//���{ \displaystyle M<N }���򽻻�{ \displaystyle M }��{ \displaystyle N }
//{\displaystyle M}��{ \displaystyle N }�����õ�����{ \displaystyle R }
//�ж�{ \displaystyle R = 0 }����ȷ��{ \displaystyle N }��Ϊ�����Լ������������һ��
//��{ \displaystyle N }��ֵ��{ \displaystyle M }����{ \displaystyle R }��ֵ��{ \displaystyle N }��������һ����
//void Max_com(int m, int n)//���Լ���ǵݹ��㷨
//{
//	int i = 0;
//	for (i = m; i >= 1; i--)
//	{
//		if (m%i == 0 && n%i == 0)
//			break;
//	}
//	printf("���Լ����%d\n", i);
	/*if (m >= n)
	{
		int r = m%n;
		if (r == 0)
		{
			printf("���Լ����%d", n);
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
//int Max_com(int a, int b)//�ݹ������Լ��
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
//	printf("������m��ֵ\n");
//	scanf("%d", &m);
//	printf("������n��ֵ\n");
//	scanf("%d", &n);
//	printf("���Լ����%d\n" ,(Max_com(m, n)));
//	printf("��С������; %d \n,(Min_com(m,n))");
//	return 0;
//}