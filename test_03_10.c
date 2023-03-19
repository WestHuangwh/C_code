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



////offsetof//计算成员变量的偏移量
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main(void)
//{
//	printf("%d\n", offsetof(struct S, c1));//计算c1的偏移量
//	printf("%d\n", offsetof(struct S, i));//计算i的偏移量
//	printf("%d\n", offsetof(struct S, c2));//计算c2的偏移量
//	return 0;
//}



//掌握下面这些就可以把通讯录改成动态增长的版本了
//malloc用来在堆区开辟空间
//calloc
//free用来释放空间
//realloc






//动态内存开辟常见错误

////1.错误：对NULL指针的解引用操作
//#include<stdio.h>
//int main(void)
//{
//	int* p = (int*)malloc(1000000000);
//	//对malloc的返回值，做判断处理
//	*p = 20;//如果p的值是NULL,就会有问题
//	free(p);
//
//	return 0;
//}


////2.错误：对动态开辟空间的越界访问
//#include<stdio.h>
//int main(void)
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//此处发生了越界访问
//	for (int i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////3.错误：对非动态开辟空间使用free释放
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = {0};//在栈区上开辟的空间，不能用free来释放
//	int* p = arr;
//	free(p);//不能释放非动态开辟的空间
//	p = NULL;
//
//	return 0;
//}


////4.错误：使用free释放动态内存的一部分
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////5.错误：对同一块内存多次释放
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int* p = (int*)malloc(100);
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//
//	//释放
//	free(p);
//
//	return 0;
//}


////6.错误：动态开辟内存忘记释放（可能形成比较严重的内存泄漏）
//#include<stdio.h>
//#include<stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return ;
//	}
//	//使用
//
//
//}
//int main(void)
//{
//	test();
//	return 0;
//}



//动态开辟的空间，有两种回收方式
//1.主动用free释放
//2.程序结束





#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* GetMemory(char* p)
{
	p = (char*)malloc(100);//在堆区上开辟一个100个字节的地址
	return p;

}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//这里并没错，其本质是传入一个首元素的地址，
	            //如printf("hello world");就是传入字符串的首地址
	            //char*p = "hello world";
	free(str);
	str = NULL;

}
int main(void)
{
	Test();
	return 0;
}