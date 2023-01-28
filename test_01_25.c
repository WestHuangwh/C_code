#define _CRT_SECURE_NO_WARNINGS 1

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了：指针走一步，能走多远（步长）
//3.


////指针遍历数组。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	*p = 20;//非法访问内存了
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;//指针的初始化
//	//明确知道初始化的值
//	int a = 0;
//	int* ptr = &a;
//
//	//C语言本身不会检查数据的越界行为的
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pand = arr+9;
//	while (p <= pand)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针和指针相减的前提是：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9]-&arr[0]);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//用计数器的方法来求字符串的长度
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen(); - 求字符串的长度
//	int len = my_strlen("abc");//传过去的是字符串的首元素的地址
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//用指针减指针的方法来求字符串的长度
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//int main()
//{
//	//strlen(); - 求字符串的长度
//	int len = my_strlen("abc");//传过去的是字符串的首元素的地址
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>//指针遍历数组
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa是一个二级指针变量
//	int** ppa = &pa;//pa也是一个变量，&pa取出pa在内存中起始地址
//	printf("%d\n", **ppa);
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1和s2也是结构体变量
////s1,s2是全局变量
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'H',20,3.14},"张三",30,"w12345678" };//对象
//	//.  ->
//	//printf("%c\n", s.sb.a);
//	//printf("%s\n", s.id);
//	struct Stu* pa = &s;
//	printf("%c\n", (*pa).sb.a);
//	//使用结构体指针访问指向对象的成员
//	printf("%s\n", pa->name);
//
//	return 0;
//}



//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)//传值调用
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.a, t.sb.b, t.sb.c, t.name, t.age, t.id);
//}
//void print2(struct Stu* pa)//传址调用z
//{
//	printf("%c %d %lf %s %d %s\n", pa->sb.a, pa->sb.b, pa->sb.c, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'H',20,3.14},"张三",30,"w12345678" };//对象
//	//写一个函数打印s的内容
//	print1(s);
//	print2(&s);
//
//	return 0;
//}



#include<stdio.h>
void test()
{
	int a = 0;
	int b = 0;
	int c = a + b;

}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		arr[i] = i + 1;

	}	
	for (int i = 0; i < sz; i++)
	{
		test();
		arr[i] = i + 1;
		printf("%d ", arr[i]);

	}

	return 0;
}