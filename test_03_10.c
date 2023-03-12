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


////结构在对齐方式不合适的时候，我们可以修改默认对齐数
//#include<stdio.h>
//
////默认对齐数是8
//
//#pragma pack(2)//把默认对齐数改为2
//struct S
//{
//	char c1;//放在零偏移量 的地方
//	//1-3
//	int i;//4-7
//	char c2;//8
//	//9-11
//
//};
//#pragma pack()//取消设置的默认的对齐数，把默认对齐数改回为8
//int main(void)
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}



//offsetof
#include<stdio.h>
#include<stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};

int main(void)
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}