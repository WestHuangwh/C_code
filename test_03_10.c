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



////offsetof//�����Ա������ƫ����
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main(void)
//{
//	printf("%d\n", offsetof(struct S, c1));//����c1��ƫ����
//	printf("%d\n", offsetof(struct S, i));//����i��ƫ����
//	printf("%d\n", offsetof(struct S, c2));//����c2��ƫ����
//	return 0;
//}



//����������Щ�Ϳ��԰�ͨѶ¼�ĳɶ�̬�����İ汾��
//malloc�����ڶ������ٿռ�
//calloc
//free�����ͷſռ�
//realloc






//��̬�ڴ濪�ٳ�������

////1.���󣺶�NULLָ��Ľ����ò���
//#include<stdio.h>
//int main(void)
//{
//	int* p = (int*)malloc(1000000000);
//	//��malloc�ķ���ֵ�����жϴ���
//	*p = 20;//���p��ֵ��NULL,�ͻ�������
//	free(p);
//
//	return 0;
//}


////2.���󣺶Զ�̬���ٿռ��Խ�����
//#include<stdio.h>
//int main(void)
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//�˴�������Խ�����
//	for (int i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////3.���󣺶ԷǶ�̬���ٿռ�ʹ��free�ͷ�
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = {0};//��ջ���Ͽ��ٵĿռ䣬������free���ͷ�
//	int* p = arr;
//	free(p);//�����ͷŷǶ�̬���ٵĿռ�
//	p = NULL;
//
//	return 0;
//}


////4.����ʹ��free�ͷŶ�̬�ڴ��һ����
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////5.���󣺶�ͬһ���ڴ����ͷ�
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int* p = (int*)malloc(100);
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	//�ͷ�
//	free(p);
//
//	return 0;
//}


////6.���󣺶�̬�����ڴ������ͷţ������γɱȽ����ص��ڴ�й©��
//#include<stdio.h>
//#include<stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return ;
//	}
//	//ʹ��
//
//
//}
//int main(void)
//{
//	test();
//	return 0;
//}



//��̬���ٵĿռ䣬�����ֻ��շ�ʽ
//1.������free�ͷ�
//2.�������





#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* GetMemory(char* p)
{
	p = (char*)malloc(100);//�ڶ����Ͽ���һ��100���ֽڵĵ�ַ
	return p;

}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//���ﲢû���䱾���Ǵ���һ����Ԫ�صĵ�ַ��
	            //��printf("hello world");���Ǵ����ַ������׵�ַ
	            //char*p = "hello world";
	free(str);
	str = NULL;

}
int main(void)
{
	Test();
	return 0;
}