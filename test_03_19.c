#define _CRT_SECURE_NO_WARNINGS 1

////用指针打印一个整型数组，不能用下标
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//
//int main(void)
//
//{
//
//	int input = 0;
//	int n = 0;
//	scanf("%d %d",&input,&n);
//
//	int a = input;
//	int i = 0;
//	for (i = 0; i < n; i++)
//
//	{
//
//		input += input * 10 + a;
//
//	}
//
//	printf("%d\n", input);
//
//	return 0;
//
//}


////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//int main(void)
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//
//	}
//	return 0;
//}



////打印一个菱形
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//上部分
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j =0; j<n-i-1; j++)
//		{
//			printf(" ");
//		}
//		//j = 0;
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下部分
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int a,b,c;
//	int max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b )
//	{
//		max = a;
//		a = b;
//		b = max;
//	}
//	if (a < c)
//	{
//		max = a;
//		a = c;
//		c = max;
//	}
//	if (b < c)
//	{
//		max = b;
//		b = c;
//		c = max;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	for (int i = min; i>0; i++)
//	{
//		if (b % i == 0 && a % i == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int cout = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		/*if(i % 10 == 9)
//		{
//			printf("%d ", i);
//			cout++;
//		}*/
//		if (i / 10 ==9 || i % 10 == 9 )
//		{
//			printf("%d ", i);
//			cout++;
//		}
//	}
//	
//	printf("\n%d\n", cout);
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
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
//}



#include<stdio.h>
int main(void)
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	printf("请输入您需要查找的数字:>");
	scanf("%d", &k);
	int left = 0;
	int right = sz - 1;

	while (left <= right) {

		int mid = (left + right) / 2;

		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] == k) {
			printf("找到了，该元素下标是：%d\n", mid);
			break;
		}
	}

	if (left > right) {
		printf("对不起，没有找到该元素\n");
	}

	return 0;

}