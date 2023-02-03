#define _CRT_SECURE_NO_WARNINGS 1

//大端字节序：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处（大端存储）
//小端字节序：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处（小端存储）



////写代码判断当前机器的字节序
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = &a;//用char类型的指针类型来访问第一个字节地址，解引用得到第一个字节的内容
//               //指针类型决定它解引用的权限
// 
//	if (*p = 1)//如果低地址上的内容等于低位字节序上的内容，就说明为小端存储
//	{
//		printf("小端\n");
//	}
//	else//如果低地址上的内容不等于低位字节序上的内容，就说明为大端存储
//	{
//		printf("大端\n");
//	}
//	   //*p == 1 ? printf("小端\n") : printf("大端\n");//三目操作符
// 
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = 10;
//	char ch = 'w';
//	char* pc = &ch;
//	double* d[5];//这是一个指针数组
//	double*(*pd)[10] = &d;// 数组指针指向指针数组
//
//	//int arr[10] = {1,2,3,4,5};
//	//int (*parr)[10]= &arr;//取出的是数组的地址
//
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//
//	//arr;//arr是数组首元素的地址，等同于arr[0]的地址
//
//	return 0;
//}



#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);

	return 0;
}