#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//
//
//	return 0;
//}



//
////дһ����������������������ֵ��
//#include<stdio.h>
//void Add(int* pa, int* pb)//void��ʾ����û�з���ֵ��
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d a = %d\n", a, b);
//
//	Add(&a, &b);
//
//	printf("������a = %d b = %d", a, b);
//
//	return 0;
//}



////дһ�������ж��Ƿ�Ϊ���ꡣ
//#include<stdio.h>
//int get_n(int x)
//{
//	if (x % 4 == 0 && x %100 != 0||(x % 400 == 0))
//	{
//		return 1;
//	}
//		return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int consit = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (get_n(i)==1)
//		{
//			printf("%d ", i);
//			consit++;
//		}
//	}
//	printf("\n�������Ϊ��%d", consit);
//	return 0;
//}




////ÿ����һ�κ����ͻὫnum��ֵ��1
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//
//	printf("%d\n", num);
//
//	Add(&num);
//
//	printf("%d\n", num);
//
//	Add(&num);
//
//	printf("%d\n", num);
//
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	
//	printf("%s\n", strcpy(arr1, arr2));//��������ʽ����
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//�������ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//
//	
//
//	return 0;
//}
//


//�����ĵݹ顣
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;
//}





//#include<stdio.h>
//int test(int n)
//{
//	if (n < 100)//��ֵ���ù�������ջ�����
//	{
//		test(n + 1);
//	}
//	printf("%d ", n);
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}



////ģ��ʵ��һ��strlen�������ַ����ĳ��ȡ�
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//�õݹ���׳ˡ�
//#include<stdio.h>
//int get_n(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return n * (get_n(n - 1));
//
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n",get_n(num));
//
//	return 0;
//}



//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1) + Fib(n-2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Fib(a));
//
//	return 0;
//}


#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fib(n));

	return 0;
}