#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int Add(int n)
//{
//	if (n > 0 && n <= 10)
//	{
//		return 1;
//	}
//	else if (n >= 11 && n <= 20)
//	{
//		return 2;
//	}
//	else if (n >= 21 && n <= 40)
//	{
//		return 3;
//	}
//}
//int main()
//{
//	int n = 0;
//	int input = 0;
//	int num = 0;
//	scanf("%d", &n);
//
//	if (n >= 0 && n <= 40)
//	{
//		int input = Add(n);
//		if (input)
//		{
//			
//			switch (input)
//			{
//			case 1:
//				num = 6 * n;
//				break;
//			case 2:
//				num = 6 * 10 + (n - 10) * 2;
//				break;
//			case 3:
//				num = (6 * 10) + (10 * 2) + (n - 20);
//				break;
//			}
//		}
//
//		printf("%d", num);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main(void)
//{
//	system("cls");
//	printf("3");
//	Sleep(1000);
//
//	system("cls");
//	printf("2");
//	Sleep(1000);
//
//	system("cls");
//	printf("1");
//	Sleep(1000);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int input = 0;
	int age = 0;
	double num = 0;//inputΪѧ��������ageΪѧ�������䣬numΪѧ��������ܺ͡�
	printf("������ѧ������:>\n");
	scanf("%d", &input);
	if (input > 1 && input < 100)
	{
		printf("������ÿλѧ��������:>\n");
		for (int i = 0; i < input; i++)
		{
			scanf("%d", &age);
			if (age < 55 && age>15)
			{				
				num += age;
			}
			else
			{
				printf("ѧ�����䳬�����ƣ�����������");
			}
		}
		printf("ѧ����ƽ������Ϊ\n%.2lf", num / input);
	}
	else
	{
		printf("ѧ������������������������");
	}
	return 0;
}