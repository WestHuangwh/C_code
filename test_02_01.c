#define _CRT_SECURE_NO_WARNINGS 1

//����ֽ��򣺰����ݵĵ�λ�ֽ�������ݴ���ڸߵ�ַ������λ�ֽ�������ݴ���ڵ͵�ַ������˴洢��
//С���ֽ��򣺰����ݵĵ�λ�ֽ�������ݴ���ڵ͵�ַ������λ�ֽ�������ݴ���ڸߵ�ַ����С�˴洢��



////д�����жϵ�ǰ�������ֽ���
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = &a;//��char���͵�ָ�����������ʵ�һ���ֽڵ�ַ�������õõ���һ���ֽڵ�����
//               //ָ�����;����������õ�Ȩ��
// 
//	if (*p = 1)//����͵�ַ�ϵ����ݵ��ڵ�λ�ֽ����ϵ����ݣ���˵��ΪС�˴洢
//	{
//		printf("С��\n");
//	}
//	else//����͵�ַ�ϵ����ݲ����ڵ�λ�ֽ����ϵ����ݣ���˵��Ϊ��˴洢
//	{
//		printf("���\n");
//	}
//	   //*p == 1 ? printf("С��\n") : printf("���\n");//��Ŀ������
// 
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = 10;
//	char ch = 'w';
//	char* pc = &ch;
//	double* d[5];//����һ��ָ������
//	double*(*pd)[10] = &d;// ����ָ��ָ��ָ������
//
//	//int arr[10] = {1,2,3,4,5};
//	//int (*parr)[10]= &arr;//ȡ����������ĵ�ַ
//
//	//parr ����һ������ָ�� - ���д�ŵ�������ĵ�ַ
//
//	//arr;//arr��������Ԫ�صĵ�ַ����ͬ��arr[0]�ĵ�ַ
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	return 0;
//}


//
//��������������Ԫ�صĵ�ַ
//�����������⣺
//1.sizeof(������) -- ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������ -- ��������ʾ�������飬ȡ��������������ĵ�ַ


//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;//����һ������ָ��
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa)+ i));//pa�����õõ�arr,Ҳ����������Ԫ�صĵ�ַ��Ȼ���ٽ����õõ��������Ԫ��
//	}
//	return 0;
//}



//#include<stdio.h>
//void print(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////p��һ������ָ��
//void print2(int (*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print(arr, 3, 5);//ֱ��forѭ��������ά����
//
//	print2(arr, 3, 5);// arr�Ƕ�ά�������Ԫ�صĵ�ַ����ά�������Ԫ�صĵ�ַ�ǣ���һ�У�
//	return 0;
//}



//parr3��һ���洢����ָ���ָ�����飬
//�������ܹ����10������ָ��,ÿ������ָ��ָ��һ�����飬
//�������Ԫ�أ�ÿ��Ԫ����int���͵�
//int��* parr3[10])[5];



////���0~100000֮�����е�ˮ���ɻ����������
//// ����˵153= 1^3+5^3+3^3  ����153����һ��ˮ�ɻ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i <=100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp=tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow��������η�����
//			sum += pow(tmp % 10, n);
//			tmp /=10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//	return 0;
//}


////���һ�����������е����ַ���
//#include<stdio.h>
//#include<string.h>
//void reverse(char arr1[], int len)
//{
//	char* ch = arr1;
//	char* pch = arr1 + len - 1;
//	while (ch < pch)
//	{
//		char tmp = *(pch);
//		*(pch) = *(ch);
//		*(ch) = tmp;
//		ch++;
//		pch--;
//		
//	}
//	
//}
//int main()
//{
//	char arr[] =  "abcdef" ;
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}


////��ӡһ���������
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (j >= 1 && i >= 2)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//����ָ�� -- ��ź�����ַ��ָ�� 
//	//&������ -- ȡ���ľ��Ǻ����ĵ�ַ
//
//	//&������==������
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;//int �Ǻ����ķ������ͣ�
//	int ret = (*pf)(3, 5);//(*pf)�൱�ں���������3,5�����������
//	printf("%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//void test(char* str)
//{
//
//
//}
//int main()
//{
//	void (*pt)(char*)=&test;
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf��һ������ָ�����
//	//int (*pf)(int,int) = &Add;
//	
//	int (*pf)(int,int) = Add;//Add==pf��������Ҳ������һ����ַ
//
//	int ret = (*pf)(3, 5);//�˴��Ӳ��ӽ�����* ����һ����Ч����
//	//int ret = pf(3, 5);
//	//int ret = (*Add)(3, 5);
//	//int ret = Add(3,5);
//
//	printf("%d\n", ret);
//
//
//	return 0;
//}



