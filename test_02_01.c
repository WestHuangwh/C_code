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



#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (j == i)
			{
				arr[i][j] = 1;
			}
			if (j >= 1 && i >= 2)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}