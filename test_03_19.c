#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main(void)
//{
//	//���ļ�
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)//�Է��ص�ָ������ж�
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;//�ÿ�ָ�룬��ֹ���Ϊ��ָ��
//	return 0;
//}

#include<stdio.h>
struct S
{
	char arr[10];
	int a;
	double b;

}sb;

int main(void)
{
	sb.a = 10;
	sb->b = 3.555;/*
	FILE* pf = fopen("test.dat", 'w');*/

	return 0;
}