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



////��ӡһ������
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//�ϲ���
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
//	//�²���
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
//	printf("***********1.��ʼ��Ϸ       ************\n");
//	printf("***********0.�˳���Ϸ       ************\n");
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
//		printf("�������:> ");
//		scanf("%d", &guts);
//		if (guts < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guts > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
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
//		printf("��ѡ��:> ");
//		scanf("%d", &a);
//
//		switch (a)
//		{
//		case 1:
//			printf("��������Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//		}
//
//	} while (a);
//	return 0;
//
//}


//
//#include<stdio.h>
//void Mul(int x)
//{
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%4d     ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int input = 0;
//	scanf("%d", &input);
//	Mul(input);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//is_prim(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prim(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int IsYear(input)
//{
//	if (input % 4 == 0 && input % 400 != 0 || input % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main(void)
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = IsYear(input);
//	if (ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//void Num(int n)
//{
//	if (n > 9)
//		Num(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main(void)
//{
//	int input = 0;
//	scanf("%d", &input);
//	Num(input);
//	return 0;
//}



//#include<stdio.h>
////�ǵݹ�
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num*= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}



////�ݹ�
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	return Fac(n - 1) * n;
//}
//int main(void)
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = Fac(input);
//	printf("%d\n", ret);
//	return 0;
//}



////ģ��ʵ��strlen ����
//#include<stdio.h>
//int my_strlen(char* ch)
//{
//	int cout = 0;
//	while (*ch!=0)
//	{
//		if (*ch != 0)
//		{
//			ch++;
//			cout++;
//		}
//	}
//	return cout;
//}
//int main(void)
//{
//	char arr[] = "Hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//
////�õݹ�ģ��ʵ��strlen����
//#include<stdio.h>
//int my_strlen(char* ch)
//{
//	if (*ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(ch + 1);
//
//	}
//		
//}
//int main(void)
//{
//	char arr[] = "Hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf(arr);
//
//	return 0;
//}


#include<stdio.h>
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		
		return DigitSum(n / 10)+n%10;
	}
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n",DigitSum(n));
	return 0;
}