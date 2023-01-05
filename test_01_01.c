#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//
//
//	return 0;
//}



//
////写一个函数，交换两个变量的值。
//#include<stdio.h>
//void Add(int* pa, int* pb)//void表示函数没有返回值。
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d a = %d\n", a, b);
//
//	Add(&a, &b);
//
//	printf("交换后：a = %d b = %d", a, b);
//
//	return 0;
//}



////写一个函数判断是否为闰年。
//#include<stdio.h>
//int get_n(int x)
//{
//	if (x % 4 == 0 && x %100 != 0||(x % 400 == 0))
//	{
//		return 1;
//	}
//		return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int consit = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (get_n(i)==1)
//		{
//			printf("%d ", i);
//			consit++;
//		}
//	}
//	printf("\n闰年个数为：%d", consit);
//	return 0;
//}




////每调用一次函数就会将num的值加1
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//
//	printf("%d\n", num);
//
//	Add(&num);
//
//	printf("%d\n", num);
//
//	Add(&num);
//
//	printf("%d\n", num);
//
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	
//	printf("%s\n", strcpy(arr1, arr2));//函数的链式访问
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//函数返回的是打印在屏幕上字符的个数
//
//	
//
//	return 0;
//}
//


//函数的递归。
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;
//}





//#include<stdio.h>
//int test(int n)
//{
//	if (n < 100)//数值设置过大会出现栈溢出。
//	{
//		test(n + 1);
//	}
//	printf("%d ", n);
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}



////模拟实现一个strlen函数求字符串的长度。
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//用递归求阶乘。
//#include<stdio.h>
//int get_n(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return n * (get_n(n - 1));
//
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n",get_n(num));
//
//	return 0;
//}



//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1) + Fib(n-2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Fib(a));
//
//	return 0;
//}




////利用迭代求斐波那契数。
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int max = 0;
//	int i = 0;
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("%d\n", max);
//	return 0;
//}



////打印九九乘法表。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			if (j < i)
//			{
//				printf("%dx%d=%-2d    ", j, i, j * i);//-2d是为了排列整齐。有空格补充空位。
//
//			}
//			if (j == i)
//			{
//				printf("%dx%d=%-2d\n", j, i, j * i);
//
//			}
//		}
//	}
//
//	return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void nunm()
//{
//	printf("****************************************\n");
//	printf("***********1.开始游戏       ************\n");
//	printf("***********0.退出游戏       ************\n");
//	printf("****************************************\n");
//	
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	//printf("%d",red);
//	int guts = 0;
//	while (1)
//	{
//		printf("请猜数字:> ");
//		scanf("%d", &guts);
//		if (guts < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guts > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		nunm();
//		printf("请选择:> ");
//		scanf("%d", &a);
//
//		switch (a)
//		{
//		case 1:
//			printf("猜数字游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (a);
//	return 0;
//




////定义一个函数打印九九乘法表。
//#include<stdio.h>
//int Add(int n)
//{
//	int x = 0;
//	for (x = 1; x <= n; x++)
//	{
//		int j = 0;
//		for (j = 1; j <= x; j++)
//		{
//			printf("%dx%d=%-2d    ", j, x, j * x);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Add(n);
//
//	return 0;
//}



#include<stdio.h>
int Digitsum(int num)
{
	if (num % 10 !=9)
	{
		return num % 10 + Digitsum (num / 10);
	}
	else
	{
		return num;
	}

}

int main()
{
	int num = 17;
	int n = Digitsum(&num);
	printf("%d", n);
	return 0;
}