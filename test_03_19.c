#define _CRT_SECURE_NO_WARNINGS 1

////��ָ���ӡһ���������飬�������±�
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


////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////���磺2 + 22 + 222 + 2222 + 22222
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


////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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