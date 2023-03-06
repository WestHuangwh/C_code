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



////求出0~100000之间所有的水“仙花数”并输出
//// 比如说153= 1^3+5^3+3^3  所以153就是一个水仙花数。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i <=100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp=tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来求次方数的
//			sum += pow(tmp % 10, n);
//			tmp /=10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//	return 0;
//}


////设计一个函数来进行倒置字符串
//#include<stdio.h>
//#include<string.h>
//void reverse(char arr1[], int len)
//{
//	char* ch = arr1;
//	char* pch = arr1 + len - 1;
//	while (ch < pch)
//	{
//		char tmp = *(pch);
//		*(pch) = *(ch);
//		*(ch) = tmp;
//		ch++;
//		pch--;
//		
//	}
//	
//}
//int main()
//{
//	char arr[] =  "abcdef" ;
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}


////打印一个杨辉三角
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (j >= 1 && i >= 2)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数指针 -- 存放函数地址的指针 
//	//&函数名 -- 取到的就是函数的地址
//
//	//&函数名==函数名
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//pf就是一个函数指针变量
//	int (*pf)(int, int) = &Add;//int 是函数的返回类型，
//	int ret = (*pf)(3, 5);//(*pf)相当于函数名，（3,5）传入参数。
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//void test(char* str)
//{
//
//
//}
//int main()
//{
//	void (*pt)(char*)=&test;
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf是一个函数指针变量
//	//int (*pf)(int,int) = &Add;
//	
//	int (*pf)(int,int) = Add;//Add==pf，函数名也代表了一个地址
//
//	int ret = (*pf)(3, 5);//此处加不加解引用* 都是一样的效果，
//	//int ret = pf(3, 5);
//	//int ret = (*Add)(3, 5);
//	//int ret = Add(3,5);
//
//	printf("%d\n", ret);
//
//
//	return 0;
//}



//调用0地址处的函数
//(*(void(*)())0)();
//该函数无参，且返回类型是void,把零强制类型转换为函数指针类型





////利用函数指针数组制作一个加减乘除的简易计算器
//#include<stdio.h>
////简易菜单
//void menu()
//{
//	printf("*******1.Add     2.Snb**********\n");
//	printf("******3.Mul     4.Div   ********\n");
//	printf("*******     0.exit      ********\n");
//	printf("********************************\n");
//}
////加法函数
//int Add(int x, int y)
//{
//	return x + y;
//}
////减法函数
//int Sub(int x, int y)
//{
//	return x - y;
//}
////乘法函数
//int Mul(int x, int y)
//{
//	return x * y;
//}
////除法函数
//int Div(int x, int y)
//{
//	return x / y;
//}
////int (*pf1)(int, int) = Add;//指向Add的函数指针
////int (*pf2)(int, int) = Sub;//指向Sub的函数指针
////int (*pfArr[2])(int, int) = { Add,Sub };//pfArr就是一个函数指针数组
//
//int main()
//{
//	int input;
//	//计算器，计算整形变量的加减乘除
//	do {
//		menu();//打印菜单
//		//这是一个函数指针数组，存储着加减乘除函数的四个函数指针
//		//转移表 - 《C和指针》里有提到此概念
//		int (*pfArr[5])(int, int) = { NULL, Add,Sub,Mul,Div };
//
//		int x = 0;
//		int  y = 0;
//		int ret = 0;//ret放入计算的结果
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序!");
//		}
//		else 
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	
//	return 0;
//}



////快速排序函数
//void qsort(void* base,//base中存放的是待排序数组中第一个对象的地址
//	size_t num,//排序数据元素的个数
//	size_t size,//排序数据中一个元素的大小，单位是字节
//	int(*cmp_int)(const void* e1, const void* e2)
//);
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void cmp_int(const void* e1, const void* e2)
//{
//	return *(int*) e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	qsort(arr,sz,sizeof(arr[0]),cmp_int );
//	//打印
//	printf("");
//	return 0;
//}



//计算n 的阶乘
//#include<stdio.h>
//
//int num(int n)//函数定义写在main函数前面，不用声明
//{
//	int i;
//	int face = 1;
//	for (i = 1; i <= n; i++)
//	{
//		face *= i;
//
//	}
//	return face;
//}
//
//int main(void)
//{
//	int input;
//	printf("请输入n的值:>");
//	scanf("%d", &input);
//	printf("%d", num(input));
//
//	return 0;
//}



////内存操作函数
////memcpy - 内存拷贝
//
//#include<stdio.h>
//#include<assert.h>//为断言的头文件
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src != NULL);//断言两个指针不是空指针
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main(void)
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr2, arr1, 50);
//
//
//}


//#include<stdio.h>
//int * my_memcpy(int *str, int* left, int sz)
//{
//	while (*str)
//	{
//		int num = *left;
//		*left = *str;
//		*str = num;
//		str++;
//		left--;
//	}
//	for (int i = 0; i < left - 1; i++)
//	{
//		printf("%d", *left);
//
//	}
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 2,4,6,8,10 };
//	my_memcpy(arr, arr2, 20);
//	
//
//	return 0;
//}


#include<stdio.h>
int max(int*arr,int sz)
{
	int n = *arr;
	for (int i = 0; i < sz; i++)
	{
		if (*(arr+i) > n)
		{
			n = *(arr + i);
		}
	}
	return n;
}
int main(void)
{
	int arr[10] = { 6,5,4,3,2,1,8,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = max(arr,sz);
	printf("%d ", ret);

	
	return 0;
}