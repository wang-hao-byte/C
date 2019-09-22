#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0 || 5;
	printf("%d\n", a);
	return 0;

}
int main()
{
	int a = 10;
	int b = 0;
	b = (a>10 ?  3 :  -3);
	printf("%d\n", b);
	return 0;
}
int main()
{
	int a = 5;
	int b = 2;
	int c = 3;
	int d = (c=a-b ,b=c-2 , c=b+c);
	printf("%d\n", d);
	return 0;
}
void test()
{
	int a = 1;
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	for (i = 0; i <= 10; i++)
		test();
		printf("%d\n", i);
	return 0;
}
int MAX(int x,int y)
{
	return (x>y ? x : y);
}
int main()
{
	int max = 0;
	max = MAX(2 , 5);
	printf("%d\n", max);
	return 0;


}
int main()
{
	int num = 10;
	int *p;
	p = &num;
	*p = 20;
	printf("%p\n", &num);
	printf("%p\n", p);
	return 0;
}
多分支的if语句
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 16)
	{
		printf("少年");
	}
	else if (age>16 && age < 28)
	{
		printf("青年");
	}
	else if (age > 28 && age < 40)
	{
		printf("中年");
	}
	else if (age > 40 && age < 60)
	{
		printf("中老年");
	}
	return 0;
}
输出1-100之间的奇数。
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		int j =i % 2;
		if (j == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
switch语句的使用。
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("monday\n");
		break;
	case 2:
		printf("tuesday\n");
		break;
	case 3:
		printf("wednesday\n");
		break;
	case 4:
		printf("thursday\n");
		break;
	case 5:
		printf("friday\n");
		break;
	case 6:
		printf("saturday\n");
		break;
	case 7:
		printf("sunday\n");
		break;
	default:
		printf("error\n");
		break;
	}
	return 0;
}
用while循环打出1-10的数字
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}
int main()
{
	int i = 0;
	while (i <= 9)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
		
	}
	return 0;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
		return 0;
	
}