#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//struct//�����ṹ�壬ֻ��ʹ��һ��
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
//	struct S s1 = { 20,"�",24.4 };
//	printf("%lf\n", s1.i);
//	return 0;
//}


//#include<stdio.h>
//struct Stu
//{
//	int a;
//	char arr;
//	double b;
//	struct Stu s1;//����
//
//}s;
////����ṹ��Ĵ�С
////��һ����Ա�����ڴ��е�0ƫ�����ĵط�
////VSĬ�ϵĶ�����Ϊ8��
////������ȡ��Ա��С��Ĭ�϶���������Сֵ���������ĵ�ַ��
////�����ṹ��Ĵ�С�����г�Ա�ж����������Ǹ���������
//int main(void)
//{
//	
//	return 0;
//}


#include<stdio.h>
int main(void)
{
	int input=0;
	printf("������һ������:>");
	scanf("%d", &input);

	int i = 0;
	for (i=0; i < input; i++)
	{
		for (int j = 1; j <= i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i1 = 0; i1 < input-1; i1++)
	{
		for (int j1 =1; j1 <= input-i1-1; j1++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}