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



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	return 0;
//}


//
//数组名是数组首元素的地址
//但有两个例外：
//1.sizeof(数组名) -- 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名 -- 数组名表示整个数组，取出的是整个数组的地址


//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;//这是一个数组指针
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa)+ i));//pa解引用得到arr,也就是数组首元素的地址，然后再解引用得到数组的首元素
//	}
//	return 0;
//}



//#include<stdio.h>
//void print(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////p是一个数组指针
//void print2(int (*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print(arr, 3, 5);//直接for循环遍历二维数组
//
//	print2(arr, 3, 5);// arr是二维数组的首元素的地址，二维数组的首元素的地址是：第一行！
//	return 0;
//}



//parr3是一个存储数组指针的指针数组，
//该数组能够存放10个数组指针,每个数组指针指向一个数组，
//数组五个元素，每个元素是int类型的
//int（* parr3[10])[5];



#include<stdio.h>
int main()
{


	return 0;
}