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


////�ṹ�ڶ��뷽ʽ�����ʵ�ʱ�����ǿ����޸�Ĭ�϶�����
//#include<stdio.h>
//
////Ĭ�϶�������8
//
//#pragma pack(2)//��Ĭ�϶�������Ϊ2
//struct S
//{
//	char c1;//������ƫ���� �ĵط�
//	//1-3
//	int i;//4-7
//	char c2;//8
//	//9-11
//
//};
//#pragma pack()//ȡ�����õ�Ĭ�ϵĶ���������Ĭ�϶������Ļ�Ϊ8
//int main(void)
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}



//offsetof
#include<stdio.h>
#include<stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};

int main(void)
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}