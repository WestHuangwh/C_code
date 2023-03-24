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




//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>

int main(void)

{

	int input = 0;
	int n = 0;
	scanf("%d %d",&input,&n);

	int a = input;
	int i = 0;
	for (i = 0; i < n; i++)

	{

		input += input * 10 + a;

	}

	printf("%d\n", input);

	return 0;

}

