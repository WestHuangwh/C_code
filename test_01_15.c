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



////23��1��16��ÿ��һ�⣬���ѧ����ƽ������
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int age = 0;
//	double num = 0;//inputΪѧ��������ageΪѧ�������䣬numΪѧ��������ܺ͡�
//	printf("������ѧ������:>\n");
//	scanf("%d", &input);
//	if (input > 1 && input < 100)
//	{
//		printf("������ÿλѧ��������:>\n");
//		for (int i = 0; i < input; i++)
//		{
//			scanf("%d", &age);
//			if (age < 55 && age>15)
//			{				
//				num += age;
//			}
//			else
//			{
//				printf("ѧ�����䳬�����ƣ�����������");
//			}
//		}
//		printf("ѧ����ƽ������Ϊ\n%.2lf", num / input);
//	}
//	else
//	{
//		printf("ѧ������������������������");
//	}
//	return 0;
//}

//
////�õݹ���쳲���������
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;//��ǰ�������ĺ͸�ֵ����������
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
//	if (n > 2 && n < 30)
//	{
//		printf("%d\n", Fib(n));
//	}
//
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;//��λ��������λ���� - '&'
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//����������Ϊ�㣬ֻ��ȫΪ1��Ϊ1���Ҳ���������������
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;//��λ��������λ���� - '|'
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//������1��Ϊ1,ȫ��Ϊ�㣬�Ҳ���������������
//
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//��λ��������λ����򣬶�Ӧ�Ķ�����λ ������� - '^'
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//������ͬΪ0������Ϊ1���Ҳ���������������
//
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//void game()
//{
//	char arr[10][10] = { 0 };
//	int i = 0;
//
//	printf("---------------------\n");
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] = '0';
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("---------------------\n");
//}
//void menu()
//{
//	printf("**************************************\n");
//	printf("*********     1.play         *********\n");
//	printf("*********     2.����         *********\n");
//	printf("*********     0.exit         *********\n");
//	printf("**************************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break; 
//		case 2:
//			printf("��δ�����������ڴ�\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//#include<stdio.h>
//void init(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[10], int sz)
//{
//	int i = 0;
//	int n = 0;
//	//int tmp = 0;
//	while (n < (sz -1))
//	{
//		int tmp = arr[n];
//		arr[n] = arr[sz - 1];
//		arr[sz - 1] = tmp;
//		n++;
//		sz--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz); 
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}



