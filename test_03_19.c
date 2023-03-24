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


#include<stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j =0; j<n-i-1; j++)
		{
			printf(" ");
		}
		//j = 0;
		for (j = 0; j<2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");

		}
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}