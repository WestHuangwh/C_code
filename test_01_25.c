#define _CRT_SECURE_NO_WARNINGS 1

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//3.


////ָ��������顣
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//�����p����һ��Ұָ��
//	int* p;//��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ���
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;//ָ��ĳ�ʼ��
//	//��ȷ֪����ʼ����ֵ
//	int a = 0;
//	int* ptr = &a;
//
//	//C���Ա����������ݵ�Խ����Ϊ��
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pand = arr+9;
//	while (p <= pand)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ���ָ�������ǰ���ǣ�
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9]-&arr[0]);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//�ü������ķ��������ַ����ĳ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen(); - ���ַ����ĳ���
//	int len = my_strlen("abc");//����ȥ�����ַ�������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//��ָ���ָ��ķ��������ַ����ĳ���
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//int main()
//{
//	//strlen(); - ���ַ����ĳ���
//	int len = my_strlen("abc");//����ȥ�����ַ�������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>//ָ���������
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa��һ������ָ�����
//	int** ppa = &pa;//paҲ��һ��������&paȡ��pa���ڴ�����ʼ��ַ
//	printf("%d\n", **ppa);
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//}s1,s2;//s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'H',20,3.14},"����",30,"w12345678" };//����
//	//.  ->
//	//printf("%c\n", s.sb.a);
//	//printf("%s\n", s.id);
//	struct Stu* pa = &s;
//	printf("%c\n", (*pa).sb.a);
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	printf("%s\n", pa->name);
//
//	return 0;
//}



//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)//��ֵ����
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.a, t.sb.b, t.sb.c, t.name, t.age, t.id);
//}
//void print2(struct Stu* pa)//��ַ����z
//{
//	printf("%c %d %lf %s %d %s\n", pa->sb.a, pa->sb.b, pa->sb.c, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'H',20,3.14},"����",30,"w12345678" };//����
//	//дһ��������ӡs������
//	print1(s);
//	print2(&s);
//
//	return 0;
//}



#include<stdio.h>
void test()
{
	int a = 0;
	int b = 0;
	int c = a + b;

}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		arr[i] = i + 1;

	}	
	for (int i = 0; i < sz; i++)
	{
		test();
		arr[i] = i + 1;
		printf("%d ", arr[i]);

	}

	return 0;
}