//����0��ַ���ĺ���
//(*(void(*)())0)();
//�ú����޲Σ��ҷ���������void,����ǿ������ת��Ϊ����ָ������





////���ú���ָ����������һ���Ӽ��˳��ļ��׼�����
//#include<stdio.h>
////���ײ˵�
//void menu()
//{
//	printf("*******1.Add     2.Snb**********\n");
//	printf("******3.Mul     4.Div   ********\n");
//	printf("*******     0.exit      ********\n");
//	printf("********************************\n");
//}
////�ӷ�����
//int Add(int x, int y)
//{
//	return x + y;
//}
////��������
//int Sub(int x, int y)
//{
//	return x - y;
//}
////�˷�����
//int Mul(int x, int y)
//{
//	return x * y;
//}
////��������
//int Div(int x, int y)
//{
//	return x / y;
//}
////int (*pf1)(int, int) = Add;//ָ��Add�ĺ���ָ��
////int (*pf2)(int, int) = Sub;//ָ��Sub�ĺ���ָ��
////int (*pfArr[2])(int, int) = { Add,Sub };//pfArr����һ������ָ������
//
//int main()
//{
//	int input;
//	//���������������α����ļӼ��˳�
//	do {
//		menu();//��ӡ�˵�
//		//����һ������ָ�����飬�洢�żӼ��˳��������ĸ�����ָ��
//		//ת�Ʊ� - ��C��ָ�롷�����ᵽ�˸���
//		int (*pfArr[5])(int, int) = { NULL, Add,Sub,Mul,Div };
//
//		int x = 0;
//		int  y = 0;
//		int ret = 0;//ret�������Ľ��
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����!");
//		}
//		else 
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	
//	return 0;
//}



////����������
//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//	size_t num,//��������Ԫ�صĸ���
//	size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//	int(*cmp_int)(const void* e1, const void* e2)
//);
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void cmp_int(const void* e1, const void* e2)
//{
//	return *(int*) e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	qsort(arr,sz,sizeof(arr[0]),cmp_int );
//	//��ӡ
//	printf("");
//	return 0;
//}



//����n �Ľ׳�
//#include<stdio.h>
//
//int num(int n)//��������д��main����ǰ�棬��������
//{
//	int i;
//	int face = 1;
//	for (i = 1; i <= n; i++)
//	{
//		face *= i;
//
//	}
//	return face;
//}
//
//int main(void)
//{
//	int input;
//	printf("������n��ֵ:>");
//	scanf("%d", &input);
//	printf("%d", num(input));
//
//	return 0;
//}



////�ڴ��������
////memcpy - �ڴ濽��
//
//#include<stdio.h>
//#include<assert.h>//Ϊ���Ե�ͷ�ļ�
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src != NULL);//��������ָ�벻�ǿ�ָ��
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main(void)
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr2, arr1, 50);
//
//
//}


//#include<stdio.h>
//int * my_memcpy(int *str, int* left, int sz)
//{
//	while (*str)
//	{
//		int num = *left;
//		*left = *str;
//		*str = num;
//		str++;
//		left--;
//	}
//	for (int i = 0; i < left - 1; i++)
//	{
//		printf("%d", *left);
//
//	}
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 2,4,6,8,10 };
//	my_memcpy(arr, arr2, 20);
//	
//
//	return 0;
//}


#include<stdio.h>
int max(int*arr,int sz)
{
	int n = *arr;
	for (int i = 0; i < sz; i++)
	{
		if (*(arr+i) > n)
		{
			n = *(arr + i);
		}
	}
	return n;
}
int main(void)
{
	int arr[10] = { 6,5,4,3,2,1,8,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = max(arr,sz);
	printf("%d ", ret);

	
	return 0;
}