#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//struct//匿名结构体，只能使用一次
//{
//	int a;
//	char arr;
//
//}sb;
//
//struct S
//{
//	int age;
//	char name[20];
//	double i;
//}s1,s2;
//int main(void)
//{
//	struct S s1 = { 20,"李华",24.4 };
//	printf("%lf\n", s1.i);
//	return 0;
//}


//#include<stdio.h>
//struct Stu
//{
//	int a;
//	char arr;
//	double b;
//	struct Stu s1;//链表
//
//}s;
////计算结构体的大小
////第一个成员放在内存中的0偏移量的地方
////VS默认的对其数为8；
////对齐数取成员大小和默认对其数的最小值得整数倍的地址处
////整个结构体的大小是所有成员中对齐数最大的那个的整数倍
//int main(void)
//{
//	
//	return 0;
//}


#include<stdio.h>
int main(void)
{
	int input=0;
	printf("请输入一个数字:>");
	scanf("%d", &input);

	int i = 0;
	for (i=0; i < input; i++)
	{
		for (int j = 1; j <= i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i1 = 0; i1 < input-1; i1++)
	{
		for (int j1 =1; j1 <= input-i1-1; j1++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}