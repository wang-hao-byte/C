#include<stdio.h>
//int  my_strlen(char*str)//非递归
//{
//	int count = 1;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}	
//	return count;
//}
//int my_strlen(const char*str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	return 1+my_strlen(*str + 1);
//}
//int my_strlen(char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int my_strlen(char*str)
//{
//	char *p = str;
//	do
//	{
//		p++;
//	} while ((*p != '\0'));
//	return p - str;//利用指针相减得到差值
//}
//int my_strlen(char *str)
//{
//	char *p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	char* arr = "abcde";
//	int str = my_strlen(arr);//传参要传指针变量，不能提前解引用
//	printf("%d\n",str);
//
//	return 0;
//}

